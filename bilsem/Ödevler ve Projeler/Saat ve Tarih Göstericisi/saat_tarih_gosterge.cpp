/* time example */
#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, struct tm, difftime, time, mktime */
int dakika,saat,gun,ay,yıl,x,y,z,a,b;
int main ()
{
  time_t timer;
  struct tm y2k = {0};
  int seconds;

  y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
  y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;

  time(&timer);  /* get current time; same as: timer = time(NULL)  */

  seconds = difftime(timer,mktime(&y2k));
    yıl=seconds/31556926;
    x=seconds%31556926;
    ay=x/2629743;
    y=seconds%2629743;
    gun=y/86400;
    z=seconds%86400;
    saat=z/3600;
    a=seconds%3600;
    dakika=a/60;
    b=seconds%60;
    printf("Tarih:%d.%d.%d Saat:%d.%d.%d\n", gun+1, ay+1, yıl+2000, saat+1, dakika, b);

  return 0;
}