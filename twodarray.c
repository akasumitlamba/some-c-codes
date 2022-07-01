//WAP that reads the values into the elements of a 2d array and prints them
#include<stdio.h>
int main()
{
    int scores[3][3],i,j;
    //reading values into the array
    for (i=0;i<3;++i) //outer loop
    {
        for (j=0;j<3;++j)   //inner loop
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&scores[i][j]);
        }
    }
    //now we are printing the values into matrix form
    printf("\n display the values into matric form: \n\n\n");
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
        {
            printf("%d\t",scores[i][j]);
        }
        printf("\n");
    }
}