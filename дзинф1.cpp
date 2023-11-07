#include <iostream>
#include <vector>

bool hasTwoDigitDivisors(int number) {
    int count = 0;
    for (int i = 10; i < 100; i++) {
        if (number % i == 0) {
            count++;
        }
    }
    return count == 35;
}

int main() {
    int start = 333555;
    int end = 777999;

    for (int number = start; number <= end; number++) {
        if (hasTwoDigitDivisors(number)) {
            std::vector<int> divisors;
            for (int i = 10; i < 100; i++) {
                if (number % i == 0) {
                    divisors.push_back(i);
                }
            }
            std::cout << number << ": " << divisors.front() << " " << divisors.back() << std::endl;
        }
    }

    return 0;
}
