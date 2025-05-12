#include <iostream>

int add(int a, int b) { return (a + b); }

int sub(int a, int b) { return (a - b); }

int multi(int a, int b) { return (a * b); }

float divide(int a, int b) { 
    if (b == 0) {
        std::cerr << "Error: Division by zero is not allowed.\n";
        return 0; 
    }
    return static_cast<float>(a) / b; 
}

int main() {
    int a, b, op;

    while (true) {
        std::cout << "What operation do you need? 1-Add 2-Sub 3-Multiply 4-Divide 5-Exit:\n";
        std::cin >> op;

        if (op == 5) {
            std::cout << "Exiting the program.\n";
            break;
        }

        std::cout << "Enter number 1:\n";
        std::cin >> a;
        std::cout << "Enter number 2:\n";
        std::cin >> b;

        if (op == 1) std::cout << "\nResult: " << add(a, b) << "\n";
        else if (op == 2) std::cout << "\nResult: " << sub(a, b) << "\n";
        else if (op == 3) std::cout << "\nResult: " << multi(a, b) << "\n";
        else if (op == 4) std::cout << "Result: " << divide(a, b) << "\n"; // Updated function name
        else std::cout << "Invalid operation. Please try again.\n";
    }

    return 0;
}