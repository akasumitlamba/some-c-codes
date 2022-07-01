//write a program for linear search
#include<stdio.h>
int main()
{
    int a[10],count,val;
    for (count=0;count<10;++count)
    {
        printf("a[%d]=",count);
        scanf("%d",&a[count]);
    }
        printf("enter the value to search: ");
        scanf("%d",&val);
        for(count=0;count<10;++count)
        {
            if(val==a[count])
            {
                printf("found at location number %d",count+1);
                break;  //takes the control out of the loop block
            }   //end of if block
        }   //end of for loop
        if (count==10)
        printf("no such value exists in the array...");
}