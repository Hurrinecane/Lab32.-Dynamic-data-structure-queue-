/*
3.	��������� ������������ ��������� �������, ��������� ��������� ������������������ ���� � �����, ��������� �� ����� ASCII.
*/

#include"Queue.h"

int main()
{
	Queue *head, *tail;
	head = tail = nullptr;
	int tmp;
	int len = 0;
	do
	{
		scanf_s("%i", &tmp);
		if (tmp >= 0 && tmp <= 255)
		{
			Push(&head, &tail, tmp);
			len++;

		}
	} while (tmp > 0);
	char *str = (char*)calloc(len, sizeof(char));
	for (int i = 0; i < len; i++)
	{
		str[i] = Pull(&head, &tail);
	}
	puts(str);
	system("pause");
}
