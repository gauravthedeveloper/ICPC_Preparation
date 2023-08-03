#include <stdio.h>
int main()
{

    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Enter the process of use:\n 1.For loop\n2.While loop\n3.Do-while loop\n");
    int way;
    scanf("%d", &way);
    switch (way)
    {
    case 1:
        if (n == 1)
        {
            printf("Fibonacci Series: %d \n", t1);
            return 0;
        }
        else if (n == 2)
            printf("Fibonacci Series: %d %d \n", t1, t2);
        else
        {

            printf("Fibonacci Series: %d %d ", t1, t2);
            // printf("Fibonacci Series: ");
            for (i = 3; i <= n; ++i)
            {
                printf("%d ", nextTerm);
                t1 = t2;
                t2 = nextTerm;
                nextTerm = t1 + t2;
            }
        }
        break;
    case 2:
        if (n == 1)
        {
            printf("Fibonacci Series: %d \n", t1);
            return 0;
        }
        else if (n == 2)
            printf("Fibonacci Series: %d %d \n", t1, t2);
        else
        {

            printf("Fibonacci Series: %d %d ", t1, t2);
            // printf("Fibonacci Series: ");
            i = 3;
            while (i <= n)
            {
                printf("%d ", nextTerm);
                t1 = t2;
                t2 = nextTerm;
                nextTerm = t1 + t2;
                i++;
            }
        }
        break;
    case 3:
        if (n == 1)
        {
            printf("Fibonacci Series: %d \n", t1);
            return 0;
        }
        else if (n == 2)
            printf("Fibonacci Series: %d %d \n", t1, t2);
        else
        {

            printf("Fibonacci Series: %d %d ", t1, t2);
            // printf("Fibonacci Series: ");
            i = 3;
            do
            {
                printf("%d ", nextTerm);
                t1 = t2;
                t2 = nextTerm;
                nextTerm = t1 + t2;
                i++;
            } while (i <= n);
        }

        break;

    default:
        break;
    }

    return 0;
}