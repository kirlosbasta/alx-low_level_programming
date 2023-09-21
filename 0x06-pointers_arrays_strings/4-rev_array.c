#include "main.h"

/**
 * reverse_array - revers the array from bach to end
 * @a: pointer to array
 * @n: number of element
 * Return Notiing
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
