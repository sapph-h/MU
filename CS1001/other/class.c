#include <stdio.h>

//1: initializing variables
/*
int main()
{
    printf("hilol\n");
    char c = 'x';
    int a = 5;
    int b = a+4;
    float d, e, f;
    char *s;
    s = "hi lol";
    d = 1;
    e = 2.8;
    f = d + e;
    printf("%d \n%f \n%c \n%s", b, f, c, s);
    return 0;
}
*/

//2: name and rollno
/*
int main()
{
    printf("\n");
    char *n;
    int r;
    n = "Melvin";
    r = 98;
    printf("Name: %s \nRoll No.: %d", n, r);
    return 0;
}
*/

//3: celsius to fahrenheit
/*
int main()
{
    printf("Enter temperature in Celsius: ");
    float x;
    scanf("%f", &x);
    float f = (x * 1.8) + 32;
    printf("Temperature in Fahrenheit: %f", f);
    return 0;
}
*/

//4: input number
/*
int main()
{
    printf("Enter numbor: ");
    int n; 
    scanf("%d", &n);
    printf("The numbor youve entered is %d", n);
    return 0;
}
*/

/*
int main()
{
    int a = 13 % 5;
    printf("%d", a);
    return 0;
}
*/

//17/09/26
/*
int main()
{
    int a,b,c;
    bool flag;

    a=2;b=5;c=0;
    if(a<b)
    {
        b=0;
        a=a+b;
    }
    else
    {
        a=a-b;
        c=15;
    }
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("c: %d\n",c);
}
*/

int main()
{
    int a,b,c;
    bool flag;

    a=2;b=5;c=-1;
    while(a<b)
    {
        a=a+2;
        c=c+1;
        printf("in the while loop\n:");
    }
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("c: %d\n",c);
    return 0;
}