#include<stdio.h>
#include<string.h>

void stringRevers(char name[],int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    {
       printf("%s",name); 
    }
}
int main()
{
    char name[6]="chand";
    stringRevers(name,6);
    return 0;
}