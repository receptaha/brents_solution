#include "../headers/prime_functions.h"

unsigned int is_prime_number(unsigned int number) {
    unsigned int divisor = 2, counter = 0;
    while (number != 1) {
        if (number % divisor == 0) {
            number /= divisor;
            counter++;
        }else {
            divisor++;
        }
        if (counter > 1) return 0;
    }
    return 1;
}

unsigned long long first_prime_number_after(unsigned long long number) {
    number++;
    while (!is_prime_number(number)) number++;
    return number;
}
