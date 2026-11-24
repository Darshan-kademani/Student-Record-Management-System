#include "student.h"

extern SLL *headptr;

void save_file(){
	SLL *p = headptr;
	if(p == 0)
	{
		printf("No reocrds Found\n");
		return;
	}

	FILE *fp = fopen("student.dat","w");

	while(p)
	{
		fprintf(fp,"%d   %s   %f\n",p->rollno,p->name,p->percentage);
		p = p->next;
	}
	printf("Data saved successfully\n"); 
	fclose(fp);
}

void save_exit(){
	char sel;
l:
	printf("S/s : Save and exit\nE/e : Exit without saving\n");
	scanf(" %c",&sel);

	if(sel == 'S' || sel == 's')
	{
		save_file();
		exit(0);
	}
	
	else if(sel == 'E' || sel == 'e')
		exit(0);
	else{
		printf("Invalid Choice\n");
		goto l;
	}
}
