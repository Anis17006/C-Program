//Program to identify prime numbers
#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);//Taking input of the number
    for(i=2;i<n;i++)
    {
        if(n%i==0)//Checking divisibility of the number
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
    return 0;
}
