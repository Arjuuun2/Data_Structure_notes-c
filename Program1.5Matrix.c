#include<stdio.h>
int MATRIX_ARRAY[3][3],MATRIX_ARRAY1[3][3], PRODMATRIX_ARRAY[3][3],SUMMATRIX_ARRAY[3][3],TRANSPOSE[3][3],i,j;
void read()
{
	printf("Enter the 1st  matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&MATRIX_ARRAY[i][j]);
		}
	}
	printf("Enter the 2nd  matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&MATRIX_ARRAY1[i][j]);
		}
	}
}
void display()
{
	printf("First Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",MATRIX_ARRAY[i][j]);
		}
		printf("\n");
	}
	printf("Second Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",MATRIX_ARRAY1[i][j]);
		}
		printf("\n");
	}
}
void matrix_addition()
{
	printf("The sum of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			SUMMATRIX_ARRAY[i][j]=MATRIX_ARRAY[i][j]+MATRIX_ARRAY1[i][j];
			 printf("%d\t",SUMMATRIX_ARRAY[i][j]);
		}
		printf("\n");
	}
}
void matrix_multiplication()
{
	int k;
    printf("Multiplication Matrix\n");    
    for(i=0;i<3;i++)    
    {      
      for(j=0;j<3;j++)    
    {     
     PRODMATRIX_ARRAY[i][j]=0;    
     for(k=0;k<3;k++)    
    {    
    PRODMATRIX_ARRAY[i][j]+=MATRIX_ARRAY[i][k]*MATRIX_ARRAY1[k][j];    
    }    
  }    
}    
//for printing result    
for(i=0;i<3;i++)    
{    
for(j=0;j<3;j++)    
{    
printf("%d\t",PRODMATRIX_ARRAY[i][j]);    
}    
printf("\n");    
}    
}
void transpose()
{
	printf("Transpose Matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			TRANSPOSE[i][j]=MATRIX_ARRAY[j][i];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",TRANSPOSE[i][j]);
		}
		printf("\n");
	}
}
void determinant1()
{
    int determinant;
	determinant = MATRIX_ARRAY[0][0] * ((MATRIX_ARRAY[1][1]*MATRIX_ARRAY[2][2]) - (MATRIX_ARRAY[2][1]*MATRIX_ARRAY[1][2])) -MATRIX_ARRAY[0][1] * (MATRIX_ARRAY[1][0]
   * MATRIX_ARRAY[2][2] - MATRIX_ARRAY[2][0] * MATRIX_ARRAY[1][2]) + MATRIX_ARRAY[0][2] * (MATRIX_ARRAY[1][0] * MATRIX_ARRAY[2][1] - MATRIX_ARRAY[2][0] * MATRIX_ARRAY[1][1]);
     printf("\nDeterminant of 1st matrix: %d\n", determinant);
}
void determinant2()
{
	int determinant2;
	determinant2 = MATRIX_ARRAY1[0][0] * ((MATRIX_ARRAY1[1][1]*MATRIX_ARRAY1[2][2]) - (MATRIX_ARRAY1[2][1]*MATRIX_ARRAY1[1][2])) -MATRIX_ARRAY1[0][1] * (MATRIX_ARRAY1[1][0]
   * MATRIX_ARRAY1[2][2] - MATRIX_ARRAY1[2][0] * MATRIX_ARRAY1[1][2]) + MATRIX_ARRAY1[0][2] * (MATRIX_ARRAY1[1][0] * MATRIX_ARRAY1[2][1] - MATRIX_ARRAY1[2][0] * MATRIX_ARRAY1[1][1]);
     printf("\nDeterminant of 2nd matrix: %d\n", determinant2);
}
void main()
{
	printf("\n*****************************************************************\n");
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("\n+++++++++++++|   TWO DIMENSIONAL ARRAYS |++++++++++++++++++++++++\n");
	printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("\n*****************************************************************\n");
    read();
    display();
	printf("Matrix Addition\n");
    matrix_addition();
    transpose();
    matrix_multiplication();
    determinant1();
    determinant2();
}