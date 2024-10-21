#include <stdio.h>
#include <time.h>
int sn,dk,saat,a,b;
int main ()
{
  time_t timer;
  struct tm y2k = {0};
  int seconds;
  y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
  y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;
  time(&timer);
  seconds = difftime(timer,mktime(&y2k));
    b=seconds%86400;
    saat=b/3600;
    a=seconds%3600;
    dk=a/60;
    sn=seconds%60;
    saat=saat+1;
    //Saat:saat.dk.sn
    
    printf("Saat:%d.%d.%d\n",saat,dk,sn);
  return 0;
}