
/*
HARIS AHSAN
--SOFTWARE ENGINEER
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

struct Customer
{

    char phone[100];
    char name[100];
    float amount;
    int id;
    struct Customer *next;

} * head;

void login();

void customer_login();

void admin_menu();

void insert(char *name, char *phone, float amount, int id);

void Delete(int id);

void update(int id);

void search(int id);

void display();
void check_bill();

int main()
{
    head = NULL;
    int choose;

    printf("\n\t\t\t\t\t\t*********************************");
    printf("\n\t\t\t\t\t\t|\t  DSA PROJECT\t\t|");
    printf("\n\t\t\t\t\t\t|\t  Haris Ahsan\t\t|");
    printf("\n\t\t\t\t\t\t*********************************");

    printf("\n");
    printf("\n\t\t\t*********************************************************");
    printf("\n\t\t\t---WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");
    printf("\n\t\t\t*********************************************************\n");
    Sleep(500);
    getch();
    system("cls");

    do
    {
        printf("\n\t\t\t\t\t***********************************************\n");
        printf("\n");
        printf("\t\t\t\t\t|\tPress 1 For Admin Panel\t\t|\n\t\t\t\t\t|\tPress 2 For Customer Panel\t|\n\t\t\t\t\t|\tPress 3 For Exit\t\t|\n");
        printf("\t\t\t\t\t|\tEnter your choice:\t\t|\n");
        scanf("%d", &choose);
        printf("\n\t\t\t\t\t***********************************************\n");
        printf("\n");
        system("cls");

        switch (choose)
        {
        case 1:
            login();

            break;
        case 2:
            customer_login();
            break;
        case 3:
            printf("\nTHANK YOU\n");
            printf("FOR USING OUR SERVICE\n");
            break;
        }
    } while (choose != 3);
}

void login()
{
    char pass[90];
    char name[90];
    printf("\n");
    printf("\n\t\t\t*********************************************************");
    printf("\n\t\t\t--------------WELCOME TO THE Admin Panel---------------");
    printf("\n\t\t\t*********************************************************\n");
    printf("\t\t=========================\n");
    printf("\t\tEnter username::    ");
    scanf("%s", name);

    printf("\n\t\tEnter Password::  ");
    scanf("%s", pass);
    printf("\n\t\t=========================\n");
    printf("\n\t\t\t\t\t***********************************************\n");
    system("cls");
    if ((strcmp(name, "1") == 0) && (strcmp(pass, "1") == 0))
    {
        admin_menu();
    }
    else
    {
        printf("Invalid Password,Please Try Again");
    }
}

void admin_menu()
{
    head = NULL;
    int choice;
    char phone[100];
    char name[100];
    float amount;
    int id;
    do
    {

        printf("\n\t\t\t\t\t|\t1 To Add New Records\t\t|\n\t\t\t\t\t|\t2 To Search Records\t\t|\n"
               "\t\t\t\t\t|\t3 Delete Records\t\t|\n\t\t\t\t\t|\t4 To Update Records\t\t|"
               "\n\t\t\t\t\t|\t5 To Display List Of Records\t|\n\t\t\t\t\t|\t6 To Exit\t\t\t|\n");
        printf("\n");
        printf("\t\t=========================");
        printf("\n\t\tEnter Choice :: ");
        scanf("%d", &choice);
        printf("\n\t\t=========================\n");
        system("cls");

        switch (choice)
        {

        case 1:
            printf("\n");
            printf("\n\t\t\t*********************************************************");
            printf("\n\t\t\t-------------WELCOME TO THE *ADD RECORD* Menu--------------");
            printf("\n\t\t\t*********************************************************\n");
            printf("***************\n");
            printf("Enter Name :: ");
            scanf("%s", name);
            printf("\nEnter Phone Number :: ");
            scanf("%s", phone);

            fflush(stdin);
            printf("\nEnter Amount :: ");
            scanf("%f", &amount);
            printf("\nEnter ID :: ");
            scanf("%d", &id);
            insert(name, phone, amount, id);
            printf("****************\n");

            system("cls");

            break;
        case 2:
            printf("\n");
            printf("\n\t\t\t*********************************************************");
            printf("\n\t\t\t--------------WELCOME TO THE *Search* Menu---------------");
            printf("\n\t\t\t*********************************************************\n");
            printf("****************\n");
            printf("\nEnter ID To Search :: ");
            scanf("%d", &id);
            printf("****************\n");
            search(id);
            printf("\n\t\t\t--------------Press Any Key to Continue---------------");
            getch();
            system("cls");

            break;
        case 3:
            printf("\n");
            printf("\n\t\t\t*********************************************************");
            printf("\n\t\t\t------------WELCOME TO THE *Delete RECORD* Menu-------------");
            printf("\n\t\t\t*********************************************************\n");
            printf("****************\n");
            printf("\nEnter ID To Delete :: ");
            scanf("%d", &id);
            printf("****************\n");
            Delete(id);
            printf("\n\t\t\t--------------Press Any Key to Continue---------------");
            getch();
            system("cls");
            break;
        case 4:
            printf("\n");
            printf("\n\t\t\t*********************************************************");
            printf("\n\t\t\t------------WELCOME TO THE *UPDATE RECORD* Menu--------------");
            printf("\n\t\t\t*********************************************************\n");
            printf("****************\n");
            printf("\nEnter ID To Update :: ");
            scanf("%d", &id);
            printf("****************\n");
            update(id);
            printf("\n\t\t\t--------------Press Any Key to Continue---------------");
            getch();
            system("cls");
            break;
        case 5:
            printf("\n");
            printf("\n\t\t\t*********************************************************");
            printf("\n\t\t\t------------WELCOME TO THE *DISPLAY RECORD* Menu--------------");
            printf("\n\t\t\t*********************************************************\n");
            display();
            printf("\n\t\t\t--------------Press Any Key to Continue---------------");
            getch();
            system("cls");
            break;
        }

    } while (choice != 6);
}

void customer_login()
{
    int choose;
    do
    {
        printf("\n");
        printf("\n\t\t\t*********************************************************");
        printf("\n\t\t\t--------------WELCOME TO THE Customer Panel---------------");
        printf("\n\t\t\t*********************************************************\n");
        printf("\n\t\t\t\t\t|\tPress 1 to Check the bill\t\t|\n\t\t\t\t\t|\tPress 2 to Exit\t\t\t\t|\n");
        printf("Enter your Choice\n");
        scanf("%d", &choose);
        system("cls");
        switch (choose)
        {
        case 1:
            printf("\n");
            printf("\n\t\t\t*********************************************************");
            printf("\n\t\t\t-------------WELCOME TO THE *BILLING* Menu--------------");
            printf("\n\t\t\t*********************************************************\n");
            check_bill();
            printf("\n\t\t\t--------------Press Any Key to Continue---------------");
            getch();
            system("cls");
            break;
        }
    } while (choose != 2);
}

void insert(char *name, char *phone, float amount, int id)
{

    struct Customer *customer = (struct Customer *)malloc(sizeof(struct Customer));
    strcpy(customer->phone, phone);
    strcpy(customer->name, name);
    customer->amount = amount;
    customer->id = id;
    customer->next = NULL;

    if (head == NULL)
    {
        head = customer;
    }
    else
    {
        customer->next = head;
        head = customer;
    }
}

void Delete(int id)
{

    struct Customer *temp1 = head;
    struct Customer *temp2 = head;
    while (temp1 != NULL)
    {

        if (temp1->id == id)
        {
            printf("\n====================================\n");
            printf("Record With ID %d Is Found !!!\n", id);

            if (temp1 == temp2)
            {
                head = head->next;
                free(temp1);
            }
            else
            {
                temp2->next = temp1->next;
                free(temp1);
            }

            printf("Record Successfully Deleted !!!\n");
        }
        else
        {
            printf("Record With ID %d Is Not Found !!!\n", id);
        }
        temp2 = temp1;
        temp1 = temp1->next;
        printf("\n====================================\n");
    }
}

void update(int id)
{

    struct Customer *temp = head;
    while (temp != NULL)
    {

        if (temp->id == id)
        {
            printf("\n====================================\n");
            printf("Record With ID %d Is Found !!!\n", id);
            printf("Enter New Phone Number :: ");
            scanf("%s", temp->phone);
            printf("Enter New Name :: ");
            scanf("%s", temp->name);
            printf("Enter new Amount :: ");
            scanf("%f", &temp->amount);
            printf("Record Has Been Updated Successfully !!!\n");
            printf("\n====================================\n");
        }
        temp = temp->next;
    }
    printf("Record With ID %d Is Not Found !!!\n", id);
}

void search(int id)
{

    struct Customer *temp = head;
    while (temp != NULL)
    {
        if (temp->id == id)
        {
            printf("\n====================================\n");
            printf("Record With ID %d Is Found !!!\n", id);
            printf("Phone Number :: %s\n", temp->phone);
            printf("Name :: %s\n", temp->name);
            fflush(stdin);
            printf("Amount :: %0.4f\n", temp->amount);
            printf("=====================================\n");
            return;
        }
        temp = temp->next;
    }
    printf("=====================================\n");
    printf("Record With ID %d Is Not Found !!!\n", id);
    printf("=====================================\n");
}

void display()
{

    struct Customer *temp = head;
    while (temp != NULL)
    {
        printf("\n====================================\n");
        printf("Name :: %s\n", temp->name);
        printf("Phone :: %s\n", temp->phone);

        printf("Amount :: %0.3f\n\n", temp->amount);
        printf("\n====================================\n");
        temp = temp->next;
    }
}
void check_bill()
{
    struct Customer *temp = head;
    printf("\n===============================================\n");
    printf("Dear Customer! Your Bill For Following Number Is:\n");
    while (temp != NULL)
    {

        printf("Name :: %s\n", temp->name);
        printf("Phone :: %s\n", temp->phone);
        printf("Amount :: %0.3f\n\n", temp->amount);
        temp = temp->next;
    }
    printf("\n=============================================\n");
}