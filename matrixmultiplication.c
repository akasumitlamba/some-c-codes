#include<stdio.h>
int main()
{
    int a[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int b[][3]={
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };
    int c[3][3],sum=0,i,j,j1;
    for (i=0;i<3;i++) //outermost loop for traversing first matrix
    {
        for (j=0;j<3;j++)  //middle loop for traversing the columns of second matrix
        {
            for (j1=0;j1<3;j1++)    //innermost loop for traversing columns of the resultant matrix
            {
                sum=sum+a[i][j1]*b[j1][j];
            }   //end of innermost loop
            c[i][j]=sum;
            sum=0;  //reinitialisation
        }   //end of middle loop
    }   //end of outer most loop
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}