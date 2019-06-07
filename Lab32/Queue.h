#pragma once
#include<iostream>


struct Queue;
void Push(Queue**head, Queue**tail, int number);
void Pop(Queue**head, Queue**tail);
int Pull(Queue**head, Queue**tail);
void Clear(Queue* head);