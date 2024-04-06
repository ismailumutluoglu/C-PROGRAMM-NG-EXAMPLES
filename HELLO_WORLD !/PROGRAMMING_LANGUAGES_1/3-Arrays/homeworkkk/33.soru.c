// 15 dk hızlanarak 480
// 20 dk sabit
// 15 dk yavaslıyor
// herhangi bir t aninda hizini veren program
#include <stdio.h>

int main()
{
    int time,v;

    printf("herhangi bir zaman girin");
    scanf("%d",&time);

    if(time <= 15)
    {
        v=32*time;
    }
    else if (time >= 16 || time <= 35)
    {
        v=480;
    }
    else{
        v=480-32*time;
    }

    printf("%d",v);

    return 0;
}