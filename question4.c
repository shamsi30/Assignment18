#include<stdio.h>

void ConvetUppercase(char name[],int size)
{
    int i;
    for(i=0;i<size;i++){
        if(name[i]>=97 && name[i]<=122)
        {
            name[i]=name[i] - 32;
        }
    }
    printf("%s",name);
}

int main()
{
    char name[10]="chand";
    printf("String convert into lowercase to uppercase...\n");
    ConvetUppercase(name,10);
    return 0;
}