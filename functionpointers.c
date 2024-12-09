#include <stdio.h>

// Function prototypes
void greet();
void farewell();

// Define a function pointer type
typedef void (*FunctionPointer)();

int main() {
    // Create an array of function pointers
    FunctionPointer functions[2];
    
    // Assign functions to the array
    functions[0] = greet;
    functions[1] = farewell;

    // Call the functions using pointers
    for (int i = 0; i < 2; i++) {
        functions[i](); // Calls greet() and farewell()
    }

    return 0;
}

// Function definitions
void greet() {
    printf("Hello, World!\n");
}

void farewell() {
    printf("Goodbye, World!\n");
}
