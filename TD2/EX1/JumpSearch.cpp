
#include "JumpSearch.h"
#include <cmath>
#include <algorithm>

int JumpSearch::search(
    const std::vector<int>& elements, int target)
{
    numberComparisons = 0;

    int n = static_cast<int>(elements.size());

    if (n == 0) {
        return -1;
    }

    int step = static_cast<int>(std::sqrt(n));
    int prev = 0;
    int next = step;

    while (prev < n) {
        int end = std::min(next, n);

        numberComparisons++;

        if (elements[end - 1] >= target) {
            break;
        }

        prev = next;
        next += step;

        if (prev >= n) {
            return -1;
        }
    }

    int end = std::min(next, n);

    for (int i = prev; i < end; i++) {
        numberComparisons++;

        if (elements[i] == target) {
            return i;
        }

        if (elements[i] > target) {
            return -1;
        }
    }

    return -1;
}
