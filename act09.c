#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* w3resource basic declarations and expressions 034
    //it will run in two options
    int nfirst, nlast, sum=0;
    printf("input first number of pair: ");
    scanf("%d",&nfirst);
    printf("input last number of pair: ");
    scanf("%d",&nlast);
    if(nfirst > nlast)
    {
        for(int i=nlast; i<nfirst; i++)
        {
            if(i%2==1)
            {
                printf("%d \n",i);
                sum+=i;
            }
        }
    }
    else if(nfirst < nlast)
    {
        for(int i=nfirst; i<nlast; i++)
        {
            if(i%2==1)
            {
                printf("%d \n",i);
                sum+=i;
            }
        }
    }
    printf("sum= %d",sum);
    */

    /* w3resource basic declarations and expressions 035
    int nfirst, nlast, sum=0;
    printf("input first number of pair: ");
    scanf("%d",&nfirst);
    printf("input last number of pair: ");
    scanf("%d",&nlast);
    if(nfirst > nlast)
    {
        printf("The pair is in descending order!");
    }
    else if(nfirst < nlast)
    {
       printf("The pair is in asceding order!");
    }
    */
    /* w3resource basic declarations and expressions 036
    int pass=1234;
    int uspass;
    ask:
    printf("input pass");
    scanf("%d",&uspass);
    if(uspass==pass)
    {
        printf("correct password");
    }
    else
    {
        goto ask;
    }
    */

    /* w3resource basic declarations and expressions 037
    int x,y,qx,qy;
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    if(x>0)
        qx=1;
    else if(x<0)
        qx=0;
    if(y>0)
        qy=1;
    else if(y<0)
        qy=0;
    if(qx==1 && qy==1)
        printf("Quadrant-I(+,+)");
    else if(qx==1 && qy==0)
        printf("Quadrant-II(+,-)");
    else if(qx==0 && qy==1)
        printf("Quadrant-III(-,+)");
    else if(qx==0 && qy==0)
        printf("Quadrant-III(-,-)");
    */

    return 0;
}
