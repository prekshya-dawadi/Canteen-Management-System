#include <stdio.h>
#include <stdlib.h>
int main(){


    //Assuming that I already have data: Name, Rate, Qt, Amount, Date, Time

    // Dummy Values
    system("clear");


    char Name[] = "Prekshya Dawadi";
    typedef struct {
        int day;
        int month;
        int year;
    } Date;
    Date today;
    today.day = 27;
    today.month = 07;
    today.year = 2021;
    float time = 5.22;

    // Dummy order
    // supposing that the total number of order is 5
    int count;
    char order[5][20] = {"momo", "chowmin", "fried rice", "zoobidoobidoooooo", "snacks(?)"};
    float rate[5];
    int quantity[5];
    float amt = 0.0;
    float amount[5] = {0.0};
    for (count=0; count<5; count++){
        rate[count] = 2.0;
        quantity[count] = 3;
        amount[count] = (float)quantity[count] * rate[count];
        amt = amt + amount[count];
    }
    // End of dummy order
    //End of dummy values

    // Formatting of the bill
//     system("clear");
    printf("\t \t \t \t \t Kathmandu University\n");
    printf("______________________________________________________________________________________________________________________________\n");

    printf("Canteen Management System\n");
    printf("\n");
    printf("Name: %s\n",Name);
    printf("Date: %d-%d-%d\n", today.day, today.month, today.year);
    printf("Time of printing the bill: %f\n", time);
    printf("\n");
    printf("______________________________________________________________________________________________________________________________\n");
    printf("S.N \t \t \t Order \t \t \t Rate(in Rs.) \t \t \t Quantity \t \t \t Amount(in Rs.)\n");
    printf("______________________________________________________________________________________________________________________________\n");
    printf("\n");
    // end of formatting

    // Main bill-printing
    int counter = 0;
    for (counter=0; counter<5; counter++){
        printf("%2d", counter+1);
        printf("%32s", order[counter]);
        printf("%19.2f", rate[counter]);
        printf("%32d", quantity[counter]);
        printf("%38.2f", amount[counter]);
        printf("\n");
    }
    printf("\n");
    printf("\t \t \t \t \t \t \t \t \tTotal amount payable:  %19.2f\n",amt);
    exit(0);
}
