//1
/*
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a numbor: ");
    scanf("%d", &a);
    printf("\nenter another numbor: ");
    scanf("%d", &b);
    int c = a + b;
    printf("\nsum of numbors: %d", c);
    return 0;
}
*/

//2
/*
#include <stdio.h>
int main()
{
    float a, b;
    printf("enter a riyal numbor: ");
    scanf("%f", &a);
    printf("\nenter another riyal numbor: ");
    scanf("%f", &b);
    float c = (4.00 * a * a) + b;
    printf("\n4.00 * %0.2lf * %0.2lf + %0.2lf = %0.2lf", a, a, b, c);
    return 0;
}
*/

//3
/*
#include <stdio.h>
int main()
{
    float a, b;
    printf("enter a riyal numbor: ");
    scanf("%f", &a);
    printf("\nenter another riyal numbor: ");
    scanf("%f", &b);
    float c = a/b;
    printf("\n%0.2lf / %0.2lf = %0.2lf", a, b, c);
}
*/

//4
/*
#include <stdio.h>
int main()
{
    float a, b;
    printf("enter a riyal numbor: ");
    scanf("%f", &a);
    printf("\nenter another riyal numbor: ");
    scanf("%f", &b);
    printf("\nOutput: ");
    ( a < b ) ? printf("%0.2lf", a + b) : ( a == b ) ? printf("equal") : printf("%0.2lf", a * b);
}
*/

//5
#include <stdio.h>
int main()
{
    char *n[3];
    int r[3];

    for (int i=0 ; i<3 ; i++)
    {
        printf("\nname: ");
        scanf("%c", &n[i]);
        printf("\n[debug 1]");
        printf("\nrollno: ");
        scanf("%d", &r[i]);
        printf("\n[debug 2]");
    }

    for (int i=0 ; i<3 ; i++)
    {
        printf("%c", n[i]);
        printf("%d", r[i]);
    }
}
