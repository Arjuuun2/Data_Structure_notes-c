#include<stdio.h>
int NUMBER_ARRAY[5],n,i;
void insert()
{
	int location,value;
	printf(" which the location where you want to insert an new element\n");
    scanf("%d", &location);
    printf("Please enter the value\n");
    scanf("%d", &value);
    location--;
        for(i=n-1;i>=location;i--)
        {
            NUMBER_ARRAY[i+1]=NUMBER_ARRAY[i];
        }
        NUMBER_ARRAY[location]=value;
        printf("List after Insertion: ");
        for(i=0;i<n+1;i++)
        {
            printf("%d ",NUMBER_ARRAY[i]);
        }
}
void del()//Deleting
{
  	int number,j;
	printf("\nEnter an element to delete\n");
        scanf("%d",&number);
        for(i=0;i<n;i++)
        {
            if(NUMBER_ARRAY[i]==number)
            {
                for(j=i;j<(n-1);j++)
                {
                    NUMBER_ARRAY[j]=NUMBER_ARRAY[j+1];
                }
                break;
            }
        }
        printf("List after deletion\n");
        for(i=0;i<(n-1);i++)
        {
            printf("%d ",NUMBER_ARRAY[i]);
        }
}
void search()
{
	int search,flag=0;
	printf("Enter number to be searched:\n");
	scanf("%d",&search);
	for(i = 0;i<n;i++)
	{
	    if(NUMBER_ARRAY[i]==search)
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
void sort()
{
	int temp,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(NUMBER_ARRAY[j]>NUMBER_ARRAY[j+1])
			{
				temp = NUMBER_ARRAY[j];
				NUMBER_ARRAY[j] = NUMBER_ARRAY[j+1];
			    NUMBER_ARRAY[j+1] = temp;
			}
		}
   }
}
int menu()
{
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("\n|********************************************************|\n");
	printf("\n|************       Menu Driven Program   ***************|\n");
	printf("\n|********************************************************|\n");
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	int choice;
	printf("\n 1->search  element\n2->sort element\n3->insert an element\n4->delete the array elements\n Enter your choice:");
	scanf("%d",&choice);
	return choice;
}
void display()
{
	for(i=0;i<n;i++)
	{
	  printf("%d\t",NUMBER_ARRAY[i]);
    }
}
void main()
{
	int ch;
    printf("Enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  printf("Enter a[%d] elements of an array:\n",i+1);
	  scanf("%d",&NUMBER_ARRAY[i]);
    }
    for(ch = menu();ch != 5;ch= menu())
   {
    switch(ch)
    {
    	case 1:search();
    	       break;
    	case 2:sort();
    	       printf("Sorted array:");
    	       display();
    	       break;
    	case 3:insert();
    	       break;
    	case 4:del();
    	       break;
    	default:printf("Wrong  Choice:");
    	        break;
	}
  }
}
