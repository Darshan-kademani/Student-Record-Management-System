#include"student.h"
SLL *headptr = 0;
int main()
{
	char op;
	while(1){
		printf("******** STUDENT RECORD MENU ********\n");
		printf("\na/A : Add new record\nd/D : Delete a record\ns/S : Show the list\nm/M : Modify a record\nv/V : Save records\ne/E : Exit\nt/T : Sort the list\nl/L : Delete all the records\nr/R : Reverse the list\n\nEnter Your Choice\n");
		scanf(" %c",&op);
		switch(op)
		{
			case 'a':add_record(); break;
			case 'A':add_record(); break;
			case 'd':del_record();break;
			case 'D':del_record();break;
			case 's':show_record();break;
			case 'S':show_record(); break;
			case 'm':modify_record();break;
			case 'M':modify_record();break;
			case 'v':save_file();break;
			case 'V':save_file();break;
			case 'e':save_exit();break;
			case 'E':save_exit();break;
			case 't':sort_record();break;
			case 'T':sort_record();break;
			case 'l':del_all_record();break;
			case 'L':del_all_record;break;
			case 'r':reverse_list();break;
			case 'R':reverse_list();break;
			default : ("Invalid Option\n");break;
		}

	}
}
