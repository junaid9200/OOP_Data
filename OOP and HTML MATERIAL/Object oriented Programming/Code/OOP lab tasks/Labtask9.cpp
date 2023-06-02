#include <stdio.h>

int main() {
    int array, selecttr, i, j;
    int z=0;
    int arrayvalue=105;
    int numberarray[arrayvalue];
    
    printf("Enter array size : ");
    scanf("%d", &array);
    printf("Enter elements of array : ");
    for (i = 0; i < array; i++) {
        scanf("%d", &numberarray[i]);
    }
    printf("\n\n");
    printf("\t\t\tEnter the target value: ");
    scanf("%d", &selecttr);

    for (i = 0; i < array; i++) {
        for (j = i+1; j < array; j++) {
            if (numberarray[i] + numberarray[j] == selecttr) 
			{
				z++;
				printf("-----------------------------------------------------------------\n");
                printf("|The two integers that add up to the desired amount are %d and %d|\n", numberarray[i], numberarray[j]);
                printf("-----------------------------------------------------------------\n");
                
            }
        }
    }
    if(z!=1)
    {
    		printf("------------------------------------------------------------------------------\n");
      printf("|No pair of numbers was found in the array that sums up to the target value.|\n");
      	    printf("-------------------------------------------------------------------------------\n");
  }
}
