#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* w3resource basic declarations and expressions 020
    //i didnt understand what's my problem in these codes.
    //(sqrt(b2 - 4ac) -b)/2a
    int a,b,c,res;
    printf("input an a value ");
    scanf("%d",&a);
    printf("input an b value ");
    scanf("%d",&b);
    printf("input an c value ");
    scanf("%d",&c);

    res = b*b - (4*a*c);
    if(res>0 && a!=0)
    {
        double x;
        res = sqrt(res);
        x = (-b + res)/2*a;
    }
    printf("Result = %f",res);
    */

    /* w3resource basic declarations and expressions 021
    int num;
    printf("input your int value: ");
    scanf("%d",&num);
    if(num<0 && num>80)
        printf("error message");
    else if(num >=0 && num <= 20)
    {
        printf("Range [0,20]");
    }
    else if(num >=21 && num <= 40)
    {
        printf("Range [21,40]");
    }
    else if(num >=41 && num <= 60)
    {
        printf("Range [41,60]");
    }
    else
    {
        printf("Range [61,80]");
    }
    */

    /* w3resource basic declarations and expressions 022
    int n1,n2,n3,n4,n5,sum=0;
    printf("input n1: ");
    scanf("%d",&n1);
    printf("input n2: ");
    scanf("%d",&n2);
    printf("input n3: ");
    scanf("%d",&n3);
    printf("input n4: ");
    scanf("%d",&n4);
    printf("input n5: ");
    scanf("%d",&n5);
    if(n1%2==1)
        sum+=n1;
    if(n2%2==1)
        sum+=n2;
    if(n3%2==1)
        sum+=n3;
    if(n4%2==1)
        sum+=n4;
    if(n5%2==1)
        sum+=n5;
    printf("sum of all odd values: %d",sum);
    */
    return 0;
}
