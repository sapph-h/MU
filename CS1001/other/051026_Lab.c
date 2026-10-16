#include <stdio.h>
//1
/*
int main() {
    int marks[10], i;

    printf("Enter 10 marks:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &marks[i]);

    printf("Marks are:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", marks[i]);

    return 0;
}
*/

//2

int isPrime(int n) {
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);

    return 0;
}

//3

int sum(int n) {
    int i, s = 0;

    for (i = 1; i <= n; i++)
        s += i;

    return s;
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum(n));

    return 0;
}

//4

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d\n", gcd(a, b));

    return 0;
}

//5

int isPrime(int n) {
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

void printPrimes(int a, int b) {
    int i;

    for (i = a; i <= b; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers: ");
    printPrimes(a, b);

    return 0;
}

//6

int arraySum(int arr[], int n) {
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int main() {
    int arr[5], i;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Sum = %d\n", arraySum(arr, 5));

    return 0;
}