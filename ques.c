#include<stdio.h>
int main()
{
    int arr[]={10,20,30,20,90,87,87,22},i;
    for (i=0;i<10;++i)
    {
        if(arr[i]==20)
        printf("\n successfully searched");
    }
    if(i==10)
    printf("search failed");
}