#include<stdio.h>
void findRepeatedchrac(char name[],int size)
{
    int i;
    int hash[200]={0};
    printf("Repeated chracter is.....\n");
    for(i=0;name[i]!='\0';i++)
        hash[name[i]]++;
    for(i=0;i<200;i++)
    {
        if(hash[i]>1)
            printf("%c <<<<<<<<< %d\n",i,hash[i]);
    }
}

int main()
{
    char name[30]="chandshamsizafrul";
    findRepeatedchrac(name,30);
    return 0;
}