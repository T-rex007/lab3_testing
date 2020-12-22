#include "unit_tests.h"




void app_main(void)
{
    //unitTesti2cMasterInit_(NULL);
    intergrationTest1(NULL);
    //start i2c task
    //xTaskCreate(i2cTask_, "i2cTask_", 2048, NULL, 10, NULL);
    for(;;){
        vTaskDelay(10);
    }
}