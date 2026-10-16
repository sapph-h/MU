#include <stdio.h>
int main()
{
    int a, b, c;
    float d;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%f", &d);
//i
    int i = 5*a - b + 2;
    printf("\n5a - b + 2 = %d", i);
//ii
    if ((a<b)||(b==c))
    {
        int ii = a + b;
        printf("\na + b = %d", ii);
    }
    else
    {
        int ii = a - b;
        printf("\na - b = %d", ii);
    }
//iii
    if (a%2==0)
    {
        printf("\nc = %d", c);
    }
    else
    {
        printf("\nb = %d", b);
    }
//iv
    printf("\nd = %f", d);
//v
    printf("\nMahindra University");
}