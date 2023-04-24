#include<stdio.h>
#include<string.h>
void checkAlphanumeric(char name[],int size)
{
    int i,countalpha=0,countdig=0;
    for(i=0;i<size;i++)
    {
        if(name[i]>=65 && name[i]<=97 || name[i]>=97 && name[i]<=122)
            countalpha++;
        else if(name[i]>=48 && name[i]<=57)
            countdig++;
    }
    if(countalpha>0 && countdig>0)
        printf("String is alphanumeric string.");
    else
        printf("String is not alphanumeric string.");
}
int main()
{
    char name[20];
    printf("Enter a name max length of 20:");
    gets(name);
    checkAlphanumeric(name,20);
    return 0;
}