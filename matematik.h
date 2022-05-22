#include <iostream>
#include <cmath>

using namespace std;

bool matematikselIslemler();
bool asalMi(int sayi);
long faktoriyel(long sayi, long n);
unsigned long long fibonacci(unsigned long long n, unsigned long long ilkSayi, unsigned long long ikinciSayi);

bool matematikselIslemler() {
    string islemler[7] = { "Us hesapla", "Faktoriyel hesapla", "Fibonacci n. terimi hesapla", "Karekok hesapla", "Asal sayi kontrolu", "Ana menuye don", "Cikis" };
    int islem;
    cout << "Lutfen bir islem seciniz." << endl;
    for (int i = 0; i < 7; i++) {
        cout << i + 1 << ". " << islemler[i] << endl;
    }
    cout << endl;
    cout << "Islem: ";
    cin >> islem;
    while (1) {
        if (islem == 1) {
            int a, b, sonuc;
            cout << "Us alinacak sayilar a^b' dir. " << endl;
            cout << "a sayisini giriniz: ";
            cin >> a;
            cout << "b sayisini giriniz: ";
            cin >> b;
            sonuc = a;
            for (int i = 1; i < b; i++) sonuc *= a;
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 7; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 2) {
            long sayi;
            int sonuc;
            cout << "Lutfen bir sayi giriniz: ";
            cin >> sayi;
            sonuc = faktoriyel(sayi, sayi - 1);
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 7; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 3) {
            unsigned long long n, ilkSayi = 1, ikinciSayi = 2, sonuc;
            cout << "Kacinci fibonacci sayisini gormek istiyorsunuz: ";
            cin >> n;
            sonuc = fibonacci(n, ilkSayi, ikinciSayi);
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 7; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 4) {
            int sayi, sonuc;
            cout << "Lutfen bir sayi giriniz: ";
            cin >> sayi;
            sonuc = sqrt(sayi);
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 7; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 5) {
            int sayi;
            cout << "Lutfen bir sayi giriniz: ";
            cin >> sayi;
            if (asalMi(sayi) == false) cout << "Sayi asal degildir." << endl;
            else cout << "Sayi asaldir." << endl;
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
bool asalMi(int num) {
    if (num == 2) return true;
    if (num <= 1) return false;
    int a = sqrt(num);
    for (int i = 2; i <= a; i++) if (num % i == 0) return false;
    return true;
}
long faktoriyel(long sayi, long n) {
    if (n > 1) {
        sayi = sayi * n;
        n--;
        return faktoriyel(sayi, n);
    }
    else return sayi;
}
unsigned long long fibonacci(unsigned long long n, unsigned long long ilkSayi, unsigned long long ikinciSayi) {
    unsigned long long temp;
    if (n != 0) {
        temp = ilkSayi;
        ilkSayi = ikinciSayi;
        ikinciSayi = ikinciSayi + temp;
        n--;
        return fibonacci(n, ilkSayi, ikinciSayi);
    }
    else return ikinciSayi;
}

