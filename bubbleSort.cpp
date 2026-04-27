#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

void bubbleSort(vector<int> a) {
    int n = a.size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}

int main() {
    int n = 1000;
    vector<int> arr(n);
    srand(time(NULL));

    for (int i = 0; i < n; i++)
        arr[i] = rand();

    auto start = high_resolution_clock::now();
    bubbleSort(arr);
    auto end = high_resolution_clock::now();

    cout << "Time: "
         << duration_cast<milliseconds>(end - start).count()
         << " ms\n";
}
