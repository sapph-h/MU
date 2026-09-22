//1
/*
#include <stdio.h>
int main()
{
    int n;
    int i = 2;
    bool f=true;
    printf("enter integer > 1: ");
    scanf("%d", &n);
    while(f)
    {
        if (n%i==0)
        {
            f=false;
        }
        else
        {
            i+=1;
        }
    }
    printf("smallest factor is: %d", i);
}
*/

//2
/*
#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    printf("enter integer: ");
    scanf("%d", &n);
    int s = n;
    while(i < n)
    {
        s = s + i;
        i += 1;
    }
    printf("Sum of numbers from 1 to %d: %d", n, s);
}
*/

//3
/*
#include <stdio.h>
int main()
{
    int n;
    int i;
    int s = 0;
    printf("enter integer: ");
    scanf("%d", &n);
    for (i=0;i<=n;i++)
    {
        s+=i;
    }
    printf("Sum of numbers from 1 to %d: %d", n, s);
}
*/

//4
/*
#include <stdio.h>
int main()
{
    int n, j = 2;
    int i;
    printf("enter integer: ");
    scanf("%d", &n);
    printf("First %d even numbers, starting from 2: ", n);
    for (i=0;i<n;i++)
    {
        printf("\n%d", j);
        j += 2;
    }
}
*/

