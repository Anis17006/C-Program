  /*Print all numbers from 1 to 1000 in deceasing order.
    Every line should contain 5 numbers and separated by a tab.*/
#include<stdio.h>
int main()
{
    int i, j=1;
    for(i=1000;i>=1;i--)
    {
        printf("%d\t",i);
        if(j%5==0)
        {
            printf("\n");
        }
        j++;
    }
    return 0;
}
