// Finding the roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;
    if(D<0)
    {
        printf("Invalid input");
    }
    else{
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("x1 = %f and x2 = %f",x1,x2);
    }

    return 0;

}
