//Learn to Comment

#include <iostream>
using namespace std;

// Function definition
void comment(int a, int b, int c) {
    cout << a << endl;
    // Commented out line
    // cout << b << endl;
    cout << c << endl;
}

int main() {
    int x = 5;
    int y = 10;
    int z = 15;

    // Calling the comment function with x, y, and z
    comment(x, y, z);

    return 0;
}

/*
We write only the below code in the editor of GFGS

void comment(int a, int b, int c) {
    cout << a << endl;
    // Commented out line
    // cout << b << endl;
    cout << c << endl;
}

*/