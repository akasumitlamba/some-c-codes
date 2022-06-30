//wap that read the tempersture of a city for the last 10 days into an array.
#include <stdio.h>
int main()




{
    float tmp[10];
    int n=0;
    while(n<10)
    {
        printf("enter the temperature of the day %d ",n+1);
        scanf("%f",&tmp[n]);
        ++n;
    }
n=0; //reinitializing the value of n again to 0.
while(n<10)
    {
        printf("temperature of day %d = %.2f\n",n+1,tmp[n]);
        ++n;
    }
}
