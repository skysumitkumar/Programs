//write a recursive function to count all the prime numbers between numbers a and b(both inclusive)
// Error this program give wrong output
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main(void)
{
    int a,b;
    printf("Enter the ranged no: ");
    scanf("%d %d",&a,&b);
    printf("The prime no between %d and %d is: %d",a,b,prime(a,b));
    //printf());
}
int prime(int a,int b)
{
    int i;
    if(a==b)
        return 0;
    for(i=2;i<sqrt(a);i++)
    {
        if(a%i==0)
            printf(" ");
       else
        printf("%d",a);
    }
    ++a;
    return(prime(a,b));
}
/*
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n, int divisor) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    if (divisor * divisor > n) {
        return true;
    }
    return is_prime(n, divisor + 1);
}

int count_primes_between_10_and_15(int n) {
    if (n < 10) {
        return 0;
    }
    if (is_prime(n, 2)) {
        return 1 + count_primes_between_10_and_15(n - 1);
    } else {
        return count_primes_between_10_and_15(n - 1);
    }
}

int main() {
    int count = count_primes_between_10_and_15(15);
    printf("Number of prime numbers between 10 and 15 (inclusive): %d\n", count);
    return 0;
}
*/
