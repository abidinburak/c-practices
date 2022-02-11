#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* w3resource basic declarations and expressions 038
    int x,y;
    printf("x: ");
    scanf("%d",&x);
    printf("x: ");
    scanf("%d",&y);
    if(x%y==0)
        printf("expected output: %.1f", (float)x/y);
    else
        printf("division not possible");
    */

    /* w3resource basic declarations and expressions 039
    int a,b,sum=0;
    printf("input the first integer: ");
    scanf("%d",&a);
    printf("input the first integer: ");
    scanf("%d",&b);
    for(a; a<=b; a++)
    {
        if(a%17!=0)
        sum+=a;
    }
    printf("%d",sum);
    */

    /* w3resource basic declarations and expressions 040
    int f,s;
    printf("input the first integer: ");
    scanf("%d",&f);
    printf("input the second integer: ");
    scanf("%d",&s);

    for(f; f<s; f++)
    {
        if(f%7==2 || f%7==3)
        {
            printf("%d\n",f);
        }
    }
    */
    /* w3resource basic declarations and expressions 041
    int i,n;
    printf("input number of lines: ");
    scanf("%d",&n);

    for(i=1; i<=n*3; i++)
    {
    printf("%d ",i);
    if(i%3==0)
        printf("\n");
    }
    */

    /* w3resource basic declarations and expressions 042
    int i,n;
    printf("input number of lines: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
    printf("%d %d %d \n",i,i*i,i*i*i);
    }
    */

    /* w3resource basic declarations and expressions 043
    //theye are fixed it with for in loops but i think we can write this type
    int l,n,j;
    printf("input number of lines: ");
    scanf("%d",&l);
    printf("Number of characters in a line: ");
    scanf("%d",&n);
    for(int i=1; i<=l*n; i++)
    {
        printf("%d ",i);
        if(i%n==0)
        printf("\n");

    }
    */
    /* w3resource basic declarations and expressions 044
    int marks;
    int sum=0;
    int cnt=0;
    float avarage=0;
    while(1)
    {
        printf("input mat marks: ");
        scanf("%d",&marks);
        if(0<marks)
        {
            cnt++;
            sum+=marks;
        }
        else
            break;
    }
    avarage=(float)sum/(float)cnt;
    printf("avarage marks ing math: %.2f",avarage);
    */

    return 0;
}
