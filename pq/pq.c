/******************/
/* PRIORITY QUEUE */
/******************/

#include <stdio.h>
#include <stdlib.h>
#include "pq.h"

/*
	Initialise the priority queue to empty.
	Return value is a pointer to a new priority queue structure.
	This should be free'd by calling pq_destroy.
*/
struct priority_queue *pq_create()
{
	/* you will need to implement this */
	return NULL;
}


/*
	Cleanup the priority queue and free any memory within.	
*/
void pq_destroy(struct priority_queue *pq)
{
	/* you will need to implement this */
	return;
}


/*
	Return the number of elements in the priority queue.
	This is needed to test the priority queue.
	returns: int, the size of the pq
*/
int pq_size(struct priority_queue *pq) {
	/* you will need to implement this */
	return 0;
}


/*
	Insert a value with attached min.prority in the priority queue.
	priority should be non-negative (>= 0)
	returns: 1 if successful, 0 if failed (pq is full)
*/
int pq_enqueue(struct priority_queue *pq, int val, int priority)
{
	/* you will need to implement this */
	return 0;
}

/*
	Return the value with the lowest priority in the queue.
	This keeps the value stored within the priority queue.
	returns: 1 if successful, 0 if failed (pq is empty)
	val and priority are returned in the pointers
*/	
int pq_find(struct priority_queue *pq, int *val, int *priority)
{
	/* you will need to implement this */
	return 0;	
}

/*
	Removes the lowest priority object from the priority queue
	returns: 1 if successful, 0 if failed (pq is empty)

	note: may remove this from the spec (do cleanup)
*/
int pq_delete(struct priority_queue *pq)
{
	/* you will need to implement this */
	return 0;
}


/*
	Returns the value with the lowest priority and removes it
	from the queue.
	This is the same as pq_find followed by pq_delete.
	returns: 1 if successful, 0 if failed (pq is empty)
	val and priority are returned in the pointers
*/	
int pq_dequeue(struct priority_queue *pq, int *val, int *priority)
{
	/* you will need to implement this */
	return 0;
}

/*
	Compares two pq elements with each other.
	This is needed to test the heap contained within.
	returns: <0 if a < b, >0 if a > b, 0 if a == b
	note that the root of the heap is at index 1, not zero
*/
int pq_cmp(struct priority_queue *pq, int a, int b)
{
	/* you will need to implement this */
	return 0;
}

/*
	Swaps two pq elements with each other.
	This is an internal function that will help with the heap.
*/
void pq_swap(struct priority_queue *pq, int a, int b)
{
	/* you will need to implement this */
	return;
}
