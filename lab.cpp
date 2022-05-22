#include <iostream>
#include "aritmetik.h"
#include "matematik.h"
#include "geometri.h"
#include "dizi.h"
#include "oyun.h"

using namespace std;



int main() {
    string islemler[6] = {"Aritmetik Islemler", "Matematiksel Islemler", "Geometrik Islemler", "Dizi Islemler", "Oyunlar", "Cikis"};
    int islem;
    bool control;
    cout << "Lutfen bir islem giriniz." << endl;
    cout << endl;
    for(int i=0; i<6; i++) cout << i + 1 << ". " << islemler[i] << endl;
    cout << "Islem: ";
    cin >> islem;
    cout << endl;
    while(1) {
        if(islem == 1) {
            control = aritmetikIslemler();
            if(control == false) {
                cout << "Uygulama kapatiliyor..." << endl;
                break;
            }
            else {
                cout << endl;
                cout << "Lutfen bir islem giriniz." << endl;
                for(int i=0; i<6; i++) cout << i + 1 << ". " << islemler[i] << endl;
                cout << "Islem: ";
                cin >> islem;
                cout << endl;
            }
        }
        else if(islem == 2) {
            control = matematikselIslemler();
            if(control == false) {
                cout << "Uygulama kapatiliyor..." << endl;
                break;
            }
            else {
                cout << endl;
                cout << "Lutfen bir islem giriniz." << endl;
                for(int i=0; i<6; i++) cout << i + 1 << ". " << islemler[i] << endl;
                cout << "Islem: ";
                cin >> islem;
                cout << endl;
            }
        }
        else if(islem == 3) {
            control = geometrikIslemler();
            if(control == false) {
                cout << "Uygulama kapatiliyor..." << endl;
                break;
            }
            else {
                cout << endl;
                cout << "Lutfen bir islem giriniz." << endl;
                for(int i=0; i<6; i++) cout << i + 1 << ". " << islemler[i] << endl;
                cout << "Islem: ";
                cin >> islem;
                cout << endl;
            }
        }
        else if(islem == 4) {
            control = diziIslemleri();
            if(control == false) {
                cout << "Uygulama kapatiliyor..." << endl;
                break;
            }
            else {
                cout << endl;
                cout << "Lutfen bir islem giriniz." << endl;
                for(int i=0; i<6; i++) cout << i + 1 << ". " << islemler[i] << endl;
                cout << "Islem: ";
                cin >> islem;
                cout << endl;
            }
        }
        else if(islem == 5) {
            control = oyunlar();
            if(control == false) {
                cout << "Uygulama kapatiliyor..." << endl;
                break;
            }
            else {
                cout << endl;
                cout << "Lutfen bir islem giriniz." << endl;
                for(int i=0; i<6; i++) cout << i + 1 << ". " << islemler[i] << endl;
                cout << "Islem: ";
                cin >> islem;
                cout << endl;
            }
        }
        else if(islem == 6) {
            cout << "Uygulama kapatiliyor..." << endl;
            break;
        }
        else {
            cout << "Lutfen gecerli bir islem giriniz!" << endl;
            cout << endl;
            for(int i=0; i<6; i++) cout << i + 1 << ". " << islemler[i] << endl;
            cout << "Islem: ";
            cin >> islem;
            cout << endl;
        }
    }

    return 0;
}

