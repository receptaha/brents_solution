#include <stdio.h>
#include "headers/hash_functions.h"
#include "headers/prime_functions.h"

int main()
{
    printf("is %d a prime number?\tAnswer is %d\n", 19237123, is_prime_number(19237123));
    printf("what is the next prime number for %d?\tAnswer is %d\n", 19237123, first_prime_number_after(19237123));
    return 0;
}