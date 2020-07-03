#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; //static array
    int *B[3];
    int **C;
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }

printf("\n");

//Dynamic array B created using array of pointers
    B[0] = (int *)malloc(4*sizeof(int));
    B[1] = (int *)malloc(4*sizeof(int));
    B[2] = (int *)malloc(4*sizeof(int));

		for(i=0;i<3;i++)
		{
			for(j=0; j<4; j++)
			{
				printf("%d", B[i][j]); //prints garbage value/zeros since not initialized
			}
			printf("\n");
		}		
printf("\n");
//Dynamic array B created using array of pointers of pointers
    C = (int **)malloc(3*sizeof(int *));
    C[0] = (int *)malloc(4*sizeof(int));
    C[1] = (int *)malloc(4*sizeof(int));
    C[2] = (int *)malloc(4*sizeof(int));

		for(i=0;i<3;i++)
		{
			for(j=0; j<4; j++)
			{
				printf("%d", C[i][j]); //prints garbage value/zeros since not initialized
			}
			printf("\n");
		}	
	
    return 0;
}
