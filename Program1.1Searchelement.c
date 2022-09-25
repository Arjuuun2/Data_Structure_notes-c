#include<stdio.h>
void search(int a[5],int n)
{
	int search,flag=0,i;
	printf("Enter number to be searched:\n");
	scanf("%d",&search);
	for(i = 0;i<n;i++)
	{
	    if(a[i]==search)
	    {
	    	flag = 1;
	    	break;
		}
	}
	if(flag==1)
	{
		printf("%d is found at %d position",search,i+1);
	}
	else
	{
		printf("%d is not found",search);
	}	
}
void main()
{
     int a[5],n,i;
     printf("Enter the size of the array:\n");
	 scanf("%d",&n);
	 printf("Enter the array:\n");
	 for(i = 0;i<n;i++)
	 {
		 scanf("%d",&a[i]);
	 }
	 search(a,n);
}