//1. Factorial, recursive
/*
#include <stdio.h>

int factorial(int n) 
{
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    printf("Enter an integer: ");
    int n;
    scanf("%d", &n);
    printf("Factorial = %d", factorial(n));
    return 0;
}
*/

//2. Sum of int to n, recursive
/*
#include <stdio.h>

int sum(int n) 
{
    if (n <= 0)
        return 0;

    return n + sum(n - 1);
}

int main() {
    printf("Enter an integer: ");
    int n;
    scanf("%d", &n);
    printf("Sum = %d", sum(n));
    return 0;
}
*/

//3. nth fibonacci number, non-recursive
// 0   1   1   2   3   5   8   13   21
/*
#include <stdio.h>
int main()
{
    printf("Enter an integer: ");
    int n;
    scanf("%d", &n);
    if (n==0)
    {
        printf("%dth number of fibonacci series: 0",n);
    }
    else if (n==1)
    {
        printf("%dst number of fibonacci series: 1",n);
    }
    int a=0, b=1, f;
    for (int i=2;i<=n;i++)
    {
        f=a+b;
        a=b;
        b=f;
        printf("Debug: %d\n", f);
    }
    printf("number %d of fibonacci series: %d", n, f);
}
*/

//4. nth fibonacci number, recursive
/*
#include <stdio.h>

int fibonacci(int n) 
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Fibonacci number = %d\n", fibonacci(n));
    return 0;
}
*/

//5. add 2 to every alt number in an integer array starting from the first element
/*
#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i += 2) 
    {
        a[i] += 2;
    }
    printf("Required array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
}
*/
