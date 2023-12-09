//Count the total number from a set of numbers
// First line contain the total number of line and every line contain a set of numbers
#include<stdio.h>
#include<string.h>
int main ()
{
    char line[1000000];
    int count,i,T,j;
    scanf("%d",&T);//total number of line
    gets(line);// dummy gets() to read the newline character from input
    for(j=0;j<T;j++)
    {
        count=1;
        gets(line);// taking input of the set
        for (i=0;i<=strlen(line);i++)
        {
            if(line[i]==' ') // finding whitespace character
            {
                count++; // increasing count
            }
        }
        printf("%d\n",count); //printing the total count of numbers in line.
    }
    return 0;
}
