//function to print all the prime numbers from 1 to n
#include <stdio.h>
void primeNumbers(int limit)
{
    for(int i = 2 ; i<=limit ; i++)
    {
        int count = 0;
        for(int j = 2 ; j<i ; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==0)
            printf("%d ", i);
    }
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    primeNumbers(n);
    return 0;
}
