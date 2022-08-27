#include <iostream>
#include <vector>

bool isPrime(int num) {
    bool isPrime = true;
    for (int i = 2; i <= num/2; ++i) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

void findPrimes(std::vector<int>& vec, int num) {
    for (int i = 2; i <= num/2; ++i) {
        if (isPrime(i) && num % i == 0) {
            vec.push_back(i);
        }
    }
}

void print(std::vector<int>& vec) {
    if (vec.empty()) {
        std::cout << "No prime factors!";
    } else {
        std::cout << "Prime factors: ";
        for (auto const& n : vec) {
            std::cout << n << " ";
        }
    }
    std::cout << std::endl;
}