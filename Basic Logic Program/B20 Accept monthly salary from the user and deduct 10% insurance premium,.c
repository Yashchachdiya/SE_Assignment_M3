/*Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary
*/
#include <stdio.h>
main()

{
    double monthly_salary, insurance_premium, loan_installment, remaining_salary;
    printf("\n\t Enter the monthly salary: ");
    scanf("%lf", &monthly_salary);
    printf("\n---------------------------------------------------------------------\n");
    insurance_premium = monthly_salary * 0.10;
 loan_installment = monthly_salary * 0.10;
    remaining_salary = monthly_salary - insurance_premium - loan_installment;
    printf("\n\t Insurance Premium: %.2lf\n", insurance_premium);
    printf("\n\t Loan Installment: %.2lf\n", loan_installment);
    printf("\n\t Remaining Salary: %.2lf\n", remaining_salary);
}
