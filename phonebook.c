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
void searchRecord();
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
	switch (option)
	{

	case 1: //----------------------------------------add contact---------------------------------------------------
		addRecord();
		break;

	case 2: //----------------------------------------delete contact------------------------------------------------
		printf("two");

		break;

	case 3: //----------------------------------------search contact------------------------------------------------

		printf("three");
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
			printf("%s\n", current->name);
			printf("%s\n", current->phone);
			printf("%s\n", current->email);
			printf("%s\n", current->address);
			printf("\n========================================================================================================================\n\n");
			current = current->next;
		}
	}
}

void getInfo(struct node *ptr)
{
	struct node *current = head;
	getchar();
	printf("Enter name: ");
	gets(ptr->name);
	while (current->next!= NULL)
	{
		if (!strcmp(ptr->name, current->name))
		{
			printf("already exists\n");
			printf("Enter name: ");
			gets(ptr->name);
			current=head;
		}
		current = current->next;
	}
	printf("Enter phone: ");
	gets(ptr->phone);
	printf("Enter email: ");
	gets(ptr->email);
	printf("Enter address: ");
	gets(ptr->address);
	count++;
}
