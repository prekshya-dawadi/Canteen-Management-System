#include <stdio.h>
#include <stdlib.h>
int main(){


    //Assuming that I already have data: Name, Rate, Qt, Amount, Date, Time

    // Dummy Values

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
    int count;
    char order[20] = {'Momo'};
    float rate[20] = {0.0};
    int quantity[20] = {1};
    float amount[20] = {0};
    for (count=0; count<5; count++){
        order[count] = 'a';
        quantity[count] = 2;
        rate[count] = 3.0;
        amount[count] = quantity[count] * rate[count];
    }
    // End of dummy order
    //End of dummy values

    // Formatting of the bill
    system("clear");
    printf("\t \t \t \t \t Kathmandu University\n");
    printf("______________________________________________________________________________________________________________________\n");

    printf("Canteen Management System\n");
    printf("\n");
    printf("Name: %s\n",Name);
    printf("Date: %d-%d-%d\n", today.day, today.month, today.year);
    printf("Time of printing bill: %f\n", time);
    printf("\n");
    printf("______________________________________________________________________________________________________________________\n");
    printf("S.N \t \t \t Order \t \t \t Rate \t \t \t Quantity \t \t \t Amount\n");
    printf("______________________________________________________________________________________________________________________\n");
    printf("\n");
    // end of formatting

    // Main bill-printing
    int counter = 0;
    for (counter=0; counter<20; counter++){
        printf("%2d", counter);
        printf("%32c", order[counter]);
        printf("%19.2f", rate[counter]);
        printf("%25d", quantity[counter]);
        printf("%36.2d", amount[counter]);
        printf("\n");
    }
    exit(0);
}
