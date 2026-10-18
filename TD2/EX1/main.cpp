
#include <iostream>
#include <vector>

#include "LinearSearch.h"
#include "JumpSearch.h"
#include "BinarySearch.h"

int main() {

    std::vector<int> numbers = { 2, 5, 8, 12, 16, 23, 38, 56, 72 };

    int target = 23;

    LinearSearch linear;
    JumpSearch jump;
    BinarySearch binary;

    // Linear Search
    int resultLinear = linear.search(numbers, target);
    std::cout << "\n=== Linear Search ===\n";
    linear.displaySearchResults(
        std::cout, resultLinear, target
    );

    // Jump Search
    int resultJump = jump.search(numbers, target);
    std::cout << "\n=== Jump Search ===\n";
    jump.displaySearchResults(
        std::cout, resultJump, target
    );

    // Binary Search
    int resultBinary = binary.search(numbers, target);
    std::cout << "\n=== Binary Search ===\n";
    binary.displaySearchResults(
        std::cout, resultBinary, target
    );

    return 0;
}
