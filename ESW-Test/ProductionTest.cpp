#include "gtest/gtest.h"
#include "fff/fff.h"
DEFINE_FFF_GLOBALS

FAKE_VOID_FUNC(hal_create, uint8_t);
FAKE_VALUE_FUNC(int16_t, hal_getVoltage, uint8_t);


extern "C" {
    #include "Hal/HAL.h"
    #include "Production.h"
}

class ProductionTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
        RESET_FAKE(hal_create);
        RESET_FAKE(hal_getVoltage);
        FFF_RESET_HISTORY();
    };
    void TearDown() override {};
};

TEST_F(ProductionTest, Test_hal_create_is_called_and_temperature_calculated_correct)
{
    production_create();
    ASSERT_EQ(hal_create_fake.call_count,1);
    ASSERT_EQ(hal_create_fake.arg0_val,10);
}

TEST_F(ProductionTest, Test_hal_getVoltage_is_called)
{
    //Arenge
    uint8_t _sensor = 12;
    // Setup the value to be returned by the fake hal_getVoltage
    hal_getVoltage_fake.return_val = 15;

    //Act
    production_meassureTemperature(_sensor);
    int8_t _temp = production_getTemperature(_sensor);

    //Assert
    ASSERT_EQ(hal_getVoltage_fake.call_count,1);
    ASSERT_EQ(hal_getVoltage_fake.arg0_val, _sensor);

    ASSERT_EQ(_temp, 15*2);
    
}
