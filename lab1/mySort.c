#include <stdio.h>

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void mySort(int d[], unsigned int n)
{
	int i, j, min_idx;
 
	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++)
	{
 
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
		    if (d[j] < d[min_idx])
			min_idx = j;
	 
		// Swap the found minimum element
		// with the first element
		swap(&d[min_idx], &d[i]);
	}
}
