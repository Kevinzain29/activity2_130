#include <iostream>
using namespace std;

float persegipanjang(float p, float l) {
    return p * l;
}

float lingkaran(float r) {
    return 3.14 * r * r;
}

float segitiga(float a, float t) {
    return 0.5 * a * t;
}

int main()
{
    float nilai[10];
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    bool menu;
    menu = true;
    while (menu == true)
    {
        cout << "\n\n===================";
        cout << "\n M E N U";
        cout << "\n\n===================";
        cout << "\n 1. luas persegi panjang";
        cout << "\n 2. luas lingkaran";
        cout << "\n 3. luas segitiga";
        cout << "\n 4. array";
        cout << "\n 5. keluar";
        cout << "\n pilihan (1/2/3/4/5) : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "masukkan panjang = ";
            cin >> panjang;
            cout << "masukkan lebar = ";
            cin >> lebar;
            cout << "\n luas persegi panjang =" << persegipanjang(panjang, lebar);
            break;
        case 2:
            cout << "masukkan jari -  jari =";
            cin >> jejari;
            cout << "\n luas lingkaran = " << lingkaran(jejari);
            break;
        case 3:
            cout << "masukkan alas =";
            cin >> alas;
            cout << "masukkan tinggi =";
            cin >> tinggi;
            cout << "\n Luas Segitiga = " << segitiga(alas, tinggi);
            break;
        case 4:
            cout << "mengisi array\n";
            for (int i = 0; i < 10; i++) {
                cout << "nilai ke -" << (i + 1) << ": ";
                cin >> nilai[i];
            }
            cout << "membaca isi array\n";
            for (int i = 0; i < 10; i++); {
                cout << "\nnNilai ke -" << (1 + 1) << "; ";
            }


        }
    }
}




