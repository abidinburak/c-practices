#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* w3resource basic declarations and expressions 64
    int a,b,max,min,sum,cnt;
    max=0;
    min=0;
    sum=0;
    cnt=0;
    printf("Input next positive integer: ");
    scanf("%d",&a);
    if (a <= 0)
    {
      printf("No positive number entered\n");
      return 0;
    }
    max=a;
    min=a;
        do
        {
            printf("Input next positive integer: ");
            scanf("%d",&a);
            cnt++;
            sum+=a;
            if(a<min && 0<a)
                min=a;

            if(max<a && 0<a)
                max=a;
            b=a;
        }
        while(0<a);
    cnt--;
    sum-=a;
    printf("Maximum value entered is %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Average value is %f", (float)sum / (float)cnt);

*/
    /* w3resource basic declarations and expressions 65
    int i, j, flag, ip = 0;
    printf("The prime numbers between 1 and 199 are:\n");
    for (i = 2; i < 199; i++)
    {
      flag = 1;
      for (j = 2; j <= i / 2 && flag == 1; j++)
      {
        if (i % j == 0) {
          flag = 0;
        }
      }
      if (flag == 1)
      {
        printf("%5d ", i);
        ip++;
        if (ip % 10 == 0)
        {
          printf("\n");
        }
      }
    }
    printf("\n");
    */
    return 0;
}
