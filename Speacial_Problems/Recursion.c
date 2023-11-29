#include <stdio.h>
#include <stdlib.h>
// Tail-recursive function for factorial calculation
int factorial(int n, int result)
{
    if (n == 0 || n == 1)
    {
        return result;
    }
    else
    {
        return factorial(n - 1, n * result);
    }
}

// Tail-recursive function for Fibonacci series
void fibonacci(int n, int a, int b)
{
    if (n == 0)
    {
        printf("%d", a);
        // return a;
    }
    else
    {
        printf("%d ", a);
        fibonacci(n - 1, b, a + b);
    }
}

// Tail-recursive function for GCD calculation
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int n, ch, result;
    do
    {
        printf("\n\n1 : Factorial \n2 : Fibonacci series \n3 : GCD \n4 : Exit ");
        printf("\nEnter your choise : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            // Factorial
            printf("Enter a non-negative integer for factorial: ");
            scanf("%d", &n);
            result = factorial(n, 1);
            printf("Factorial of %d is %d\n", n, result);
            break;

        case 2:
            // Fibonacci series
            printf("Enter the term number for Fibonacci series: ");
            scanf("%d", &n);
            printf("Fibonacci series: ");
            fibonacci(n, 0, 1);
            printf("\t");
            // result = fibonacci(n, 0, 1);
            // printf("Term %d of Fibonacci series is %d\n", n, result);
            break;

        case 3:
            // GCD
            {
                int a, b;
                printf("Enter two positive integers for GCD calculation: ");
                scanf("%d %d", &a, &b);
                result = gcd(a, b);
                printf("GCD of %d and %d is %d\n", a, b, result);
            }
            break;

        case 4:
            printf("Thank you \n");
            printf("Created by Aakash Jha ");
            printf("\n........................................................................................");
            exit(0);
            break;

        default:
            printf("Enter a valid number ! ");
        }
    } while (ch != 4);

    return 0;
}
