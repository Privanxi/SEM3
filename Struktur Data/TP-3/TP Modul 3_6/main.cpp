#include <iostream>
#include <cmath>

using namespace std;

double jariJari;
double tinggi;

double volume(double r, double t) {
    return (M_PI * r * r * t) / 3.0;
}

double luasPermukaan(double r, double t) {
    double s = sqrt((r * r) + (t * t));
    return M_PI * r * (s + r);
}

int main()
{
    cout << "Masukkan nilai jari-jari: ";
    cin >> jariJari;
    cout << "Masukkan nilai tinggi: ";
    cin >> tinggi;

    cout << "Volume Kerucut: " << volume(jariJari, tinggi) << endl;
    cout << "Luas Permukaan Kerucut: " << luasPermukaan(jariJari, tinggi) << endl;
    return 0;
}
