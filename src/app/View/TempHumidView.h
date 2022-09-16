#ifndef TEMPHUMIDVIEW_H
#define TEMPHUMIDVIEW_H

#include "LCD.h"
#include "Led.h"
#include "LightState.h"
#include <string>
#include "View.h"

class TempHumidView
{
private:
    LCD *lcd;
    Led *light1;
    Led *light2;
    Led *light3;
    Led *light4;
    Led *light5;

public:
    TempHumidView(Led *led1,Led *led2,Led *led3,Led *led4,Led *led5,LCD *Lcd);
    virtual ~TempHumidView();
    void setTempHumiData(float temp, float humid);
    void updateTempEvent(float temp, float humid);
    void lightView();
    void lightOn_1();
    void lightOn_2();
    void lightOn_3();
    void lightOn_4();
    void lightOn_5();
    void lightOff();
    void LCDlight();
};
#endif