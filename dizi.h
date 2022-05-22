#include <iostream>
#include <vector>

using namespace std;

bool diziIslemleri() {
    string islemler[11] = { "Diziyi yazdir", "Eleman sayisini yazdir", "Toplamini hesapla", "Ortalamasini hesapla", "En buyuk elemani bul", "En kucuk elemani bul", "Eleman ara", "Elemanin degerini degistir", "Elemanlarin sirasini terse cevir", "Ana menuye don", "Cikis" };
    int size, temp, count = 0;
    cout << "Dizinin kac elemani vardir: ";
    cin >> size;
    vector<int> dizi;
    cout << "Lutfen dizinin elemanlarini giriniz." << endl;
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". eleman: ";
        cin >> temp;
        dizi.push_back(temp);
    }
    int islem;
    cout << endl;
    cout << "Lutfen bir islem seciniz." << endl;
    for (int i = 0; i < 11; i++) {
        cout << i + 1 << ". " << islemler[i] << endl;
    }
    cout << endl;
    cout << "Islem: ";
    cin >> islem;
    while (1) {
        if (islem == 1) {
            cout << endl;
            for (int i = 0; i < size; i++) cout << i + 1 << ". eleman: " << dizi[i] << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 11; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 2) {
            cout << size << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 11; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 3) {
            int sum = 0;
            for (int i = 0; i < size; i++) sum += dizi[i];
            cout << "Sonuc: " << sum << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 11; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 4) {
            int sum = 0;
            for (int i = 0; i < size; i++) sum += dizi[i];
            cout << "Sonuc: " << sum / size << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 11; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 5) {
            int max = dizi[0];
            for (int i = 0; i < size; i++) {
                if (dizi[i] > max) max = dizi[i];
            }
            cout << "Sonuc: " << max << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 11; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 6) {
            int min = dizi[0];
            for (int i = 0; i < size; i++) {
                if (dizi[i] < min) min = dizi[i];
            }
            cout << "Sonuc: " << min << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 11; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 7) {
            int sayi, n = size + 1;
            cout << "Lutfen bir sayi giriniz: ";
            cin >> sayi;
            for (int i = 0; i < size; i++) {
                if (dizi[i] == sayi) {
                    n = i;
                    break;
                }
            }
            if (n == size + 1) {
                cout << "Aradaginiz sayi dizide yoktur." << endl;
            }
            else {
                cout << "Aradaginiz sayi " << n + 1 << ". siradadir." << endl;
            }
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 11; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 8) {
            int sayi, control = 0;
            cout << "Lutfen bir sayi giriniz: ";
            cin >> sayi;
            for (int i = 0; i < size; i++) {
                if (sayi == dizi[i]) {
                    count++;
                    dizi[i] += 1;
                    control = 1;
                }
            }
            if (control == 1) {
                cout << "Dizide " << count << " degisiklik yapilmistir." << endl;
            }
            else cout << "Girilen sayi dizide bulunmamaktadir" << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 11; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 9) {
            int k = size - 1, temp;
            for (int i = 0; i < size / 2; i++) {
                temp = dizi[i];
                dizi[i] = dizi[k];
                dizi[k] = temp;
                k--;
            }
            for (int i = 0; i < size; i++) cout << i + 1 << ". eleman: " << dizi[i] << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 11; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
        else if (islem == 10) {
            cout << "Ana menuye donuluyor..." << endl;
            break;
        }
        else if (islem == 11) return false;
        else {
            cout << "Bilinmeyen islem..." << endl;
            cout << endl;
            cout << "Lutfen bir islem seciniz." << endl;
            for (int i = 0; i < 11; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << endl;
            cout << "Islem: ";
            cin >> islem;
        }
    }
    return true;
}

