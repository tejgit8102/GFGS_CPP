//Addition of two numbers

#include <iostream>
using namespace std;

class Solution {
public:
    // Method to add two integers
    int addition(int A, int B) {
        return A + B; // Return the sum of A and B
    }
};

int main() {
    Solution sol; // Create an object of the Solution class

    int a = 1; // Initialize variable a 
    int b = 2; // Initialize variable b

    //a and b can be 10 and 20 as well(as per the program)

    int result = sol.addition(a, b); // Call the addition method and store the result

    cout << "The sum of " << a << " and " << b << " is: " << result << endl; // Print the result

    return 0; // Return 0 to indicate successful execution
}


/*
We write only the below code in the editor of GFGS

class Solution {
public:
    // Method to add two integers
    int addition(int A, int B) {
        return A + B; // Return the sum of A and B
    }
};

*/