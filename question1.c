#include<stdio.h>
#include<string.h>

void findLengthString(char name[],int size)
{
    int i,length=0;
    for(i=0;name[i]!='\0';i++)
    {
        length++;
    }
    printf("The length of the string is %d",length);
}
int main()
{
    char name[20]="chandshamsi";
    findLengthString(name,20);
    return 0;
}