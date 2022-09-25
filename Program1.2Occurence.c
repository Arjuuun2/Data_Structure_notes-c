#include<stdio.h>
void main()
{
	printf("\n**********************************************************\n");
	printf("\n*************       OCCURENCE             ****************\n");
	printf("\n**********************************************************\n");
    int OCCURENCE_ARRAY[5], elements, i;
    int NUMOFINDOCCURENCE, counter;
    printf("Enter total number of elements: ");
    scanf("%d", &elements);
    printf("Enter array elements:\n");
    for (i = 0; i < elements; i++) 
	{
        printf("Enter element %d: ", i + 1);
        scanf("%d", &OCCURENCE_ARRAY[i]);
    }

    printf("Enter number to find Occurrence: ");
    scanf("%d", &NUMOFINDOCCURENCE);
    counter = 0;
    for (i = 0; i < elements; i++) 
	{
        if (OCCURENCE_ARRAY[i] == NUMOFINDOCCURENCE)
            counter++;
    }
    printf("Occurrence of %d is at %d position: %d\n", NUMOFINDOCCURENCE, counter,i+1);
}