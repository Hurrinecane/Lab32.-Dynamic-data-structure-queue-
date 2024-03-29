
#include "Queue.h"

struct Queue
{
	int number;
	Queue* next;
	Queue* prev;
};

void Push(Queue**head, Queue**tail, int number)
{
	Queue* tmp = (Queue*)malloc(sizeof(Queue));
	tmp->number = number;

	if (*head == nullptr)
	{
		*head = *tail = tmp;
		(*head)->next = (*tail)->prev = nullptr;
	}
	else if (head == tail)
	{
		(*head)->next = tmp;
		(*tail) = tmp;
		(*tail)->next = nullptr;
		tmp->prev = *head;
	}
	else
	{
		(*tail)->next = tmp;
		tmp->next = nullptr;
		tmp->prev = *tail;
		*tail = tmp;
	}
}

int Pull(Queue**head, Queue**tail)
{
	int tmp;
	if (*head == nullptr)	
		tmp = NULL;	
	if (*head == *tail)
	{
		tmp = (*head)->number;
		free((*head));
		*head = nullptr;
	}
	else
	{
	  tmp = (*head)->number;
	 (*head) = (*head)->next;
	 free((*head)->prev);
	 (*head)->prev = nullptr;
	}	
	return tmp;
}

void Pop(Queue**head, Queue**tail)
{
	if (*head == *tail) *head = *tail = nullptr;
	else
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = nullptr;
	}
}

void Clear(Queue* head)
{
	Queue*tmp;
	if (head != nullptr)
	{
		while (head->next != nullptr)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
		free(head);
	}
}