#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	char name[50];
	char phone[20];
	char email[30];
	char address[30];
	struct contact *next;
} * head;

void menu();
void back();
void start();
void addRecord();
void deleteRecord();
int searchRecord(char name[]);
void listRecord();
void modifyRecord();
void getInfo(struct node *ptr);

/////////////////////// global variables ////////////////////////////////////

int count = 0;

//////////////////////////////////////////////////////////

int main()
{
	start();
	return 0;
}

void menu()
{
	int option, count;

	system("cls");
	printf("\n");
	printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\xdb                                                                        \xdb\n");
	printf("\t\t\t\xdb \xdb\xdb\xdb\xdb\xdb\xdb  \xdb    \xdb   \xdb\xdb\xdb\xdb   \xdb     \xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb    \xdb\xdb\xdb\xdb    \xdb\xdb\xdb\xdb   \xdb   \xdb \xdb\n");
	printf("\t\t\t\xdb \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb\xdb    \xdb  \xdb       \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb  \xdb  \xdb\n");
	printf("\t\t\t\xdb \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb \xdb   \xdb  \xdb       \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb \xdb   \xdb\n");
	printf("\t\t\t\xdb \xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb    \xdb  \xdb  \xdb  \xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb    \xdb  \xdb    \xdb  \xdb\xdb    \xdb\n");
	printf("\t\t\t\xdb \xdb       \xdb    \xdb  \xdb    \xdb  \xdb   \xdb \xdb  \xdb       \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb \xdb   \xdb\n");
	printf("\t\t\t\xdb \xdb       \xdb    \xdb  \xdb    \xdb  \xdb    \xdb\xdb  \xdb       \xdb    \xdb  \xdb    \xdb  \xdb    \xdb  \xdb  \xdb  \xdb\n");
	printf("\t\t\t\xdb \xdb       \xdb    \xdb   \xdb\xdb\xdb\xdb   \xdb     \xdb  \xdb\xdb\xdb\xdb\xdb\xdb  \xdb\xdb\xdb\xdb\xdb    \xdb\xdb\xdb\xdb    \xdb\xdb\xdb\xdb   \xdb   \xdb \xdb\n");
	printf("\t\t\t\xdb                                                                        \xdb\n");
	printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\t\t\t    ===============\n");
	printf("\t\t\t\t\t\t      APPLICATION  \n");
	printf("\t\t\t\t\t\t    ===============\n");

	printf("\n\n");
	printf("\xdb\xdb 1. Add new contact\n\n");
	printf("\xdb\xdb 2. Delete contact\n\n");
	printf("\xdb\xdb 3. Search contact\n\n");
	printf("\xdb\xdb 4. Edit contact\n\n");
	printf("\xdb\xdb 5. Show all contacts\n\n");
	printf("\n\n========================================= [Enter any ohter key to exit] =========================================\n");
	scanf("%d", &option);
	getchar();
	switch (option)
	{

	case 1: //----------------------------------------add contact---------------------------------------------------
		addRecord();
		break;

	case 2: //----------------------------------------delete contact------------------------------------------------
		printf("two");

		break;

	case 3: //----------------------------------------search contact------------------------------------------------
		char name[50];
		printf("Enter contact name to search: ");
		gets(name);
		searchRecord(name);
		break;

	case 4: //----------------------------------------edit contact------------------------------------------------

		printf("four");
		break;

	case 5: //----------------------------------------show all contacts------------------------------------------------

		listRecord();

		break;

	default:
		return 0;
	}
}

void back()
{
	menu();
}

void start()
{
	menu();
}

void addRecord()
{
	struct node *current;
	int option;
	if (count == 0)
	{
		head = (struct node *)malloc(sizeof(struct node));

		if (head == NULL)
			printf("Not enough memory\n");
		else
		{
			getInfo(head);
			head->next = NULL;
		}

		printf("\n\n");
		printf("\xdb\xdb 1. Add another contact\n\n");
		printf("\n\n========================================= [Enter any other key to go back] =========================================\n");
		scanf("%d", &option);
		getchar();
		if (option == 1)
			addRecord();
		else
			back();
	}
	else
	{
		struct node *newnode;
		current = head;
		while (current->next != NULL)
			current = current->next;
		newnode = (struct node *)malloc(sizeof(struct node));
		getInfo(newnode);
		newnode->next = NULL;
		current->next = newnode;

		printf("\n\n");
		printf("\xdb\xdb 1. Add another contact\n\n");
		printf("\n\n========================================= [Enter any ohter key to go back] =========================================\n");
		scanf("%d", &option);
		getchar();
		if (option == 1)
			addRecord();
		else
			back();
	}
}

void listRecord()
{
	system("cls");
	printf("count = %d\n", count);
	printf("\n\n");
	printf("                                                  ========================\n");
	printf("                                                         Contact list \n");
	printf("                                                  ========================\n");
	printf("\n\n========================================================================================================================\n\n");
	if (count == 0)
	{
		printf("\n\n");
		printf("                                                  ========================\n");
		printf("                                                      No saved contacts \n");
		printf("                                                  ========================\n");
	}
	else
	{

		struct node *current = head;
		while (current != NULL)
		{
			printf("Name    : %s\n", current->name);
			printf("Phone   : %s\n", current->phone);
			printf("Email   : %s\n", current->email);
			printf("Address : %s\n", current->address);
			printf("\n========================================================================================================================\n\n");
			current = current->next;
		}
	}
}

void getInfo(struct node *ptr)
{
	struct node *current = head;
	printf("Enter name: ");
	gets(ptr->name);
	printf("Enter phone: ");
	gets(ptr->phone);
	printf("Enter email: ");
	gets(ptr->email);
	printf("Enter address: ");
	gets(ptr->address);
	count++;
}

int searchRecord(char name[])
{
	struct node *current = head;
	while (current != NULL)
	{
		if (strcmp(name, current->name) == 0)
		{
			printf("Name    : %s\n", current->name);
			printf("Phone   : %s\n", current->phone);
			printf("Email   : %s\n", current->email);
			printf("Address : %s\n", current->address);
			return 1;
		}
		current = current->next;
	}
	printf("Contact not found\n");
	return 0;
}
