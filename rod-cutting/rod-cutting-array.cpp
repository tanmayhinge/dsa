#include <iostream>
#include <vector>
#include <algorithm>

int rodCutting(int n, const std::vector<int>& values) {
    std::vector<int> P(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        int max_value = -1;
        for (int j = 1; j <= i; ++j) {
            max_value = std::max(max_value, values[j] + P[i - j]);
        }
        P[i] = max_value;
    }

    return P[n];
}

int main() {
    int rod_length = 5;
    std::vector<int> values;
    values.push_back(0);
    values.push_back(1);
    values.push_back(5);
    values.push_back(8);
    values.push_back(9);
    values.push_back(10);

    int max_revenue = rodCutting(rod_length, values);

    std::cout << "Maximum revenue for a rod of length " << rod_length << ": " << max_revenue << std::endl;

    return 0;
}
