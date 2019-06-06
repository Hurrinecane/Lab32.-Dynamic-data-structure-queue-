#pragma once
#include<iostream>


struct Queue;
void Push(Queue**head, Queue**tail, int number);
void Pop(Queue**head, Queue**tail);
char Pull(Queue*head, Queue*tail);