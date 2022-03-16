#include <iostream>
#include <math.h>

int power( int base, int exponent) {
int total = base;
    for(int i =1 ; i< exponent ; i++ ) {
            total = total * base ;
    }
    return total;
}

int binary_to_number(int binary_digits[], int number_of_digits) {
    int total = 0;
    for (int i = 0 ; i< number_of_digits ; i++)  {
        total = total + (binary_digits[i] * power(2, i -1 ));
    } ;
 return total ;
}

