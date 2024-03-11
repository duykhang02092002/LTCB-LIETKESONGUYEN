#include <iostream>
#include <cmath>
using namespace std;
int snt(int n)
{
    if (n < 2) {
        return 0;
    }
    int i;
    int canbac2 = (int)sqrt(n);
    for (i = 2; i <= canbac2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }


    return 1;
}

int main()
{
    int n, i;
    cout << "nhap so:"; cin >> n;
    if (n >= 2) {
        cout << "tat ca cac so nguyen nho hon " << n << "la: 2";
    }
    for (i = 3; i < n; i += 2) {
        if (snt(i))
            cout << i << " ";
    }

}