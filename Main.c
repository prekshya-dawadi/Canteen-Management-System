#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void FrontScreen(void);
void CanteenMgmt(void);
void DisplayMenu(void);
void TakeOrder(void);
void BillingWindow(void);

int main()
{
    FrontScreen();
    return 0;
}

void CanteenMgmt()
{
    //system("cls");
    printf("\nCANTEEN RULES, every students must abide by:\n\n");
    printf("1. Only KU students are allowed in this canteen.\n");
    printf("2. Foods are available according to the time slot for each of them.\n");
    printf("3. Students can order the food by paying through the ID Card.\n");
    printf("4. No Cash Allowed to order the food from the canteen.\n");

    exit(0);
}
void DisplayMenu()
{
    printf("\nThe Menu Bar according to the Time slot:\n");
    printf("1. Breakfast -> 7:00 AM - 9:30 AM \n2. Lunch -> 10:00 PM - 12:00 PM  \n3. Snacks -> 1:30 PM - 4:00 PM   \n4. Dinner -> 5:00 PM - 7:30 PM \n");

    int select;
    printf("Please Enter your desired option");
    scanf("%d",&select);

    if(select == 1)
    {
        printf("\nThe menu for Breakfast:");
        printf("1. Coffee");

    }

    exit(0);
}

void FrontScreen()
{
    printf("_____________________________\n");
    printf("Welcome to KU Canteen System\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n");
    printf("1. Canteen Management System\n");
    printf("2. Student Section\n");
    printf("3. Exit\n");
    printf("_____________________________\n");

    int select;
    printf("Enter your selected option: ");
    scanf("%d",&select);


    switch(select)
    {
        case 1:
        CanteenMgmt();
        break;

        case 2:
        DisplayMenu();
        break;

        case 3:
        //system("cls"); 
        printf("__________________________________\n");
        printf("\tFEELING HUNGRY ?\n");
        printf("\tYOU CAN PLACE YOUR ORDER NOW!\n");
        printf("\tTHANK YOU. VISIT AGAIN\n");
        printf("__________________________________\n");
        break;

        default:
        printf("Please choose a number from the valid options!");
    }  

    exit(0);
}


