#include<stdio.h>
void countWords(char name[],int size)
{
    int i,count =0;
    for(i=0;name[i]!='\0';i++){
        if(name[i]==' ')
            count++;
    }
    count++;
    printf("Total words present in sring = %d ",count);
}

int main()
{
    char name[50]="chand shmasi you are a good boy";
    countWords(name,50);
    return 0;
}