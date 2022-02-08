#include <stdio.h>
#include <stdlib.h>

int main()
{
     /* w3resource basic declarations and expressions 026
    for(int i=1; i<=50; i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
    */
    /* w3resource basic declarations and expressions 027
    int a;
    int cntp=0;
    int cntn=0;

    for(int i=0; i<5; i++)
    {
        printf("input the number: ");
        scanf("%d",&a);
        if(a<0)
        cntn++;
        else if(a>0)
        cntp++;
    }
    printf("number of positive numbers: %d\n", cntp);
    printf("number of negative numbers: %d\n", cntn);
    */

    /* w3resource basic declarations and expressions 028
    int a;
    int cntp=0;
    int cntpsum=0;

    for(int i=0; i<5; i++)
    {
        printf("input the  number: ");
        scanf("%d",&a);
        if(0<a)
        {
            cntp++;
            cntpsum+=a;
        }

    }
    printf("number of positive numbers: %d\n", cntp);
    printf("Average value of the said positive numbers: %.2f\n", (float)cntpsum/cntp);
    */

    /* w3resource basic declarations and expressions 029
    int a;
    int cntodd=0;
    int sum=0;

    for(int i=0; i<5; i++)
    {
        printf("input the number: ");
        scanf("%d",&a);
        if(a%2==1)
        {
            sum+=a;
        }
    }
    printf("number of positive numbers: %d\n", sum);
    */

    return 0;
}
