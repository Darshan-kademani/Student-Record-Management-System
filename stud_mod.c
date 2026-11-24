#include "student.h"
extern SLL *headptr;

void modify_record()
{
	char sel;
m:
	printf("Enter which record to search for modification\n\nR/r : Search by roll number\nN/n : Search by name\nP/p : Search by percentage\n");
	scanf(" %c",&sel);

	if(sel == 'R' || sel == 'r'){
		int r;
l:
		printf("enter the roll number to search\n");
		scanf("%d",&r);

		SLL *p = headptr;
		while(p)
		{
			if(p->rollno == r){
				printf("%d %s %f\n",p->rollno,p->name,p->percentage);
				break;
			}
			p = p->next;
		}
		if(p)
		{
			printf("Enter updated name: ");
			scanf(" %s", p->name);

			printf("Enter updated percentage: ");
			scanf("%f", &p->percentage);
		}
		else{
			printf("roll number not found\n");
			goto m;
		}
	}

	else if(sel == 'N' || sel == 'n'){
		char n[30];
		int flag=0;
		printf("enter the name to search\n");
		scanf("%s",n);

		SLL *check = headptr;	
		while(check)
		{	
			if(strcmp(check->name,n)==0)
				flag++;
			check = check->next;
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
			printf("please confirm the student to modify with roll number\n");
			goto l;
		}
		else if(flag == 1)
		{
			check = headptr;
			while(check){
				if(strcmp(check->name,n)==0){
					printf("%d %s %f\n",check->rollno,check->name,check->percentage);
					break;
				}
			check = check->next;
			}
			printf("Enter updated name: ");
			scanf(" %s", check->name);

			printf("Enter updated percentage: ");
			scanf("%f", &check->percentage);
		}
		else{
			printf("Name not Found\n");
			goto m;
		}

	}

	else if(sel == 'P' || sel == 'p'){
		float p;
		int flag=0;
		printf("enter the percentage to search\n");
		scanf("%f",&p);

		SLL *check = headptr;	
		while(check)
		{	
			if(check->percentage >= p - 0.001 && check->percentage <= p + 0.001)
				flag++;
			check = check->next;
		}

		if(flag>1)
		{       
			printf("same percentage found %d times..\n",flag);
			check = headptr;
			while(check){
				if(check->percentage >= p - 0.001 && check->percentage <= p + 0.001)
					printf("%d %s %f\n",check->rollno,check->name,check->percentage);
				check = check->next;
			}
			printf("please confirm the student to modify with roll number\n");
			goto l;
		}
		else if(flag == 1)
		{
			check = headptr;
			while(check){
				if(check->percentage >= p - 0.001 && check->percentage <= p + 0.001){
					printf("%d %s %f\n",check->rollno,check->name,check->percentage);
					break;
				}
			check = check->next;
			}
			printf("Enter updated name: ");
			scanf(" %s", check->name);

			printf("Enter updated percentage: ");
			scanf("%f", &check->percentage);
		}	

		else{
			printf("Percentage not Found\n");
			goto m;
		}		
	}		

	else{
		printf("Invalid Option\n");
		goto m;
	}
}
