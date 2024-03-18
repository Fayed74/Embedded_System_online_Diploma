/*
 * main.c
 *
 *  Created on: 16 Mar 2024
 *      Author: mnj
 */


#define DPRINTF(...) {fflush(stdout);\
					  fflush(stdin);\
					  printf(__VA_ARGS__);\
					  fflush(stdout);\
					  fflush(stdin);}

#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "conio.h"


// effective data

typedef struct{
	unsigned int ID;
	char Name[40];
	float height;
}SData_t;

// linked list node

struct SStudent{
	SData_t data;
	struct SStudent* PNextStudent;

};


struct SStudent* gpFirstStudent = NULL;

void AddStudent()
{
	struct SStudent* pNewStudent;
	struct SStudent* pLastStudent;
	char temp_text[40];

	// check list is empty?
	if(gpFirstStudent == NULL)
	{
		// create new record
		pNewStudent = (struct SStudent*) malloc(sizeof(struct SStudent));
		// assign it to gpFirstStudent
		gpFirstStudent = pNewStudent;
	}
	else
	{
		// navigate until reach to the last record
		pLastStudent = gpFirstStudent;
		while(pLastStudent->PNextStudent)
		{
			pLastStudent = pLastStudent->PNextStudent;
		}
		// create new record
		pNewStudent = (struct SStudent*) malloc(sizeof(struct SStudent));
		pLastStudent->PNextStudent = pNewStudent;
	}
	pNewStudent->PNextStudent = NULL;

	// fill new student
	DPRINTF("\n Enter the ID: ");
	gets(temp_text);
	pNewStudent->data.ID = atoi(temp_text);

	DPRINTF("\n Enter student full name: ");
	gets(pNewStudent->data.Name);

	DPRINTF("\n Enter the height: ");
	gets(temp_text);
	pNewStudent->data.height = atof(temp_text);
}


int delete_student()
{
	char temp_text[40];
	unsigned int selected_id;

	// get the selected id
	DPRINTF("\n Enter student ID to be deleted: ");
	gets(temp_text);
	selected_id = atoi(temp_text);

	if(gpFirstStudent)
	{
		struct SStudent* pSelectedStudent = gpFirstStudent;
		struct SStudent* pPreviousStudent = NULL;

		while(pSelectedStudent)
		{
			if(pSelectedStudent->data.ID == selected_id)
			{
				if(pPreviousStudent)
				{
					pPreviousStudent->PNextStudent = pSelectedStudent->PNextStudent;
				}
				else // 1st student ID = selected ID
				{
					gpFirstStudent = pSelectedStudent->PNextStudent;    // making it = NULL
				}
				free(pSelectedStudent);
				return 1;
			}
			pPreviousStudent = pSelectedStudent;
			pSelectedStudent = pSelectedStudent->PNextStudent;
		}
	}
	DPRINTF("\n cannot find student ID.");
	return 0;
}

void view_students(struct SStudent* linked_list)
{
	int count = 0;

	if(linked_list == NULL)
	{
		DPRINTF("\n Empty list");
	}
	else
	{
		while(linked_list)
		{
			DPRINTF("\n record number %d", count+1);
			DPRINTF("\n \t ID: %d ", linked_list->data.ID);
			DPRINTF("\n \t Name: %s ", linked_list->data.Name);
			DPRINTF("\n \t Height: %f ", linked_list->data.height);

			linked_list = linked_list->PNextStudent;
			count++;

		}
	}

}


void delete_all()
{
	struct SStudent* pCurrentStudent = gpFirstStudent;
	struct SStudent* p_temp;

	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n Empty list");
	}
	else
	{
		while(pCurrentStudent)
		{
			p_temp = pCurrentStudent;
			pCurrentStudent = pCurrentStudent->PNextStudent;
			free(p_temp);
		}
		gpFirstStudent = NULL;

	}
}

int GetNth(struct SStudent* linked_list, unsigned int index)
{
    unsigned int count = 0;

    while (linked_list)
    {
        if (count == index)
        {
            DPRINTF("\n record number %d", count + 1);
            DPRINTF("\n \t ID: %d ", linked_list->data.ID);
            DPRINTF("\n \t Name: %s ", linked_list->data.Name);
            DPRINTF("\n \t Height: %f ", linked_list->data.height);

            return 1;  // Node found at the specified index
        }

        linked_list = linked_list->PNextStudent;
        count++;
    }

    DPRINTF("\n Index not found");
    return 0;  // Node not found at the specified index
}


void nodes_number(struct SStudent* linked_list)
{
	unsigned int count=0;
	while(linked_list)
	{
		count++;
		linked_list = linked_list->PNextStudent;
	}
	DPRINTF("\n nodes number = %d", count);
}

int nodes_number_recursive(struct SStudent* linked_list)
{
	if(linked_list==NULL)
	{
		return 0;
	}
	else
	{
		while(linked_list)
		{
			linked_list = linked_list->PNextStudent;
			return 1+nodes_number_recursive(linked_list);
		}
	}
}

void get_nth_node_from_end(struct SStudent* linked_list)
{
	char temp_text[40];
	unsigned int count_from_end, count_toget;
	DPRINTF("\n Enter n'th node from end: ");
	gets(temp_text);
	count_from_end = atoi(temp_text);

	if(linked_list == NULL)
	{
		DPRINTF("\n Empty list");
	}
	else
	{
		unsigned int length = nodes_number_recursive(gpFirstStudent), count=1;
		count_toget = length - count_from_end + 1 ;
		if(count_toget>0)
		{
			while(linked_list)
			{
				if(count_toget==count)
				{
					DPRINTF("\n record number %d", count);
					DPRINTF("\n \t ID: %d ", linked_list->data.ID);
					DPRINTF("\n \t Name: %s ", linked_list->data.Name);
					DPRINTF("\n \t Height: %f ", linked_list->data.height);
				}
				count++;
				linked_list = linked_list->PNextStudent;
			}
		}

	}

}


void get_nth_node_from_end2(struct SStudent* linked_list)
{
    char temp_text[40];
    unsigned int count_from_end;
    unsigned int count = 0;
    DPRINTF("\n Enter n'th node from end: ");
    fgets(temp_text, sizeof(temp_text), stdin);
    count_from_end = atoi(temp_text);

    struct SStudent* fast_pointer = linked_list;
    struct SStudent* slow_pointer = linked_list;

    // Move fast pointer to the nth node from the start
    for (unsigned int i = 1; i < count_from_end; ++i) {
        if (fast_pointer == NULL) {
            DPRINTF("\n nth node does not exist");
            return;
        }
        fast_pointer = fast_pointer->PNextStudent;
    }

    // Move both pointers until the fast pointer reaches the end
    while (fast_pointer->PNextStudent) {
        fast_pointer = fast_pointer->PNextStudent;
        slow_pointer = slow_pointer->PNextStudent;
        count++;
    }

    DPRINTF("\n record number %d", count);
    DPRINTF("\n \t ID: %d ", slow_pointer->data.ID);
    DPRINTF("\n \t Name: %s ", slow_pointer->data.Name);
    DPRINTF("\n \t Height: %f ", slow_pointer->data.height);
}




void get_middle_node(struct SStudent* linked_list)
{
	if(linked_list == NULL)
	{
		DPRINTF("/n Empty list");
	}
	else
	{
		struct SStudent* slow_pointer = linked_list;
		struct SStudent* fast_pointer = linked_list;
		unsigned int count=0;

		while(fast_pointer!=NULL && fast_pointer->PNextStudent!=NULL)
		{
			fast_pointer = fast_pointer->PNextStudent->PNextStudent;
			slow_pointer = slow_pointer->PNextStudent;
			count++;
		}
		DPRINTF("\n record number %d", count+1);
		DPRINTF("\n \t ID: %d ", slow_pointer->data.ID);
		DPRINTF("\n \t Name: %s ", slow_pointer->data.Name);
		DPRINTF("\n \t Height: %f ", slow_pointer->data.height);
	}
}


void reverse_linked_list(struct SStudent* linked_list)
{
	if(linked_list == NULL)
	{
		DPRINTF("\n Empty list");
	}
	else
	{
		struct SStudent* current;
		struct SStudent* previous;
		struct SStudent* next;

		current = linked_list->PNextStudent;
		previous = linked_list;
		previous->PNextStudent = NULL;

		while(current)
		{
			next = current->PNextStudent;
			current->PNextStudent = previous;
			previous = current;
			current = next;
		}
		struct SStudent* head = previous;
		DPRINTF("\n Done reversing: ");
		view_students(head);

	}
}

void main()
{
	char temp_text[40];

	while(1)
	{
		DPRINTF("\n =========================");
		DPRINTF("\n\t Choose one of the following options: \n");
		DPRINTF("\n 1: AddStudent");
		DPRINTF("\n 2: delete_student");
		DPRINTF("\n 3: view_students");
		DPRINTF("\n 4: delete_all");
		DPRINTF("\n 5: index student");
		DPRINTF("\n 6: nodes number");
		DPRINTF("\n 7: nodes number recursive");
		DPRINTF("\n 8: NTH node from end1");
		DPRINTF("\n 9: NTH node from end2");
		DPRINTF("\n 10: middle node");
		DPRINTF("\n 11: reverse_linked_list");
		DPRINTF("\n Enter Option Number: ");

		gets(temp_text);
		DPRINTF("\n ============================");

		switch(atoi(temp_text))
		{
		case 1:
			AddStudent();
			break;
		case 2:
			delete_student();
			break;
		case 3:
			view_students(gpFirstStudent);
			break;
		case 4:
			delete_all();
			break;
		case 5:
			DPRINTF("\n Enter student Index: ");
			gets(temp_text);
			GetNth(gpFirstStudent, atoi(temp_text));
			break;
		case 6:
			nodes_number(gpFirstStudent);
			break;
		case 7:
			DPRINTF("\n nodes number by recursive: %d", nodes_number_recursive(gpFirstStudent));
			break;
		case 8:
			get_nth_node_from_end(gpFirstStudent);
			break;
		case 9:
			get_nth_node_from_end2(gpFirstStudent);
			break;
		case 10:
			get_middle_node(gpFirstStudent);
			break;
		case 11:
			reverse_linked_list(gpFirstStudent);
			break;
		default:
			DPRINTF("\n wrong option");
			break;

		}
	}
}

