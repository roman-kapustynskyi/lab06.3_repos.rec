#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void sortINT(int* a, const int n,int i,int j);

template <typename T>
void sortTemplate(T* a, const int n, int i, int j);

int main() {
    const int n = 7;
    int a[n] = { 5, 2, 9, 1, 7, 3, 11 };

    cout << "Initial: ";
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;

    sortINT(a, n,0,0);

    cout << "Sorted:  ";
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl << endl;

    double b[4] = { 2.5, 1.1, 4.8, 3.2 };

    cout << "Initial: ";
    for (int i = 0; i < 4; i++)
        cout << setw(5) << b[i];
    cout << endl;

    sortTemplate(b, 4,0,0);

    cout << "Sorted:  ";
    for (int i = 0; i < 4; i++)
        cout << setw(5) << b[i];
    cout << endl << endl;

    string c[4] = { "1", "3", "9", "6" };

    cout << "Initial: ";
    for (int i = 0; i < 4; i++)
        cout << setw(4) << c[i];
    cout << endl;

    sortTemplate(c, 4,0,0);

    cout << "Sorted:  ";
    for (int i = 0; i < 4; i++)
        cout << setw(4) << c[i];
    cout << endl;

    return 0;
}

void sortINT(int* a, const int n, int i, int j) {
    if (i >= n - 1) {
        return;
    }

    if (j >= n - i - 1) {
        sortINT(a, n, i + 1, 0);
        return; 
    }

   
    if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
    }

    sortINT(a, n, i, j + 1);
}
template <typename T>
void sortTemplate(T* a, const int n, int i, int j) {
    if (i >= n - 1) {
        return;
    }
      if (j >= n - i - 1) {
        sortTemplate(a, n, i + 1, 0);
        return;
    }
    if (a[j] > a[j + 1]){
        T temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        }
    sortTemplate(a, n, i, j + 1);
     
    }
