#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using std::cout;    using std::endl;
using std::cin;     using std::max_element;
using std::vector;

int main()
{
    int l, n, k, m, x;

    // Store histagram length and number of integers
    cin >> l >> n;

    int numbers[n];

    // store numbers
    for (int i = 0; i < n; i++) {
        cin >> x;
        numbers[i] = x;
    }

    // find max number
    int max_num = 0;
    for (int i = 0; i < n; i++){
        if (numbers[i] > max_num){
            max_num = numbers[i];
        }
    }
    k = ceil(static_cast<float>(max_num) / static_cast<float>(l)); // change variable type from int to float
    // initialize histogram
    int histogram[l] = {};

    for (int i = 0; i < n; i++)
        histogram[numbers[i] / k]++;
    if (max_num % l == 0)
        histogram[l - 1]++;

    // display histogram
    for (int i = 0; i < l; i++)
        cout << i * k << ": " << histogram[i] << endl;

    return 0;
}
