#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* w3resource basic declarations and expressions 030
    int i;
    for (i=1; i<5; i++)
    {
        if(i%2==0)
        {
            printf("%d^%d=%d\n",i,i,i*i);
        }
    }
    */

    /* w3resource basic declarations and expressions 031
    int s;
    printf("input the integer: ");
    scanf("%d",&s);

    if(0<s && s%2==0)
        printf("Positive even");
    else if(0<s && s%2==1)
        printf("Positive odd");
    else if(s<0 && s%2==0)
        printf("Negative even");
    else if(s<0 && s%2==1)
        printf("Negative odd");
    else
        printf("even");
    */

    /* w3resource basic declarations and expressions 032
    int s;
    printf("input the integer: ");
    scanf("%d",&s);
    for(int i=3; i<100; i+=s)
        printf("%d\n",i);
    */
    /* w3resource basic declarations and expressions 033
    int s[5];
    int no,i,big=0;
    for(int i=0; i<5; i++)
    {
    //printf("input the integer: ");
    scanf("%d",&s[i]);
    }

    for(i=0; i<5; i++)
    {
    if(s[i]>big)
        {
            big=s[i];
            no=i+1;
        }
    }
    printf("Highest value: %d\n",big);
    printf("Position: %d\n",no);
    */

    return 0;
}
