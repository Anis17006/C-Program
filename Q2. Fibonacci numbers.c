// Printing fibonacci number
#include<stdio.h>
int main()
{
    int n, c1=0,c2=1,i,a;
    scanf("%d",&n);//taking input of number of terms.
    if(n==1){
        printf("%d ",c1);
    }
    else if(n==2){
        printf("%d %d ",c1,c2);
    }
    else{
            printf("%d %d ",c1,c2);
        for(i=2;i<n;i++)
        {
            a=c1+c2;
            printf("%d ",a);
            c1=c2;
            c2=a;
        }
    }

    return 0;
}
