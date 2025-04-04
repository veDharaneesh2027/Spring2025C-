
#include <iostream>
using namespace std; // tells compiler that symbols (numbers) are entered into it

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
    bool expectedOutput = isPowerOfTwoWithoutLoops(number);
    bool actualOutput = isPowerOfTwoWithLoops(number);

    if (actualOutput &&  expectedOutput) {  // returns PASS and FAIL statement if both methods concludes if number is power or not
        std::cout << "PASS" << std::endl;
    } else {
        std::cout << "FAIL" << std::endl;
    }
}


// Main function where the user can input a number
int main() {
    int num;
    std::cout << "Enter a number: "; // asks user to enter a number
    std::cin >> num; // takes number from the user using both methods
    if (isPowerOfTwoWithLoops(num) && isPowerOfTwoWithoutLoops(num)) {
        cout<<num<< " is a power of two "<<endl;
    }else {
        cout<<num<< " is not a power of two "<<endl;
    }
    test(num); // runs test function to check if it works when the user enters a number into console
    return 0;
}
