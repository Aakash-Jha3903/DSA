#include <stdio.h>
// Program in C to print recursive chart for Tower of Hanoi problem.

void TOH(int, char, char, char);
void main()
{
    int n;
    printf("\nEnter number of disks: ");
    scanf("%d", &n);
    TOH(n, 'A', 'B', 'C');
}
void TOH(int P, char Q, char R, char S)
{
    if (P > 0)
    {
        TOH(P - 1, Q, S, R);
        printf("\n %c to %c", Q, S);
        TOH(P - 1, R, Q, S);
    }
}