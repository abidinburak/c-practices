#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* w3resource basic declarations and expressions 61

    float x,set;

    printf("Input value of x: ");
    scanf("%f",&x);

    if(x!=0)
    {
        set=sin(1/x);
        printf("Value of sin(1/x) is %.4f",set);
    }
    else
        printf("You could not input 0 ");
    */
    /* w3resource basic declarations and expressions 62
    int x,y,sum=0;
    printf("input positive number less than 500: ");
    scanf("%d",&x);
    if(0<x || x<500)
    {
        y=x;
        while(0<x)
        {
        sum+=x%10;
        x/=10;
        }
    }
    printf("Sum of the digits of %d is %d",y,sum);
    */

    /* w3resource basic declarations and expressions 63
    int x,y,sum=0;
    printf("input positive number less than 100: ");
    scanf("%d",&x);
    if(0<x || x<100)
    {
    y=1;
        for(int i=1; y<=x; i++)
        {
            sum+= y*y*y*y;
            y+=i;
        }
        printf("Sum of the series is %d",sum);
    }
    else
    printf("input correct value");
    */
    return 0;
}
