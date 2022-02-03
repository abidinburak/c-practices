#include <stdio.h>
#include <stdlib.h>

int main()
{
     /* w3resource basic declarations and expressions 007
    int a = 125, b= 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'A';
    unsigned long ux = 2541567890;
    printf("a + c = %d \n", a + c);
    printf("x + c = %f \n",x + c);
    printf("dx + x = %f \n", dx + x);
    printf("(int) dx + ax = %ld \n", (int)dx + ax);
    printf("a + x = %f\n", a + x );
    printf("s + b = %d \n", s + b);
    printf("ax + b = %ld \n", ax + c); //%ld is for long integers
    printf("s + c = %hd \n", s + c); //%hd is for short integers
    printf("ax + c = %ld \n", ax + c);
    printf("ax + ux = %lu \n", ax + ux);
    */

    /* w3resource basic declarations and expressions 008
    int days = 1329;
    const int yearDays = 365;
    int years = days/yearDays;
    int weeks = days % yearDays / 7;
    printf("years : %d\n", years);
    printf("weeks : %d\n", weeks);
    printf("days  : %d\n", days - years * yearDays - weeks * 7 );
    */
    /* w3resource basic declarations and expressions 009
    int s1, s2, sum;
    printf("num1 : ");
    scanf("%d",&s1);
    printf("num2 : ");
    scanf("%d",&s2);
    sum = s1 + s2;
    printf("sum of two integers : %d", sum);
    */

    /* w3resource basic declarations and expressions 010
    int s1, s2, mul;
    printf("num1 : ");
    scanf("%d",&s1);
    printf("num2 : ");
    scanf("%d",&s2);
    mul = s1 * s2;
    printf("multiply of two integers : %d", mul);
    */

    /* w3resource basic declarations and expressions 011
    float item1Weight, item2Weight, item1count, item2count;
    float avarage;
    printf("enter item1 weight ");
    scanf("%f",&item1Weight);
    printf("enter item1 count ");
    scanf("%f",&item1count);
    printf("enter item2 weight ");
    scanf("%f",&item2Weight);
    printf("enter item2 count ");
    scanf("%f",&item2count);
    avarage= (item1count * item1Weight + item2count * item2Weight)/(item1count + item2count);
    printf("avarage: %f ",avarage);
    */

    /* w3resource basic declarations and expressions 012
    char id[10];
    float workingHour, salaryAmount, salary;
    printf("what's employees id: ");
    scanf("%s", &id);
    printf("input the working hours: ");
    scanf("%f", &workingHour);
    printf("input salary a mount / hours: ");
    scanf("%f", &salaryAmount);
    salary = workingHour * salaryAmount;
    printf("Employees ID: %s \n", id);
    printf("salary amount = $ %.2f", salary);
    */



    return 0;
}
