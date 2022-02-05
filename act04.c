#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*w3resource basic declarations and expressions 017
    int inputSeconds;
    int h,m,s;
    printf("input seconds: ");
    scanf("%d",&inputSeconds);
    h=inputSeconds/3600;
    m=(inputSeconds-h*3600)/60;
    s=((inputSeconds-h*3600-60*m))%60;
    printf("H:M:S - %d:%d:%d",h,m,s);
    */

    /*w3resource basic declarations and expressions 018
    int inputDays;
    int y,m,d;
    printf("input days: ");
    scanf("%d",&inputDays);
    y=inputDays/365;
    m=inputDays%365/30;
    d=(inputDays%365-m*30);
    printf("%d Years\n%d Months\n%d Days",y,m,d);
    */

    /*w3resource basic declarations and expressions 019
    int p,q,r,s; //q,r,s must be positive and p must be negative
    printf("input p: ");
    scanf("%d",&p);
    printf("input q: ");
    scanf("%d",&q);
    printf("input r: ");
    scanf("%d",&r);
    printf("input s: ");
    scanf("%d",&s);

    if ((q>r && s>p) && ((p<0 && q>0) && (r>0 && s>0)))
    {
        if(r+s > p+q)
            printf("Correct Values");

        else
            printf("Wrong Values");
    }
    else
        printf("Wrong Values");

    */

    return 0;
}
