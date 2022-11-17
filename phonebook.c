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
struct node *search(char name[]);
void searchRecord();
void listRecord();
void modifyRecord();
void getInfo(struct node *ptr);
void displayContact(struct node *current);

//---------------------------------------------  global variables ---------------------------------------------

int count = 0;

//------------------------------------------------------------------------------------------

int main()
{
      dummy("Iftekhar Likhan","213154243","likhan@gmail.com","Uttara, Dhaka");
      dummy("Shibly Sohaib","213154258","shibly@gmail.com","Savar, Dhaka");
      dummy("Abdur Rahman","213154270","hisham@gmail.com","Uttara, Dhaka");
      dummy("Rayhan Rafin","213154278","rayhan@gmail.com","Mirpur, Dhaka");
      dummy("Sayone Dey","213154289","sayone@gmail.com","Kalyanpur, Dhaka");
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
      printf("\n\n========================================= [Enter any other key to exit] =========================================\n");
      scanf("%d", &option);
      getchar();
      switch (option)
      {

      case 1: //----------------------------------------add contact---------------------------------------------------
            addRecord();
            break;

      case 2: //----------------------------------------delete contact------------------------------------------------
            deleteRecord();
            break;

      case 3: //----------------------------------------search contact------------------------------------------------
            searchRecord();

            break;

      case 4: //----------------------------------------edit contact------------------------------------------------
            modifyRecord();
            break;

      case 5: //----------------------------------------show all contacts------------------------------------------------
            listRecord();
            break;

      default:
            system("cls");
            printf("\n\n\n\n\n\n\n\n");
            printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
            printf("\t\t\t\xdb                                                                        \xdb\n");
            printf("\t\t\t\xdb  \xdb\xdb\xdb\xdb\xdb\xdb\xdb \xdb    \xdb   \xdb\xdb\xdb   \xdb     \xdb \xdb    \xdb      \xdb     \xdb  \xdb\xdb\xdb\xdb\xdb  \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb    \xdb  \xdb   \xdb  \xdb\xdb    \xdb \xdb   \xdb        \xdb   \xdb  \xdb     \xdb \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb    \xdb \xdb     \xdb \xdb \xdb   \xdb \xdb  \xdb          \xdb \xdb   \xdb     \xdb \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb\xdb\xdb\xdb\xdb\xdb \xdb\xdb\xdb\xdb\xdb\xdb\xdb \xdb  \xdb  \xdb \xdb\xdb\xdb            \xdb    \xdb     \xdb \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb    \xdb \xdb     \xdb \xdb   \xdb \xdb \xdb  \xdb           \xdb    \xdb     \xdb \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb    \xdb \xdb     \xdb \xdb    \xdb\xdb \xdb   \xdb          \xdb    \xdb     \xdb \xdb     \xdb    \xdb\n");
            printf("\t\t\t\xdb     \xdb    \xdb    \xdb \xdb     \xdb \xdb     \xdb \xdb    \xdb         \xdb     \xdb\xdb\xdb\xdb\xdb   \xdb\xdb\xdb\xdb\xdb     \xdb\n");
            printf("\t\t\t\xdb                                                                        \xdb\n");
            printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
            printf("\n\n\n\n\n\n\n\n\n\n");
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



//---------------------------------------------       1. add record    ---------------------------------------------
void addRecord()
{
      system("cls");
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
            printf("Enter option: \n\n");
            printf("\xdb\xdb 1. Add another contact\n\n");
            printf("\n\n=========================================== [Enter any other key to go back] ===========================================\n");
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
            {
                  current = current->next;
            }
            newnode = (struct node *)malloc(sizeof(struct node));
            getInfo(newnode);
            newnode->next = NULL;
            current->next = newnode;

            printf("\n\n");
            printf("Enter option: \n\n");
            printf("\xdb\xdb 1. Add another contact\n\n");
            printf("\n\n=========================================== [Enter any other key to go back] ===========================================\n");
            scanf("%d", &option);
            getchar();
            if (option == 1)
                  addRecord();
            else
                  back();
      }
}




//---------------------------------------------   get info  ---------------------------------------------

void getInfo(struct node *ptr)
{
      struct node *current = head;
      printf("Enter name   : ");
      gets(ptr->name);
      if (count > 0)
      {
            while (search(ptr->name))
            {
                  printf("\n\nThere is an existing contact with the same name. Try a different name.\n\n");
                  printf("Enter name   : ");
                  gets(ptr->name);
            }
      }
      printf("Enter phone  : ");
      gets(ptr->phone);
      printf("Enter email  : ");
      gets(ptr->email);
      printf("Enter address: ");
      gets(ptr->address);
      count++;
}








//---------------------------------------------        2. delete contact      ---------------------------------------------
void deleteRecord()
{
      system("cls");
      int option;
      char name[50], confirmation;
      struct node *contact;
      printf("Enter contact name to delete: ");
      gets(name);
      if (search(name))
      {
            printf("\n\n");
            printf("                                                  ========================\n");
            printf("                                                        Contact found \n");
            printf("                                                  ========================\n");
            contact = search(name);
            displayContact(contact);
            printf("Do you want to delete this contact [Y/N]? ");
            scanf("%c", &confirmation);
            getchar();
            if (confirmation == 'Y' || confirmation == 'y')
            {
                  delete (contact);
                  printf("\n\n");
                  printf("                                                  ========================\n");
                  printf("                                                       Contact deleted\n");
                  printf("                                                  ========================\n");
            }
            else
            {
                  printf("\n\n");
                  printf("                                                  ========================\n");
                  printf("                                                    Contact not deleted\n");
                  printf("                                                  ========================\n");
            }
      }
      else
      {
            printf("\n\n");
            printf("                                                  ========================\n");
            printf("                                                      Contact not found\n");
            printf("                                                  ========================\n");
      }
      printf("\n\n");
      printf("Enter option: \n\n");
      printf("\xdb\xdb 1. Delete another contact\n\n");
      printf("\n\n=========================================== [Enter any other key to go back] ===========================================\n");
      scanf("%d", &option);
      getchar();
      if (option == 1)
            deleteRecord();
      else
            back();
}







//---------------------------------------------		delete	---------------------------------------------
void delete (struct node *contact)
{
      struct node *current;
      if (contact == head)
      {
            head = head->next;
            free(contact);
            count--;
      }
      else
      {
            current = head;
            while (current->next != contact)
            {
                  current = current->next;
            }
            current->next = contact->next;
            free(contact);
            count--;
      }
}









//---------------------------------------------		3. search record		---------------------------------------------
void searchRecord()
{
      system("cls");
      int option;
      char name[50];
      struct node *contact;
      printf("Enter contact name to search: ");
      gets(name);
      if (search(name))
      {
            printf("\n\n");
            printf("                                                  ========================\n");
            printf("                                                        Contact found \n");
            printf("                                                  ========================\n");
            contact = search(name);
            displayContact(contact);
      }
      else
      {
            printf("\n\n");
            printf("                                                  ========================\n");
            printf("                                                      Contact not found\n");
            printf("                                                  ========================\n");
      }
      printf("\n\n");
      printf("Enter option: \n\n");
      printf("\xdb\xdb 1. Search for another contact\n\n");
      printf("\n\n=========================================== [Enter any other key to go back] ===========================================\n");
      scanf("%d", &option);
      getchar();
      if (option == 1)
            searchRecord();
      else
            back();
}




//--------------------------------------------- 	search	---------------------------------------------
struct node *search(char name[])
{
      struct node *current = head;
      while (current != NULL)
      {
            if (strcmp(name, current->name) == 0)
            {
                  return current;
            }
            current = current->next;
      }
      return 0;
}







//---------------------------------------------		display contact		---------------------------------------------
void displayContact(struct node *current)
{
      printf("Name    : %s\n", current->name);
      printf("Phone   : %s\n", current->phone);
      printf("Email   : %s\n", current->email);
      printf("Address : %s\n", current->address);
      printf("\n\n");
}


//---------------------------------------------       4. modify record      ---------------------------------------------
void modifyRecord()
{
      system("cls");
      int option;
      char name[50];
      struct node *contact;
      printf("Enter contact name to edit: ");
      gets(name);
      if (search(name))
      {
            printf("\n\n");
            printf("                                                  ========================\n");
            printf("                                                        Contact found \n");
            printf("                                                  ========================\n");
            contact = search(name);
            displayContact(contact);
            int edit;
            printf("\nChoose what to edit\n");
            printf("\n1. Edit name\n");
            printf("\n2. Edit phone\n");
            printf("\n3. Edit email\n");
            printf("\n4. Edit address\n\n");
            printf("\n\n=========================================== [Enter any other key to go back] ===========================================\n");
            scanf("%d", &edit);
            getchar();
            if (edit == 1)
            {
                  printf("Enter name    : ");
                  gets(contact->name);
                  printf("\n\n");
                  printf("                                                  ========================\n");
                  printf("                                                       Contact updated \n");
                  printf("                                                  ========================\n");
            }
            else if (edit == 2)
            {
                  printf("Enter phone   : ");
                  gets(contact->phone);
                  printf("\n\n");
                  printf("                                                  ========================\n");
                  printf("                                                       Contact updated \n");
                  printf("                                                  ========================\n");
            }
            else if (edit == 3)
            {
                  printf("Enter email   : ");
                  gets(contact->email);
                  printf("\n\n");
                  printf("                                                  ========================\n");
                  printf("                                                       Contact updated \n");
                  printf("                                                  ========================\n");
            }
            else if (edit == 4)
            {
                  printf("Enter address : ");
                  gets(contact->address);
                  printf("\n\n");
                  printf("                                                  ========================\n");
                  printf("                                                       Contact updated \n");
                  printf("                                                  ========================\n");
            }
            else
            {
                  back();
            }
      }
      else
      {
            printf("\n\n");
            printf("                                                  ========================\n");
            printf("                                                      Contact not found\n");
            printf("                                                  ========================\n");
      }
      printf("\n\n");
      printf("Enter option: \n\n");
      printf("\xdb\xdb 1. Edit another contact\n\n");
      printf("\n\n=========================================== [Enter any other key to go back] ===========================================\n");
      scanf("%d", &option);
      getchar();
      if (option == 1)
            modifyRecord();
      else
            back();
}








//---------------------------------------------      5. list record   ---------------------------------------------

void listRecord()
{
      system("cls");
      int option;
      system("cls");
      printf("\n\n");
      printf("                                                  ========================\n");
      printf("                                                         Contact list \n");
      printf("                                                  ========================\n");
      printf("\n\n========================================================================================================================\n");
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
                  printf("\n");
                  printf("Name    : %s\n", current->name);
                  printf("Phone   : %s\n", current->phone);
                  printf("Email   : %s\n", current->email);
                  printf("Address : %s\n", current->address);
                  printf("\n========================================================================================================================\n");
                  current = current->next;
            }
      }
      printf("\n\n=========================================== [Enter any other key to go back] ===========================================\n");
      scanf("%d", &option);
      getchar();
      back();
}










//--------------------------------------------- dummy data ---------------------------------------------
void dummy(char name[], char phone[], char email[], char address[])
{
      struct node *current;
      if (count == 0)
      {
            head = (struct node *)malloc(sizeof(struct node));

            if (head == NULL)
                  printf("Not enough memory\n");
            else
            {
                  strcpy(head->name, name);
                  strcpy(head->phone, phone);
                  strcpy(head->email, email);
                  strcpy(head->address, address);
                  head->next = NULL;
                  count++;
            }
      }
      else
      {
            struct node *newnode;
            current = head;
            while (current->next != NULL)
            {
                  current = current->next;
            }
            newnode = (struct node *)malloc(sizeof(struct node));
            strcpy(newnode->name, name);
            strcpy(newnode->phone, phone);
            strcpy(newnode->email, email);
            strcpy(newnode->address, address);
            newnode->next = NULL;
            current->next = newnode;
            count++;
      }
}
