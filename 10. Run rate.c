// printing the current run rate and required rate to win a ODI cricket match
//It takes three inputs(total run of the opposition, current run, ball left to face)
#include<stdio.h>
int main()
{
    float T,r1,r2,ball,i;
    scanf("%f",&T);
    for(i=0;i<T;i++)
    {
        scanf("%f%f%f",&r1,&r2,&ball);
        printf("%0.2f %0.2f\n",(r2*6/(300-ball)),((r1+1-r2)/(ball/6)));
    }
    return 0;
}
