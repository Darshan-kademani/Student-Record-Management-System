#include "student.h"

extern SLL *headptr;

void add_record(void)
{
    SLL *new, *temp;
    int roll = 1;
    int found;

    new = malloc(sizeof(SLL));

    if(new == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    while(1)
    {
        found = 0;
        temp = headptr;

        while(temp != 0)
        {
            if(temp->rollno == roll)
            {
                found = 1;
                break;
            }

            temp = temp->next;
        }

        if(found == 0)
            break;

        roll++;
    }

    new->rollno = roll;

    printf("Enter student name: ");
    scanf(" %s", new->name);

    printf("Enter percentage: ");
    scanf("%f", &new->percentage);

    new->next = NULL;

    /* Insert the node into the linked list */
    if(headptr == NULL)
    {
        headptr = new;
    }
    else
    {
        temp = headptr;

        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = new;
    }
}
