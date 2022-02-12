#include <stdio.h>
#include <stdlib.h>

int main() {

    /* w3resource basic declarations and expressions 045
	float n = 0;
	int i;
	for(i=1; i<=50; i++)
	{
		n+=(float)1/i;
    }
    printf("Value of S:%.2f\n", n);
    */

    /* w3resource basic declarations and expressions 046
	float s,n = 0;
	int i,k=1;
	for(i=1; i<=7; i+=2)
	{
		n+=(float)i/k;
		s+=n;
		k*=2;
    }
    printf("Value of S:%.2f\n", n);
    */
    /* w3resource basic declarations and expressions 047

    int v;
    printf("Input an integer: ");
    scanf("%d",&v);
    for(int i=1; i<=v/2; i++)
    {
        if(v%i==0)
            printf("%d\n",i);
    }
    printf("%d",v);
    */

    /* w3resource basic declarations and expressions 048
    int arrs[7];
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arrs[i]);
        if(arrs[i]<=0)
            arrs[i]=100;
    }
    for(int i=0; i<5; i++)
    {
        printf("n[%d] = %d\n",i,arrs[i]);
    }
    */


	return 0;
}
