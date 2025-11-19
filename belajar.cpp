#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    double diameter_lingkaran = 10.0;
    double panjang_persegi = 5.0;
    double lebar_persegi = 1.5;
    double alas_segitiga = 4.0;
    double tinggi_segitiga = 2.5;

    // Mendefinisikan nilai PI
    const double PI = 3.14;

    // Menghitung luas lingkaran
    double jari_jari = diameter_lingkaran / 2.0;
    double luas_lingkaran = PI * jari_jari * jari_jari;

    // Menghitung luas persegi panjang
    double luas_persegi_panjang = panjang_persegi * lebar_persegi;

    // Menghitung luas segitiga
    double luas_segitiga = 0.5 * alas_segitiga * tinggi_segitiga;

    // Menampilkan hasil
    cout << "=== PROGRAM MENGHITUNG LUAS BANGUN DATAR ===" << endl;
    cout << endl;

    cout << "1. LINGKARAN" << endl;
    cout << "   Diameter: " << diameter_lingkaran << " cm" << endl;
    cout << "   Jari-jari: " << jari_jari << " cm" << endl;
    cout << "   Luas: " << luas_lingkaran << " cm²" << endl;
    cout << endl;

    cout << "2. PERSEGI PANJANG" << endl;
    cout << "   Panjang: " << panjang_persegi << " cm" << endl;
    cout << "   Lebar: " << lebar_persegi << " cm" << endl;
    cout << "   Luas: " << luas_persegi_panjang << " cm²" << endl;
    cout << endl;

    cout << "3. SEGITIGA" << endl;
    cout << "   Alas: " << alas_segitiga << " cm" << endl;
    cout << "   Tinggi: " << tinggi_segitiga << " cm" << endl;
    cout << "   Luas: " << luas_segitiga << " cm²" << endl;
    cout << endl;

    cout << "=== HASIL AKHIR ===" << endl;
    cout << "Luas Lingkaran: " << luas_lingkaran << " cm²" << endl;
    cout << "Luas Persegi Panjang: " << luas_persegi_panjang << " cm²" << endl;
    cout << "Luas Segitiga: " << luas_segitiga << " cm²" << endl;

    return 0;
}