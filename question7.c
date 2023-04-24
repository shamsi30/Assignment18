
#include<stdio.h>
#include<string.h>
void checkPalindrome(char name[],int size)
{
    int i=0,j=size-1;
    while(i<=j)
    {
        if(name[i]==name[j])
        {
            i++;
            j--;
        }
        else
            break;
    }
    if(i>j)
        printf("String is palindrome.");
    else
        printf("String is not palindrome.");

}

int main()
{
    char name[5]="nitin";
    checkPalindrome(name,5);
    return 0;
}