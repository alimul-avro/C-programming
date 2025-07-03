#include <stdio.h>
int main()
{
    int K = 10, S = 0;
    do
    {
        S = S + K;
        K += 10;
    } while (K <= 100);
    printf("summation =%d", S);
    return 0;
}