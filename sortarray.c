#include <stdio.h>

void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main()
{
	int array[] = {56, 48, 97, 14, 74};
	int j = 0;
	
	for(int i=0; i < sizeof(array)/sizeof(int); i++)
	{
		for(j=0; j < sizeof(array)/sizeof(int); j++)
		{
			if(array[j] > array[j+1])
				swap(&array[j], &array[j+1]);
		}
	}
	

	for(int i=0; i < sizeof(array)/sizeof(int); i++)
		printf("%d ", array[i]);

	return 0;
}		
