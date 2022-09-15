#include "TempHumidView.h"

TempHumidView::TempHumidView(LCD *Lcd)
{
    this -> lcd = Lcd;
}

TempHumidView::~TempHumidView()
{

}

void TempHumidView::setTempHumiData(float temp, float humid)
{
    char buff[30];
    sprintf(buff, "%.1fC,%.1f%", temp, humid);
    lcd ->WriteStringXY(0,10,buff);
    printf(buff);
    printf("%s\n",buff);
}