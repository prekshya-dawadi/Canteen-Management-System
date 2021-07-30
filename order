#include <stdio.h>
#include <stdlib.h>
int totalamt=0;
int totalqty=0;
void order(int b, int c){
    printf("Quantity:%d\n",b);
    printf("Your Total is:Rs%d\n",c);
}
void breakfast()
{
    int a,b,c,d,e=1;
    printf("\nS.N \t Name \t\t\t Rate\n");
    
    printf("1\tEgg Sandwich\t\tRs40\n2\tVeg Sandwich\t\tRs30\n3\tDoughnut\t\tRs20\n4\tTosted Bread\t\tRs30\n5\tBread and Butter\tRs35\n");
    printf("Enter your choice\n");
    scanf("%d",&a);
    printf("How many plates do you wanna order\n");
    scanf("%d",&b);
    
    if (a==1){
        c=b*40;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt); 
    }
    else if (a==2){
        c=b*30;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==3){
        c=b*20;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==4){
        c=b*30;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==5){
        c=b*35;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else{
        printf("Enter correct choice\n");
        breakfast();
    }
    while(e != 0){
        printf("\nDo you wanna buy again?\n  YES for 1     NO for 0?\n");
        scanf("%d",&e);
        if(e == 1){
            breakfast();
        }else{
            main();
        }
    }
}
void lunch(){
    int a,b,c,e=1;
    printf("S.N \t Name \t\t\t Rate\n");
    printf("1\tVeg Rice Set\t\tRs60\n2\tChicken Rice Set\tRs120\n");
    printf("Enter your choice\n");
    scanf("%d",&a);
    printf("How many plates do you wanna order\n");
    scanf("%d",&b);
    if (a==1){
        c=b*60;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==2){
        c=b*120;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else{
        printf("Enter correct choice\n");
        lunch();
    }
    while(e != 0){
        printf("\nDo you want to buy again?\n YES for 2         NO for 0?\n");
        scanf("%d",&e);
        if(e == 2){
            lunch();
        }else{
            main();
        }
    }
}
void snacks(){
     int a,b,c,e=1;
   printf("\nS.N \t Name \t\t\t Rate\n");
    
    printf("1\tWaiwai Fried Noddles\t\tRs40\n2\tVeg Chowmein\t\tRs40\n3\tChicken Chowmein\t\tRs60\n4\tMini Mixed Pizza\t\tRs100\n5\tBuff Momo\tRs100\n6\tSprite-300ml\tRs70\n7\tFanta-300ml\tRs70\n8\tIced Peach Tea\tRs150\n9\tlemonade\tRs120\n");
    printf("Enter your choice\n");
    scanf("%d",&a);
    printf("How many plates do you wanna order\n");
    scanf("%d",&b);
    if (a==1){
        
        c=b*40;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt); 
        
    }
    else if (a==2){
        c=b*40;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==3){
        c=b*60;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==4){
        c=b*100;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==5){
        c=b*100;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==6){
        c=b*70;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==7){
        c=b*70;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==8){
        c=b*150;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==9){
        c=b*120;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else{
        printf("Enter correct choice");
        snacks();
    }
    while(e != 0){
        printf("\nDo you wanna buy again?\n YES for 3       NO for 0?\n");
        scanf("%d",&e);
        if(e == 3){
            snacks();
        }else{
            main();
        }
    }
}
void dinner(){
    int a,b,c,e=1;
    printf("S.N \t Name \t\t\t Rate\n");
    printf("1\tVeg Rice Set\t\tRs60\n2\tChicken Rice Set\tRs120\n");
    printf("Enter your choice\n");
    scanf("%d",&a);
    printf("How many plates do you wanna order\n");
    scanf("%d",&b);
    if (a==1){
        c=b*60;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else if (a==2){
        c=b*120;
        totalamt=totalamt+c;
        totalqty=totalqty+b;
        order(totalqty,totalamt);
    }
    else{
        printf("Enter correct choice\n");
        dinner();
    }
    while(e != 0){
        printf("\nDo you wanna buy again?\n YES for 4    NO for 0?\n");
        scanf("%d",&e);
        if(e == 4){
            dinner();
        }else{
            main();
        }
    }
}

int main(){
    int choice;
    printf("MENU list\n");
    printf("1. Breakfast menu\n");
    printf("2. Lunch menu\n");
    printf("3. Snacks menu\n");
    printf("4. Dinner menu\n");
    printf("5. Exit the menu\n");
    printf("Which menu do u prefer enter its number:\n");
    scanf("%d",&choice);
    printf("%d",choice);
    if(choice==1){
        breakfast();
    }
    else if(choice==2){
        lunch();
    }
    else if(choice==3){
        snacks();
    }
    else if(choice==4){
        dinner();
    }
    else if(choice==5){
        exit(0);
    }
    
    else{
        printf("Enter correct number\n");
        main();
        
    }
    return 0;
}
