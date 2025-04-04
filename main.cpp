#include <iostream>
using namespace std; // tells console that numbers are entered into the console
// references: StackOverflow & Quora
/*  Had problem where despite the git being connected to the project, it was still being saved to file and not being pushed and commited for the other two problems. 
So I had to enter everything into my first successful commit-push and organize it

//problem 1
// Function that checks if number is power using loops
bool isPowerOfTwoWithLoops(int number) {
   while (number % 2 ==0){
       number = number/2;
   } if (number ==1) {
   return true;
   }else {
   return false;
   }
}
// Function that checks if number is power without loops
bool isPowerOfTwoWithoutLoops(int number){
   if (number <= 0) // negative numbers & 0 cannot be powers of two
       return false;
   return (number & (number-1)) ==0;
}
// Test function to check the correctness of the power-of-two functions
void test(int number) {
   // bool variables take in true or false based on the output from the two loop methods
   bool expectedOutput = isPowerOfTwoWithoutLoops(number);
   bool actualOutput = isPowerOfTwoWithLoops(number);
   if (actualOutput &&  expectedOutput) {  // returns PASS and FAIL statement if both methods concludes if number is power or not
       std::cout << "PASS" << std::endl;
   } else {
       std::cout << "FAIL" << std::endl;
   }
}
// Problem two: Is prime
bool isPrime(int number ) {
    if (number <= 1){
        return false; // number is divisible by a number other than one and itself
    }
    for (int i =2; i<number; i++ ) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
// Problem 3

int greatestCommonDenomin(int numerator, int denominator) {
while (denominator != 0) {
    int temp = denominator;
    denominator = denominator % numerator;
    numerator = temp;
    }
    return numerator;
}

void reduceFraction(int& numerator, int& denominator) {
    int gcd = greatestCommonDenomin(numerator, denominator);
    numerator = numerator / gcd;
    denominator = denominator / gcd;
}

bool testToReduceFraction(int numerator, int denominator) {
    reduceFraction(numerator, denominator);
    return(numerator == 1 && denominator==1);
}

*/
    
int main() {
   
    // this is test for problem 1 to  determine if number is power of two
    if (isPowerOfTwoWithLoops(num) && isPowerOfTwoWithoutLoops(num)) {
       cout<<num<< " is a power of two "<<endl;
   }else {
       cout<<num<< " is not a power of two "<<endl;
   }
   test(num);
    
    return 0;

   // Main test for problem 1
   int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    // loop calls the isPrime function to confirm if the number is prime or not.
    if (isPrime(number)) {
        std::cout << " PASS " << std::endl;
    } else {
        std::cout << " FAIL " << std::endl;
    }

   /// this is test for problem 3 to determine if fraction is reduced
       // test case 1
    if (testToReduceFraction(10,10)) {
        std::cout<< "PASS" << std::endl;
    } else {
        std::cout<< "FAIL" << std::endl;
    }
    //Test Case 2
    if (testToReduceFraction(4, 3)) {
        std::cout << "PASS" << std::endl;
    } else {
        std::cout << "FAIL" << std::endl;
    }
    return 0;

   
}
