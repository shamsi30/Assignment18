#include<stdio.h>
void ConvertLowercase(char name[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(name[i]>=65 && name[i]<=97)
        {
            name[i] = name[i] + 32;
        }
    }
    printf("%s",name);
}
int main()
{
    char name[10]="CHAND";
    printf("String convert into uppercase to lowercase....\n");
    ConvertLowercase(name,10);
    return 0;
}