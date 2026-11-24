#include "student.h"

extern SLL *headptr;

int stud_count(){
	int c;
	SLL *p = headptr;
	while(p){
		c++;
		p=p->next;
	}
	return c;
}
