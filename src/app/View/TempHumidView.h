#ifndef TEMPHUMIDVIEW_H
#define TEMPHUMIDVIEW_H

#include "LCD.h"

class TempHumidView
{
private:
    LCD *lcd;

public:
    TempHumidView(LCD *Lcd);
    virtual ~TempHumidView();
    void setTempHumiData(float temp, float humid);
};

#endif