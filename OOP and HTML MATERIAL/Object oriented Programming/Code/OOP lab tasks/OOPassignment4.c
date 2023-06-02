#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int rows;//global declaration.
int colos;//global declaration.
int a[4][4];//global declaration.
bool symmetric_check(int a[][4],int rows,int colos);//function to check weather it is symmetric or not.
int main()
{
	 int m, n, c, d, neighbour_sum[4][4], check[4][4];
	int mat1[4][4];//matrix declaration.
	int mat2[4][4];
	neighbour_sum[4][4];
	printf("Asslamoalikum! Welcome to my Programme.\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("Matrix 1:\n");
	for(int i=0;i<4;i=i+1)//loop for the random values of the matrix 1.
	{
		for(int j=0;j<4;j=j+1)
		{
			mat1[i][j]=(rand()%9)+1;//if you want to change the numbers in matrix so change the % value i.e %9 or %10 etc.
			
		}
	}
	for(int i=0;i<4;i=i+1)//loop for printing the random values of matrix 1.
	{
		for(int j=0;j<4;j=j+1)
		{
			printf("%d  ",mat1[i][j]);//printing 1 matrix.
		}
		printf("\n");
		}
		printf("\n");
		printf("Matrix 2:\n");
			for(int i=0;i<4;i=i+1)//loop for the random values of the matrix 2.
	{
		for(int j=0;j<4;j=j+1)
		{
			mat2[i][j]=(rand()%10);
		}
	}
	for(int i=0;i<4;i=i+1)//loop for printing the random values of matrix 2.
	{
		for(int j=0;j<4;j=j+1)
		{
			printf("%d  ",mat2[i][j]);//printing 2 matrix.
		}
		printf("\n");
		}
		printf("\n");
		printf("After changing the diagnol of second matrix with first matrix the new matrix is :\nThe 3 matrix is : \n");
	    for(int i=0;i<4;i=i+1)//loop to find the left and right diagnol.
	    {
	    	for(int j=0;j<4;j=j+1)
	    	{
	    	if(i==j)//conditions to find the diagnols.
			{
	    	mat2[i][j]=mat1[i][j];}
	    	printf("%d  ",mat2[i][j]);//printing the 3 matrix after changing the diagnol of it.
			}
			printf("\n");}
			printf("The third matrix after the sum of neighbour elements :\n");
		for (int i = 0;i <4; i=i+1) //loop to find sum of neighbour elements of matrix.
{
            for (int j = 0; j <4; j=j+1) {
                if (i == 0) {
                    if (j == 0) //conditions to check it .
					{
                        neighbour_sum[i][j] = mat2[i + 1][j + 1] + mat2[i][j + 1] + mat2[i + 1][j];
                    
                    } else if (j == 4 - 1) //conditions to check it .
					{
                        neighbour_sum[i][j] = mat2[i + 1][j - 1] + mat2[i][j - 1] + mat2[i + 1][j];
                    } else {
                        neighbour_sum[i][j] = mat2[i][j - 1] + mat2[i][j + 1] + mat2[i + 1][j + 1] + mat2[i + 1][j - 1] + mat2[i + 1][j];
                    }
                }
				 else if (i == 4 - 1)//conditions to check it .
				 {
                    if (j == 0) {
                        neighbour_sum[i][j] = mat2[i - 1][j] + mat2[i - 1][j + 1] + mat2[i][j + 1];
                    } else if (j == 4 - 1) //conditions to check it .
					{
                        neighbour_sum[i][j] = mat2[i - 1][j] + mat2[i][j - 1] + mat2[i - 1][j - 1];
                    } else {
                        neighbour_sum[i][j] = mat2[i - 1][j] + mat2[i - 1][j - 1] + mat2[i - 1][j + 1] + mat2[i][j + 1] + mat2[i][j - 1];
                    }
                } else if (j == 0) //conditions to check it .
				{
                    if ((i != 0) && (i != 4 - 1))
                        neighbour_sum[i][j] = mat2[i - 1][j] + mat2[i + 1][j] + mat2[i + 1][j + 1] + mat2[i - 1][j + 1] + mat2[i][j + 1];
                } else if (j == 4 - 1)//conditions to check it .
				 {
                    if ((i != 0) && (i !=4 - 1))//conditions to check it .
                        neighbour_sum[i][j] = mat2[i - 1][j] + mat2[i + 1][j] + mat2[i - 1][j - 1] + mat2[i][j - 1] + mat2[i + 1][j - 1];
                } else {
                    neighbour_sum[i][j] = mat2[i][j - 1] + mat2[i][j + 1] + mat2[i + 1][j] + mat2[i + 1][j - 1] + mat2[i + 1][j + 1] + mat2[i - 1][j] + mat2[i - 1][j - 1] + mat2[i - 1][j + 1];
                }
            }
        }
        for(int i=0;i<4;i++)//loop for printing the 3 matrix.
		{
		{for(int j=0;j<4;j++)
		{
        printf("%d\t",neighbour_sum[i][j]);//printing 3 matrix after the sum of neighbours.
}
printf("\n");}
}
            printf("Checking...........\n");
            c=symmetric_check(neighbour_sum,4,4);//function pass.
            if(c==1)//condition to check it is symmetric or not.
            {
            	printf("\n");
            	printf("(The 3 matrix is symmetric.)\n");
			}
			else
			{
					printf("\n");
				printf("(The 3 matrix is not  symmetric.)\n");
			}
			printf("\n");
			printf("\n------------------------------------------------------------------------------------------------------------------------\n");
			printf("Thanks for checking my programe.");
		}
bool symmetric_check(int a[][4],int rows,int colos)//function to check weather it is symmetric or not.
		{
			int i,j;
			 int matrix[4][4], check[4][4];//declare matrix.
			 bool result=0;
			 for (int i = 0; i < 4; i++)//loop of transpose.
			 {
    for (int j = 0; j < 4; j++){
      check[j][i] = matrix[i][j];
  }}
  {
    for (int i = 0; i<4; i=i+1)//loop to check the transpose of it if it is same so apply the condition other wise break.
    {
      for (int j = 0; j<4; j=j+1)
      {
        if (matrix[i][j] != check[i][j])
          break;
      }
      if (j != 4)
        break;
    }
    if (i == 4)
    {
    	result=result+1;//condition if the result is 1 so it is symmetric otherwiswe not.
	}
		}
		return result;//return the result back to main function.
	}
