/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/


#include <stdio.h>

 main()
  {
    double principal, rate, amount,interest;
    int time;
    printf("Enter the amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate : ");
    scanf("%lf", &rate);
    printf("Enter the number of years: ");
    scanf("%d", &time);
    rate = rate / 100.0;
    amount = principal * pow(1 + rate, time);
    interest = amount - principal;
    printf("\n\n\t Amount after %d years: %.2f", time, amount);
    printf("\n\n\t Interest after %d years: %.2f", time, interest);


}

