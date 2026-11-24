#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;
}SLL;

void add_record(void);
void del_record(void);
void show_record(void);
void modify_record(void);
void save_file(void);
void save_exit(void);
void sort_record(void);
int stud_count(void);
void del_all_record(void);
void reverse_list(void);
