#include <iostream>

void getInput(int &a, int &b);
void getCalc(int a, int b, int &sum, int &avg);
void getOutput(int sum, int avg);

int main() {
    int n1 = 0, n2 = 0;
    int sum = 0, avg = 0;

    getInput(n1, n2);
    getCalc(n1, n2, sum, avg);
    getOutput(sum, avg);

    return 0;
}

// INPUT
void getInput(int &a, int &b) {
    std::cin >> a >> b;
}

// CALCULATION
void getCalc(int a, int b, int &sum, int &avg) {
    sum = a + b;
    avg = sum / 2;
}

// OUTPUT
void getOutput(int sum, int avg) {
    std::cout << "Sum: " << sum << '\n';
    std::cout << "Average: " << avg << '\n';
}

// #feel free to use this i guess...