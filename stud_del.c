#include"student.h"
extern SLL *headptr;

void del_record()
{
	
	char sel , n[30];
	int r;

	if(headptr == 0)
	{
		printf("No records found\n");
		return ;
	}
m:
	printf("R/r : Enter roll number to delete\nN/n : Enter name to delete\n");
		scanf(" %c",&sel);

	if(sel == 'R' || sel == 'r')
	{	
l:
		printf("Enter roll number to delete\n");
		scanf("%d",&r);
		SLL *del = headptr,*prev;
		while(del){
			if(del->rollno == r){
				if(del == headptr)
					headptr = del->next;

				else
					prev->next = del->next;
				free(del);
				printf("roll number %d deleted\n",r);
				return;
			}
			prev = del;
			del = del->next;
		}
		printf("Roll number Not found\n");
	}

	else if(sel == 'N' || sel == 'n')
	{
		printf("Enter name to delete\n");
		scanf("%s",n);
		SLL *del,*check,*prev;
		del = check = headptr;
		int flag = 0;

		while(check)
		{	
			if(strcmp(check->name,n)==0)
			flag++;
		}
		
		if(flag>1)
		{       
			printf("same names found %d times..\n",flag);
			check = headptr;
			while(check){
				if(strcmp(check->name,n)==0)
					printf("%d %s %f\n",check->rollno,check->name,check->percentage);
				check = check->next;
			}
			printf("please confirm the student with roll number\n");
			goto l;
		}
		
		while(del){
			if(strcmp(del->name,n)==0){
				if(del == headptr)
					headptr = del->next;

				else
					prev->next = del->next;
				free(del);
				return;
			}
			prev = del;
			del = del->next;
		}
		printf("Name Not found\n");
	} 

	else
	{
		printf("Invalid Option\n");
		goto m;
	}

	return;
}


void del_all_record(){
	SLL *del = headptr,*p;
	while(del)
	{
		p = del->next;
		free(del);
		del = p;	
	}
	headptr = 0;	
	printf("Deleting all records from memory must not automatically delete student.dat. The file is affected only when the user explicitly saves\n");
}





