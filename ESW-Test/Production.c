#include "Production.h"
#include "Hal/HAL.h"

static int16_t lastVoltage;

void production_create()
{
    hal_create(10);
}

void production_meassureTemperature(uint8_t sensorNo)
{
    lastVoltage = hal_getVoltage(sensorNo);
}
int8_t production_getTemperature(uint8_t sensorNo)
{
    return lastVoltage*2;
}