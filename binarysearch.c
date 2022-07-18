#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10],lft=0,rt=9,md=(lft+rt)/2,val,i;
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value to search ");
    scanf("%d",&val);
    while(lft<=rt)
    {
        if (val>a[md])
        lft=md+1;
        else
        if (val<a[md])
        rt=md-1;
        else
        {
            printf("found at location number=%d",md+1);
            break; //   jumps out of the loop block
        }
        md=(lft+rt)/2; //updating the value of md
    } //end of loop
    if(lft>rt)
    printf("no such value exist in the array.");
    getch();
}