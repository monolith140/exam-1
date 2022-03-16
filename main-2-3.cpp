#include <iostream>
using namespace std ;
int main() {
extern  int sum_if_a_palindrome(int integers[], int length) ;
int binary_digits[4] = {1,3,3,1};
int number = 4;
int total = sum_if_a_palindrome(binary_digits, number) ;
std::cout << "your number is:" << total ; std::cout;



return 0 ;
}