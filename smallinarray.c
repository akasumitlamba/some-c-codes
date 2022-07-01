#include<stdio.h>
int main()
{
    int n,count;
    float smallest;
    printf("enter the size of the array:");
    scanf("%d",&n);
    float values[n]; //declare of an array with size n

    for (count=0;count<n;++count)
    {
        printf("values[%d}]=",count);
        scanf("%f",&values[count]);
    } //end of loop block
    smallest=values[0];
    for (count=1;count<n;++count)
    {
        if (values[count]<smallest)
        {
            smallest=values[count];
        }   //end of if block
    }//end of loop block
printf("smallest value=%.2f",smallest);
}