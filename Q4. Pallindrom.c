// Check a string is Pallindrom or not
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int i,j,x,temp;
    scanf("%s",a);
    strcpy(b,a);//copy string from a to b
    x=strlen(a);// finding length of the string
    j=x-1;
    for(i=0;i<x/2;i++) //finding reverse of the string
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;

    }
    if(strcmp(a,b)==0){ // check weather both string is same or not
        printf("Pallindrom");
    }
    else{
        printf("Not a pallindrom");
    }

    return 0;
}
