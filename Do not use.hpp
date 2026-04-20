#include <iostream>

void showMenu() {
    std::cout << "\n===== CALCULATOR MENU =====\n";
    std::cout << "1. Add\n";
    std::cout << "2. Subtract\n";
    std::cout << "3. Multiply\n";
    std::cout << "4. Divide\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose an option: ";
}

void getInput(int &a, int &b) {
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
}

void add(int a, int b) {
    std::cout << "Result: " << (a + b) << "\n";
}

void subtract(int a, int b) {
    std::cout << "Result: " << (a - b) << "\n";
}

void multiply(int a, int b) {
    std::cout << "Result: " << (a * b) << "\n";
}

void divide(int a, int b) {
    if (b == 0) {
        std::cout << "Error: Cannot divide by zero\n";
    } else {
        std::cout << "Result: " << (a / b) << "\n";
    }
}

int main() {
    int choice;
    int n1, n2;

    do {
        showMenu();
        std::cin >> choice;

        if (choice >= 1 && choice <= 4) {
            getInput(n1, n2);
        }

        switch (choice) {
            case 1:
                add(n1, n2);
                break;
            case 2:
                subtract(n1, n2);
                break;
            case 3:
                multiply(n1, n2);
                break;
            case 4:
                divide(n1, n2);
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid option. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

// AI assisted Do Not Use