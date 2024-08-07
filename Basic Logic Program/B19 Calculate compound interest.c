//Calculate compound interest


#include <stdio.h>
 main()
  {
    double principal, rate, interest;
    int years, n;
    printf("Enter amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate : ");
    scanf("%lf", &rate);
    printf("Enter the number of years: ");
    scanf("%d", &years);
    printf("Enter the compounding frequency per year: ");
    scanf("%d", &n);
    interest = principal * pow(1 + rate/n, n * years);
    printf("The amount after %d years is: %.2f", years, interest);
}

