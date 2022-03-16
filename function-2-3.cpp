#include <iostream>
int sum_elements(int integers[], int length) {
   int total = 0 ;
if (length > 0) { 
    for( int i = 0; i< length ; i++) {
        total = total + integers[i] ;
    }

} else {
    total = -1 ;
}

 return total ;

}
 bool is_a_palindrome(int integers[], int length) {
    bool awnser = true ;
if (length > 0) { 
    for (int i = 0; i < length; i++) {
        if (integers[i] != integers[length - i -1]) {
            awnser = false ;
        }
    }

} else {
    bool awnser = false ;
}
 return awnser ;
}

int sum_if_a_palindrome(int integers[], int length) {
    int total = 0 ;

if (length > 0) {
    if (is_a_palindrome(integers, length) == true) {
        total = sum_if_a_palindrome(integers,length) ;
    }

} else {
    total = -1 ;
}
    return total ;
}