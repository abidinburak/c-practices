#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* w3resource basic declarations and expressions 56
    int n;
    printf("input value: ");
    scanf("%d",&n);
    printf("int value : %d\n",n);
    printf("shifted value : %d",n<<2);
    */

    /* w3resource basic declarations and expressions 57
    int numb,x,r;
    printf("Input a number: ");
    scanf("%d",&numb);
    printf("The original number = %d\n",numb);
    while(numb>=1)
    {
        x=numb%10;
        r=r*10+x;
        numb=numb/10;
    }
    printf("The reverse of the number = %d",r);
    */
    /* w3resource basic declarations and expressions 58
    float arr[4];
    float sm,bg,dif;
    for(int i=0; i<4; i++)
    {
        scanf("%f",&arr[i]);
    }
    sm=arr[0];
    bg=arr[0];
    for(int i=0; i<4; i++)
    {
        if(sm>arr[i])
            sm=arr[i];

        if(bg<arr[i])
            bg=arr[i];
    }
    printf("Difference = %.4f",bg-sm);
    */

    /* w3resource basic declarations and expressions 59
    I couldnt understand */

    /* w3resource basic declarations and expressions 60
    enum days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

    printf("Sun = %d", Sunday);
    printf("\nMon = %d", Monday);
    printf("\nTue = %d", Tuesday);
    printf("\nWed = %d", Wednesday);
    printf("\nThu = %d", Thursday);
    printf("\nFri = %d", Friday);
    printf("\nSat = %d", Saturday);

    return 0;
}
