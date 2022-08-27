#include <iostream>
#include <vector>

#include "prime-fac.cpp"

int main(int argc, char* const argv[]) {
    std::vector<int> vec;
    int num;
    bool done = false;

    do {
        std::cout << "Enter number greater than 1: ";
        std::cin >> num;

        if (num > 1) {
            findPrimes(vec, num);
            print(vec);
            done = true;
        }

    } while (!done);
}