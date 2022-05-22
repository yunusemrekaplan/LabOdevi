#include <iostream>

using namespace std;

bool aritmetikIslemler() {
    string islemler[7] = { "Topla", "Cikar", "Carp", "Bol", "Mod", "Ana menuye don", "Cikis" };
    int sayi1, sayi2, islem;
    cout << "Lutfen bir islem seciniz." << endl;
    for (int i = 0; i < 7; i++) {
        cout << i + 1 << ". " << islemler[i] << endl;
    }
    cout << endl;
    cout << "Islem: ";
    cin >> islem;
    while (1) {
        if (islem == 1) {
            cout << "Lutfen birinci sayiyi giriniz: ";
            cin >> sayi1;
            cout << "Lutfen ikinci sayiyi giriniz: ";
            cin >> sayi2;
            int sonuc = sayi1 + sayi2;
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 7; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 2) {
            cout << "Lutfen birinci sayiyi giriniz: ";
            cin >> sayi1;
            cout << "Lutfen ikinci sayiyi giriniz: ";
            cin >> sayi2;
            int sonuc = sayi1 - sayi2;
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 7; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 3) {
            cout << "Lutfen birinci sayiyi giriniz: ";
            cin >> sayi1;
            cout << "Lutfen ikinci sayiyi giriniz: ";
            cin >> sayi2;
            int sonuc = sayi1 * sayi2;
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 7; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 4) {
            cout << "Lutfen birinci sayiyi giriniz: ";
            cin >> sayi1;
            cout << "Lutfen ikinci sayiyi giriniz: ";
            cin >> sayi2;
            float sonuc = sayi1 / sayi2;
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 7; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 5) {
            int sonuc;
            cout << "Lutfen birinci sayiyi giriniz: ";
            cin >> sayi1;
            cout << "Lutfen ikinci sayiyi giriniz: ";
            cin >> sayi2;
            sonuc = sayi1 % sayi2;
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 7; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 6) {
            cout << "Ana menuye donuluyor..." << endl;
            break;
        }
        else if (islem == 7) return false;
        else {
            cout << "Bilinmeyen islem..." << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 7; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
    }
    return true;
}