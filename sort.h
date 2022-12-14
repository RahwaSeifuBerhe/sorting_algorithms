#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swapInt(int *a, int *b);
void swapI(int *array, size_t idx1, size_t idx2);
void selection_sort(int *array, size_t size);
listint_t *swap(listint_t *node, listint_t **head);
void quick_sort(int *array, size_t size);
void quickSortRecursion(int *array, int low, int high, int size);
int lomuto_partition(int *array, int low, int high, int size);
#endif /*SORT_H*/
