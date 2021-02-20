#include <stdio.h>
int main()
{
    int matr[3][3],i,j,sum=0;
    printf("\nEnter the value of the 3x3 matrix:\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("element[%d][%d] : %d\n", i , j , &*(*(matr + i)+j) );
        }
    }
    printf("\nThe value of matrix are:\n ");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", *(*(matr + i)+j) );
        }
        printf("\n");
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum = sum + matr[i][j];
            }
        }
    }
    printf("\nThe sum of the diagonal elements of matrix is %d",sum);
    
    return 0;
}
