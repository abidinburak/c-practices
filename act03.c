#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*w3resource basic declarations and expressions 013
    //these are my codes.
    int n1,n2,n3;
    printf("Please enter num1: ");
    scanf("%d",&n1);
    printf("Please enter num2: ");
    scanf("%d",&n2);
    printf("Please enter num3: ");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3)
        printf("Maximum value of three int: %d",n1);
    else if(n2>n1 && n2>n3)
        printf("Maximum value of three int: %d",n2);
    else if(n3>n1 && n3>n2)
        printf("Maximum value of three int: %d",n3);
    else
        printf("there are no max in the inputs.");
    */
    /*
    w3resource.com prefers this code but i didnt understand.
    int x, y, z, result, max;
    printf("\nInput the first integer: ");
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);
    printf("\nInput the third integer: ");
    scanf("%d", &z);
    result=(x+y+abs(x-y))/2;
    max=(result+z+abs(result-z))/2;
    printf("\nMaximum value of three integers: %d", max);
	printf("\n");

    /*w3resource basic declarations and expressions 014
    int dis;
    float fuel,avarage;
    printf("Input total distance in km: ");
    scanf("%d", &dis);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);
    avarage=dis/fuel;
    printf("Average consumption (km/lt): %.3f",avarage);
    */


    /*w3resource basic declarations and expressions 015

    //i used math.h for sqrt
    int x1,y1,x2,y2,x,y,dis;
    printf("please input x1: ");
    scanf("%d",&x1);
    printf("please input y1: ");
    scanf("%d",&y1);
    printf("please input x2: ");
    scanf("%d",&x2);
    printf("please input y2: ");
    scanf("%d",&y2);
    x=abs(x1-x2);
    y=abs(y1-y2);
    dis=x*x+y*y;
    printf("Distance between the said points: %.4f ",sqrt(dis));
    */

    /*w3resource basic declarations and expressions 016
    int amount, ahundred, fifty, twenty, ten, five, two, one;
    printf("enter the amount: ");
    scanf("%d",&amount);
    ahundred=amount/100;
    fifty=(amount%100/50);
    //printf("%d",fifty);
    twenty=(amount%100-fifty*50)/20;
    ten=(amount%100-fifty*50-twenty*20)/10;
    five=(amount%100-fifty*50-twenty*20-ten*10)/5;
    two=(amount%100-fifty*50-twenty*20-ten*10-five*5)/2;
    one=(amount%100-fifty*50-twenty*20-ten*10-five*5-two*2)/1;
    printf("%d notes of 100.00 \n", ahundred);
    printf("%d notes of 50.00 \n", fifty);
    printf("%d notes of 20.00 \n", twenty);
    printf("%d notes of 10.00 \n", ten);
    printf("%d notes of 5.00 \n", five);
    printf("%d notes of 2.00 \n", two);
    printf("%d notes of 1.00 \n", one);
    */

    return 0;
}
