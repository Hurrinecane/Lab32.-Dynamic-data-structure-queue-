
#include "Queue.h"

struct Queue
{
	char symbol;
	Queue* next;
	Queue* prev;
};

Queue * Push(Queue*head, Queue*tail, char symbol)
{
	Queue* tmp = (Queue*)malloc(sizeof(Queue));
	tmp->symbol = symbol;

	if (head == nullptr)
	{
		head = tail = tmp;
		head->next = tail->prev = nullptr;
	}
	else if (head == tail)
	{
		head->next = tmp = tail;
		tail->next = nullptr;
		tmp->prev = head;
	}
	else
	{
		tail->next = tmp;
		tmp->next = nullptr;
		tmp->prev = tail;
		tail = tmp;
	}
	return head;
}

void Pull(Queue*head, Queue*tail)
{
	if (head == tail) head = tail = nullptr;
	else
	{
		head = head->next;
		free(head->prev);
		head->prev = nullptr;
	}
}