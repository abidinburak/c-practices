#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* w3resource basic declarations and expressions 049
    int v,i,n[7];
    printf("input the first number of the array: ");
    scanf("%d",&v);
    for(i=0; i<5; i++)
    {
        n[i]=v;
        v*=3;
    }
    for(i=0; i<5; i++)
    {
        printf("n[i] = %d\n",n[i]);
    }
    */

    /* w3resource basic declarations and expressions 050
    int arr[5];
    printf("input the 5 members of the array\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++)
    {
        if(arr[i]<5)
            printf("A[%d] = %.1f\n",i,(float)(arr[i]));
    }
    */


    /* w3resource basic declarations and expressions 051
    //I did not understand why they want to define 6 elements and give 5 elements into array.
    int arr[5],n,k;
    printf("input the 5 members of the array\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++)
    {
        k=arr[i];
        arr[i]=arr[5-i-1];
        arr[5-i-1]=k;
        if(i==5/2)
        break;

    }
    for(int i=0; i<5; i++)
    {
        printf("array_n[%d] = %d ",i,arr[i]);
    }
    */
    /* w3resource basic declarations and expressions 052
    int arr[6],n,k=0;
    printf("input the 5 members of the array\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    k=arr[0];
    for(int i=0; i<5; i++)
    {
        if(k>arr[i])
        {
            k=arr[i];
            n=i;
        }
    }
    printf("smallest value : %d\n",k);
    printf("Position of the element: %d",n);
    */

    /* w3resource basic declarations and expressions 053
    int p,r,t,total;
    printf("input money: ");
    scanf("%d",&p);
    printf("input rate: ");
    scanf("%d",&r);
    printf("input time: ");
    scanf("%d",&t);

    total=p*r*t/100;
    printf("total: %d",total);
    */

    /* w3resource basic declarations and expressions 054
    float inchto1cm = 0.3937;
    int cm;
    float inch;
    printf("input cm: ");
    scanf("%d",&cm);
    inch=(float)(cm) *(inchto1cm);
    printf("%.2f",inch);
    */

    /* w3resource basic declarations and expressions 055
    int x,y;
    printf("input x value ");
    scanf("%d",&x);
    printf("input y value ");
    scanf("%d",&y);
    printf("before swapping the value of x & y : %d & %d\n",x,y);
    x=x+y;
    y=abs(x-y);
    x=abs(x-y);
    printf("after swapping the value of x & y : %d & %d",x,y);
    */



    return 0;
}
