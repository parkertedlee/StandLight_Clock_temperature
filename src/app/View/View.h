#ifndef __VIEW_H__
#define __VIEW_H__

#include <time.h>
#include <string>
#include "Led.h"
#include "LightState.h"
#include "LCD.h"


class View
{
private:
    int lightState;
    Led *light1;
    Led *light2;
    Led *light3;
    Led *light4;
    Led *light5;
    
    LCD *lcd;

public:
    View(Led *led1,Led *led2,Led *led3,Led *led4,Led *led5,LCD *lcd);
    virtual ~View();
    void setState(int state);
    void lightView();
    void lightOn_1();
    void lightOn_2();
    void lightOn_3();
    void lightOn_4();
    void lightOn_5();
    void lightOff();
    void LCDlight();
};

#endif /* __VIEW_H__ */