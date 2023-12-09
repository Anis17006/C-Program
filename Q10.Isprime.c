//Program to identify prime numbers
#include<stdio.h>
const char* isprime(int x)
{
    int i,c=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)//Checking divisibility of the number
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        return "True";
    }
    else{
        return "False";
    }
}
int main()
{
    int n;
    scanf("%d",&n);//Taking input of the number
    printf("%s",isprime(n));
    return 0;
}
