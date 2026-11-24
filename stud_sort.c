#include "student.h"

extern SLL *headptr;

void sort_record(){

	SLL *p1=headptr,*p2,t;
	if(p1 == 0)
	{
		printf("No records found\n");
		return;
	}

	char sel;
	int i,j,c=stud_count();
l:
	printf("N/n : Sort with name\nP/p : Sort with percentage\n");
	scanf(" %c",&sel);

	if(sel == 'N' || sel == 'n'){
		for(i=0;i<c-1;i++){
			p2 = p1->next;
			for(j=0;j<c-1-i;j++){
				if(strcmp(p1->name,p2->name)>0){
					t.rollno = p1->rollno;
					strcpy(t.name,p1->name);
					t.percentage = p1->percentage;

					p1->rollno = p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage = p2->percentage;

					p2->rollno = t.rollno;
					strcpy(p2->name,t.name);
					p2->percentage = t.percentage;
				}
				p2= p2->next;
			}
			p1 = p1->next;
		}
	}
	else if(sel == 'P' || sel == 'p'){
		for(i=0;i<c-1;i++){
			p2 = p1->next;
			for(j=0;j<c-1-i;j++){
				if(p1->percentage<p2->percentage){
					t.rollno = p1->rollno;
					strcpy(t.name,p1->name);
					t.percentage = p1->percentage;

					p1->rollno = p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage = p2->percentage;

					p2->rollno = t.rollno;
					strcpy(p2->name,t.name);
					p2->percentage = t.percentage;
				}
				p2= p2->next;
			}
			p1 = p1->next;
		}
	}
	else
	{
		printf("Invalid option\n");
		goto l;
	}
}
