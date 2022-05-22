#include <iostream>

using namespace std;

const double pi = 3.14;

bool geometrikIslemler() {
    string islemler[8] = { "Dairenin alanini hesapla", "Dairenin cevresini hesapla", "Silindirin hacmini hesapla", "Ucgenin alanini hesapla", "Ucgenin turunu yazdir", "Hipotenus hesapla", "Ana menuye don", "Cikis" };
    int islem;
    cout << "Lutfen bir islem seciniz." << endl;
    for (int i = 0; i < 8; i++) {
        cout << i + 1 << ". " << islemler[i] << endl;
    }
    cout << endl;
    cout << "Islem: ";
    cin >> islem;
    while (1) {
        if (islem == 1) {
            int yariCap;
            float sonuc;
            cout << "Lutfen dairenin yaricapini girin: ";
            cin >> yariCap;
            sonuc = pi * yariCap * yariCap;
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 8; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 2) {
            int yariCap;
            float sonuc;
            cout << "Lutfen dairenin yaricapini girin: ";
            cin >> yariCap;
            sonuc = 2 * pi * yariCap;
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 8; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 3) {
            int yariCap, h;
            float sonuc;
            cout << "Lutfen yaricap ve yuksekligi giriniz: ";
            cin >> yariCap >> h;
            sonuc = pi * yariCap * yariCap * h;
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 8; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 4) {
            int h, tabanUzunlugu;
            float sonuc;
            cout << "Lutfen yukseklik ve taban uzunlugunu giriniz: ";
            cin >> h >> tabanUzunlugu;
            sonuc = (h * tabanUzunlugu) / 2;
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 8; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 5) {
            int a, b, c;
            string sonuc;
            cout << "Lutfen kenar uzunluklarini giriniz: ";
            cin >> a >> b >> c;
            if (a == b && a == c) sonuc = "Eskenar";
            else if ((a == b && a != c) || (a == c && a != b) || (b == c && c != a)) sonuc = "İkizkenar";
            else if (a != b && b != c) sonuc = "Cesitkenar";
            else sonuc = "Bilinmiyor";
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 8; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 6) {
            int a, b, hipo;
            float sonuc;
            cout << "Lutfen kenar uzunluklarini giriniz: ";
            cin >> a >> b;
            hipo = a * a + b * b;
            sonuc = sqrt(hipo);
            cout << "Sonuc: " << sonuc << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 8; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 7) {
            cout << "Ana menuye donuluyor..." << endl;
            break;
        }
        else if (islem == 8) return false;
        else {
            cout << "Bilinmeyen islem..." << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 8; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
    }
    return true;
}    