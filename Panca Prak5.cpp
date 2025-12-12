#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    // Data awal dimasukkan ke dalam vector
    int sumber[] = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };
    vector<int> myVector(sumber, sumber + (sizeof(sumber) / sizeof(sumber[0])));

    auto cetakVector = [](const vector<int>& data, const string& info) {
        cout << info << "\n";
        for (const auto& angka : data) {
            cout << angka << " | ";
        }
        cout << "\n================================================\n";
        };

    cetakVector(myVector, "Isi vector awal:");

  
    sort(myVector.begin(), myVector.end());
    cetakVector(myVector, "Isi vector setelah sorting ASC :");

  
    sort(myVector.begin(), myVector.end(),
        [](int a, int b) { return a > b; });
    cetakVector(myVector, "Isi vector setelah sorting DESC :");

    return 0;
}