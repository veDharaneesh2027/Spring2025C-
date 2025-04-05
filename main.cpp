#include <iostream>
using namespace std; // tells console that numbers are entered into the console
// references: StackOverflow & Quora
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
int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    // loop calls the isPrime function to confirm if the number is prime or not.
    if (isPrime(number)) {
        std::cout << " PASS " << std::endl;
    } else {
        std::cout << " FAIL " << std::endl;
    }
    return 0;
}
