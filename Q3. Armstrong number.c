// Find Armstrong number.
#include<stdio.h>
int main()
{
    int n,a,b,s=0;
    scanf("%d",&n);// taking input of the number
    a=n;
    while(a/10!=0)
    {
        b=a%10;// finding the last digit
        a=a/10;// Preserve the division result for next iteration.
        s+=b*b*b;// sum of the cube of last digit.
    }
    s=s+a*a*a;// adding the cube of first digit.
    if(n==s){
        printf("Armstrong number");
    }
    else{
        printf("Not a Armstrong number");
    }
    return 0;
}
