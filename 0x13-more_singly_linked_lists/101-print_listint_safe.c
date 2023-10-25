#include "lists.h"

/**
 * print_listint_safe - print the element of a list
 * @h: the head of the list
 *
 * Return: NUmber of node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *arr[100];
	int i = 0, stat;
	size_t counter = 0;

	if (head == NULL)
	{
		exit(98);
	}
	arr[i++] = head;
	while (head != NULL)
	{
		stat = check_loop(arr, head, i);
		if (stat == 1)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (counter);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		counter++;
		arr[i++] = head;	
	}
	return (counter);	
}

int check_loop(const listint_t *arr[], listint_t *ptr, int index)
{
	int i;

	for (i = 0; i < index; i++)
	{
		if (arr[i] == ptr)
		{
			return (1);
		}
	}
	return (0);
}
