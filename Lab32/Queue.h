#pragma once
#include<iostream>

struct Queue;
Queue* Push(Queue**head, Queue**tail, char symbol);
void Pop(Queue*head, Queue*tail);