#include<stdio.h>
int Sort_array[5], size,i;
int read()
{
	printf("Enter the size of the array:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
	  printf("Enter a[%d] elements of an array:\n",i+1);
	  scanf("%d",&Sort_array[i]);
    }
return 0;
}
int sort()
{
	int temp,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(Sort_array[j]>Sort_array[j+1])
			{
				temp = Sort_array[j];
				Sort_array[j] = Sort_array[j+1];
			    Sort_array[j+1] = temp;
			}
		}
	}
return 0;
}
void display()
{
	for(i=0;i<size;i++)
	{
	  printf("%d\t",Sort_array[i]);
    }
}
void main()
{
	read();
	printf("Sorted Array:\n");
	sort();
	display();
    /*for(i=0;i<size;i++)
	{
	  printf("%d\t",Sort_array[i]);
    }*/
}