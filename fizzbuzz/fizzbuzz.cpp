#include <iostream>
#include <type_traits>
#include <optional> 

template<typename T>
void fizzbuzz(T n) {
    (n <= 0) ? return
    : (n % 15 == 0) ? (std::cout << "FizzBuzz\n")
    : n % 5 == 0 ? (std::cout << "Buzz\n")
    : n % 3 == 0 ? (std::cout << "Fizz\n") : (std::cout << n << '\n');
  fizzbuzz(n - 1); 
} 

int main() {
    int i = 0;
    std::cout << Enter a positive integer: ";
    std:cin >> i;
    fizzbuzz(i);  