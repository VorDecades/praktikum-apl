#include <iostream>
using namespace std;

// Fungsi menjumlahkan bilangan bulat
int tambah(int a, int b) {
return a + b;
}

// Fungsi 2 menjumlahkan bilangan desimal
double tambah(double a, double b) {
return a + b;
}

int main() {
cout << "Hasil Int : " << tambah(5, 6) << endl;
cout << "Hasil Double : " << tambah(5.5, 6.6) << endl;
return 0;
}