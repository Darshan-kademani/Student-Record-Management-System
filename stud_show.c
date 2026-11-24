#include "student.h"

extern SLL *headptr;

void show_record()
{
	SLL *p = headptr;
	if(p == 0)
	{
		printf("No Records found\n");
		return;
	}

	printf("------------------------------------------------------\n");
	printf("Roll No.  Name  Percentage\n");
	printf("------------------------------------------------------\n");
	while(p)
	{
		printf("%d       %s        %f\n",p->rollno,p->name,p->percentage);
		p = p->next;
	}
	printf("------------------------------------------------------\n");	
}
