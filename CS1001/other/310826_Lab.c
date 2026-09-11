//1
/*
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    (a%b==c) ? printf("\nyes") : printf("\nno");
}
*/

//2
/*
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    //(a<b) ? printf("true") : ((b<c) ? printf("\ntrue") : printf("\nfalse"));
    ((a<b)||(b<c)) ? printf("\ntrue") : printf("\nfalse");
}
*/

//3
/*
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    ((a>b)&&(b>c)) ? printf("\ntrue") : printf("\nfalse");
}
*/

//4
/*
#include <stdio.h>
int main()
{
    int a, b;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    printf("a = %b\n", a);
    printf("b = %b\n", b);

    printf("a & b = %b -> %d\n", a & b, a & b);
    printf("a | b = %b -> %d\n", a | b, a | b);
}
*/