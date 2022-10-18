#include <stdio.h>

int main()
{
    int amount; //Amount to be entered by user
    int remaining_amount; //The amount that is left after calculation
    int nt500, nt100, nt50, nt20, nt10, nt5, nt2, nt1; //The denominations

    nt500 = nt100 = nt50 = nt20 = nt10 = nt5 = nt2 = nt1 = 0; //Initializing the denominations

    printf("Enter amount: ");
    scanf("%d", &amount);
    /* Lets Take 1176 as an example */

    nt500 = amount / 500; // 1176/500 = 2
    remaining_amount = amount % 500; // 1176 % 500 = 176
    /* The remaining amount now is 176 */

    /*
       We will now use the remaining_amount instead of amount for further calculations.
       This is because after each denomination calculation, as the notes have been counted, the amount gets reduced
       by the number of notes times the denomination.
       So we update remaining_amount after calculating each denomination and use that remaining_amount
       for calculating the next denomination and so on....
    */

    nt100 = remaining_amount / 100; // 176/100 = 1
    remaining_amount = remaining_amount % 100; // 176 % 100 = 76

    nt50 = remaining_amount / 50; // 76/50 = 1
    remaining_amount = remaining_amount % 50; // 76 % 50 = 26

    nt20 = remaining_amount / 20; // 26/20 = 1
    remaining_amount = remaining_amount % 20; // 26 % 20 = 6

    nt10 = remaining_amount / 10; // 6/10 = 0
    remaining_amount = remaining_amount % 10; // 6 % 10 = 6

    nt5 = remaining_amount / 5; // 6/5 = 1
    remaining_amount = remaining_amount % 5; // 6 % 5 = 1

    nt2 = remaining_amount / 2; // 1/2 = 0
    remaining_amount = remaining_amount % 2; // 1 % 2 = 1

    nt1 = remaining_amount / 1; // 1/1 = 1
    remaining_amount = remaining_amount % 1; // 1 % 1 = 0

    printf("\nTotal number of notes = \n");
    printf("500 = %d\n", nt500);
    printf("100 = %d\n", nt100);
    printf("50 = %d\n", nt50);
    printf("20 = %d\n", nt20);
    printf("10 = %d\n", nt10);
    printf("5 = %d\n", nt5);
    printf("2 = %d\n", nt2);
    printf("1 = %d\n", nt1);

    return 0;
}
