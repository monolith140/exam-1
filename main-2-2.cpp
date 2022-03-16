#include <iostream>
using namespace std ;
int main() {
extern int binary_to_number(int binary_digits[], int number_of_digits) ;
int binary_digits[4] = {1,0,0,1};
int number = 4;
 binary_to_number(binary_digits, number) ;
std::cout << binary_to_number(binary_digits, number) ; std::cout ;

return 0 ;
}