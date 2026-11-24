#include "student.h"

extern SLL *headptr;

void reverse_list()
{
	SLL *current = headptr;
	SLL *prev = 0,*next;

	if(headptr == 0)
	{
		printf("No records found\n");
		return;
	}

	while(current)
	{
		next = current->next;

		current->next = prev;

		prev = current;

		current = next;
	}

	headptr = prev;

	printf("List reversed successfully\n");
}
