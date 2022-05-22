#include <iostream>
#include <ctime>

using namespace std;

void sayiTahminOyunu();
void tasKagitMakas();
void matematikQuizi();
bool oyunlar();

bool oyunlar() {
    string islemler[5] = { "Sayi tahmin oyunu", "Tas kagit makas oyunu", "Matematik quizi", "Ana menuye don", "Cikis" };
    int islem;
    cout << "Lutfen bir islem seciniz." << endl;
    for (int i = 0; i < 5; i++) cout << i + 1 << ". " << islemler[i] << endl;
    cout << endl;
    cout << "Islem: ";
    cin >> islem;
    while (1) {
        if (islem == 1) {
            sayiTahminOyunu();
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 5; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 2) {
            tasKagitMakas();
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 5; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 3) {
            matematikQuizi();
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 5; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 4) {
            cout << "Ana menuye donuluyor..." << endl;
            break;
        }
        else if (islem == 5) return false;
        else {
            cout << "Bilinmeyen islem..." << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 5; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
    }
    return true;
}
void sayiTahminOyunu() {
    int max = 1000, min = 1, count = 1, temp;
    srand(time(0));
    int sayi = rand() % (max - min + 1) + min;
    cout << "Bellegimde 1 ile 1000 arasinda bir sayi tuttum, tuttugum sayiyi tahmin edebilir misin?" << endl;
    cout << endl;
    while (1) {
        cout << "Lutfen bir sayi gir: ";
        cin >> temp;
        if (temp == sayi) {
            cout << "Tebrikler, sayiyi " << count << " tahminde buldun!" << endl;
            break;
        }
        else if (temp < sayi) {
            cout << "Yanlis! Yukari cik." << endl;
            count++;
        }
        else {
            cout << "Yanlis! Asagi in." << endl;
            count++;
        }
    }
}
void tasKagitMakas() {
    int bil, secim, bilPuan = 0, oyuncuPuan = 0;
    cout << "Tas - kagit - makas oyununa hos geldiniz." << endl;
    srand(time(0));
    while (1) {
        cout << endl;
        cout << "Rolunuzu secin(Tas:1 Kagit:2 Makas:3): ";
        cin >> secim;
        bil = rand() % 3 + 1;
        if (secim == 1) {
            if (bil == 1) {
                cout << "Oyuncu: Tas - Bilgisayar: Tas" << endl;
                cout << "Berabere kaldiniz..." << endl;
            }
            else if (bil == 2) {
                cout << "Oyuncu: Tas - Bilgisayar: Kagit" << endl;
                cout << "Bilgisayar 1 puan kazandi..." << endl;
                bilPuan++;
            }
            else if (bil == 3) {
                cout << "Oyuncu: Tas - Bilgisayar: Makas" << endl;
                cout << "1 Puan kazandiniz..." << endl;
                oyuncuPuan++;
            }
        }
        else if (secim == 2) {
            if (bil == 1) {
                cout << "Oyuncu: Kagit - Bilgisayar: Tas" << endl;
                cout << "1 Puan kazandiniz..." << endl;
                oyuncuPuan++;
            }
            else if (bil == 2) {
                cout << "Oyuncu: Kagit - Bilgisayar: Kagit" << endl;
                cout << "Berabere kaldiniz..." << endl;
            }
            else if (bil == 3) {
                cout << "Oyuncu: Kagit - Bilgisayar: Makas" << endl;
                cout << "Bilgisayar 1 puan kazandi..." << endl;
                bilPuan++;
            }
        }
        else if (secim == 3) {
            if (bil == 1) {
                cout << "Oyuncu: Makas - Bilgisayar: Tas" << endl;
                cout << "Bilgisayar 1 puan kazandi..." << endl;
                bilPuan++;
            }
            else if (bil == 2) {
                cout << "Oyuncu: Makas - Bilgisayar: Kagit" << endl;
                cout << "1 Puan kazandiniz..." << endl;
                oyuncuPuan++;
            }
            else if (bil == 3) {
                cout << "Oyuncu: Makas - Bilgisayar: Makas" << endl;
                cout << "Berabere kaldiniz..." << endl;
            }
        }
        else cout << "Gecersiz secim...Lutfen tekrar secim yapiniz." << endl;
        if (bilPuan == 3) {
            cout << endl;
            cout << "Oyunu bilgisayar kazandi..." << endl;
            break;
        }
        if (oyuncuPuan == 3) {
            cout << endl;
            cout << "Kazandiniz..." << endl;
            break;
        }
    }
}
void matematikQuizi() {
    int islem, count = 0, sayi1, sayi2, girdi;
    cout << "            MATEMATIK QUIZI" << endl;
    srand(time(0));
    while (1) {
        islem = rand() % 5 + 1;
        sayi1 = rand() % 900 + 100;
        sayi2 = rand() % 900 + 100;
        if (islem == 1) {
            int sonuc = sayi1 + sayi2;
            cout << sayi1 << " + " << sayi2 << " = ";
            cin >> girdi;
            if (girdi == sonuc) {
                cout << "DOGRU!" << endl;
                cout << endl;
                count++;
            }
            else {
                cout << endl;
                cout << "YANLIS! Dogru cevap " << sonuc << " olacakti." << endl;
                cout << endl;
                cout << "Toplam " << count << " soruya dogru cevap verdiniz." << endl;
                break;
            }
        }
        else if (islem == 2) {
            if (sayi1 < sayi2) {
                int temp = sayi2;
                sayi2 = sayi1;
                sayi1 = temp;
            }
            int sonuc = sayi1 - sayi2;
            cout << sayi1 << " - " << sayi2 << " = ";
            cin >> girdi;
            if (girdi == sonuc) { 
                cout << "DOGRU!" << endl; 
                cout << endl;
                count++; 
            }
            else {
                cout << endl;
                cout << "YANLIS! Dogru cevap " << sonuc << " olacakti." << endl;
                cout << endl;
                cout << "Toplam " << count << " soruya dogru cevap verdiniz." << endl;
                break;
            }
        }
        else if (islem == 3) {
            int sonuc = sayi1 * sayi2;
            cout << sayi1 << " * " << sayi2 << " = ";
            cin >> girdi;
            if (girdi == sonuc) { 
                cout << "DOGRU!" << endl; 
                cout << endl;
                count++; 
            }
            else {
                cout << "YANLIS! Dogru cevap " << sonuc << " olacakti." << endl;
                cout << endl;
                cout << "Toplam " << count << " soruya dogru cevap verdiniz." << endl;
                break;
            }
        }
        else if (islem == 4) {
            if (sayi1 < sayi2) {
                int temp = sayi2;
                sayi2 = sayi1;
                sayi1 = temp;
            }
            float sonuc = sayi1 / sayi2;
            cout << sayi1 << " / " << sayi2 << " = ";
            cin >> girdi;
            if (girdi == sonuc) { 
                cout << "DOGRU!" << endl; 
                cout << endl;
                count++; 
            }
            else {
                cout << endl;
                cout << "YANLIS! Dogru cevap " << sonuc << " olacakti." << endl;
                cout << endl;
                cout << "Toplam " << count << " soruya dogru cevap verdiniz." << endl;
                break;
            }
        }
        else {
            if (sayi1 < sayi2) {
                int temp = sayi2;
                sayi2 = sayi1;
                sayi1 = temp;
            }
            int sonuc = sayi1 % sayi2;
            cout << sayi1 << " % " << sayi2 << " = ";
            cin >> girdi;
            if (girdi == sonuc) { 
                cout << "DOGRU!" << endl; 
                cout << endl;
                count++; 
            }
            else {
                cout << endl;
                cout << "YANLIS! Dogru cevap " << sonuc << " olacakti." << endl;
                cout << endl;
                cout << "Toplam " << count << " soruya dogru cevap verdiniz." << endl;
                break;
            }
        }
    }
}


