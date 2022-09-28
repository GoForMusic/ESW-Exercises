#include "HAL.h"

static uint8_t portVolt;

void hal_create(uint8_t portNo)
{
    portVolt=portNo;
}
int16_t hal_getVoltage(uint8_t channel)
{
    return channel;
}