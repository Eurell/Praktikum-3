#include <iostream>
using namespace std;
int main() {
    int n; // jumlah baris
    cout << "masukkan jumlah baris: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        // spasi agar berbentuk segitiga
        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }

        int val = 1; //nilai pertama setiap baris selalu 1
        for (int j = 0; j <= i; j++) {
            cout << val << " ";

            // rumus untuk nilai beirkutnya di baris pascal
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
    
    return 0;
}