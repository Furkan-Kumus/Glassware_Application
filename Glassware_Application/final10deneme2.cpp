#include <iostream>
#include <locale.h>
#include <string.h>
#include <string>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <sstream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;


struct zuccaciye
{
    unsigned long beyaztabak, renklitabak, desenlitabak;
    unsigned long caybardagi, subardagi, kupabardak;
    unsigned long kisacatalkasik, ortacatalkasik, uzuncatalkasik;
    unsigned long karesakkab, dikdortsakkab, yuvsakkab;
    unsigned long celiktencere, granittencere, kizartmatava, pisirmetava;
    unsigned long elsupurge, elektriksupurge;
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    int secim1, secim2, secim3, secim4, secim5, secim6, secim7, secim8, secim9, stokno;
    int secim10, secim11, secim12, secim13, secim14, secim15, secim16, secim17;
    unsigned long bts, rts, dts, cbs, sbs, kbs, kcks, ocks, ucks, ksks, dsks, ysks, cts, gts, kts, pts, elss, ess;
    char cıkıs1, cıkıs2;
    zuccaciye cesit;//ürün çeşitleri

    //renk kodları
    HANDLE  hConsole;
    int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    do
    {
        for (k = 4; k < 5; k++)
        {
            SetConsoleTextAttribute(hConsole, k);
            cout << setw(20) << "MENU" << endl;
        }
        for (k = 2; k < 3; k++)
        {
            SetConsoleTextAttribute(hConsole, k);
            cout << "1. Stok Girişi" << endl;
        }
        for (k = 2; k < 3; k++)
        {
            SetConsoleTextAttribute(hConsole, k);
            cout << "2. Stokları Görüntüleme" << endl;
        }
        for (k = 2; k < 3; k++)
        {
            SetConsoleTextAttribute(hConsole, k);
            cout << "3. Stokları Düzeltme" << endl;
        }
        for (k = 2; k < 3; k++)
        {
            SetConsoleTextAttribute(hConsole, k);
            cout << "4. Stok Ekleme Ya Da Stoktan Düşme" << endl;
        }
        for (k = 6; k < 7; k++)
        {
            SetConsoleTextAttribute(hConsole, k);
            cout << "Yapmak istediğiniz işlem numarasını giriniz: ";
        }

        cin >> secim1;
        cout << endl;
        switch (secim1)
        {
        case 1:
        {
            ofstream dosya("zuccaciyestok.dat", ios::binary);
            for (k = 9; k < 10; k++)
            {
                SetConsoleTextAttribute(hConsole, k);
                cout << "B";
            }
            cout << "eyaz tabak sayısını giriniz: "; cin >> cesit.beyaztabak;
            cout << "Renkli tabak sayısını giriniz: "; cin >> cesit.renklitabak;
            cout << "Desenli tabak sayısını giriniz: "; cin >> cesit.desenlitabak;
            cout << "Çay bardağı sayısını giriniz: "; cin >> cesit.caybardagi;
            cout << "Su bardağı sayısını giriniz: "; cin >> cesit.subardagi;
            cout << "Kupa sayısını giriniz: "; cin >> cesit.kupabardak;
            cout << "Kısa çatal kaşık sayısını giriniz: "; cin >> cesit.kisacatalkasik;
            cout << "Orta çatal kaşık sayısını giriniz: "; cin >> cesit.ortacatalkasik;
            cout << "Uzun çatal kaşık sayısını giriniz: "; cin >> cesit.uzuncatalkasik;
            cout << "Çelik tencere sayısını giriniz: "; cin >> cesit.celiktencere;
            cout << "Granit tencere sayısını giriniz: "; cin >> cesit.granittencere;
            cout << "Diktörtgen saklama kabı sayısını giriniz: "; cin >> cesit.dikdortsakkab;
            cout << "Kare saklama kabı sayısını giriniz: "; cin >> cesit.karesakkab;
            cout << "Yuvarlak saklama kabı sayısını giriniz: "; cin >> cesit.yuvsakkab;
            cout << "Kızartma tavası sayısını giriniz: "; cin >> cesit.kizartmatava;
            cout << "Pişirme tavası sayısını giriniz: "; cin >> cesit.pisirmetava;
            cout << "El süpürgesi sayısını giriniz: "; cin >> cesit.elsupurge;
            cout << "Elektrikli süpürge sayısını giriniz: "; cin >> cesit.elektriksupurge;


            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
            for (k = 13; k < 14; k++)
            {
                SetConsoleTextAttribute(hConsole, k);
                cout << "Kayıt Başarılı!" << endl;
            }
            dosya.close();
            break;
        }
        case 2:
        {
            {
                ifstream dosya("zuccaciyestok.dat", ios::binary);
                dosya.seekg(0, ios::end);
                int kayitsayisi = dosya.tellg() / sizeof(cesit);
                dosya.close();
                {
                    ifstream dosya;
                    dosya.open("zuccaciyestok.dat", ios::binary);

                    if (kayitsayisi > 0)
                    {
                        for (int j = 0; j < kayitsayisi; j++)
                        {
                            dosya.seekg(j * sizeof(cesit));
                            dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "B";
                            }
                            cout << "eyaz tabak sayısı: " << cesit.beyaztabak << endl;
                            cout << "Renkli tabak sayısı: " << cesit.renklitabak << endl;
                            cout << "Desenli tabak sayısı: " << cesit.desenlitabak << endl << endl;
                            cout << "Çay bardağı sayısı: " << cesit.caybardagi << endl;
                            cout << "Su bardağı sayısı: " << cesit.subardagi << endl;
                            cout << "Kupa sayısı: " << cesit.kupabardak << endl << endl;
                            cout << "Kısa çatal kaşık sayısı: " << cesit.kisacatalkasik << endl;
                            cout << "Orta çatal kaşık sayısı: " << cesit.ortacatalkasik << endl;
                            cout << "Uzun çatal kaşık sayısı: " << cesit.uzuncatalkasik << endl << endl;
                            cout << "Çelik tencere sayısı: " << cesit.celiktencere << endl;
                            cout << "Granit tencere sayısı: " << cesit.granittencere << endl << endl;
                            cout << "Dikdörtgen saklama kabı sayısı: " << cesit.dikdortsakkab << endl;
                            cout << "Kare saklama kabı sayısı: " << cesit.karesakkab << endl;
                            cout << "Yuvarlak saklama kabı sayısı: " << cesit.yuvsakkab << endl << endl;
                            cout << "Kızartma tavası sayısı: " << cesit.kizartmatava << endl;
                            cout << "Pişirme tavası sayısı: " << cesit.pisirmetava << endl << endl;
                            cout << "El süpürgesi sayısı: " << cesit.elsupurge << endl;
                            cout << "Elektrikli süpürge sayısı: " << cesit.elektriksupurge << endl << endl;
                        }
                    }
                    else if (kayitsayisi == 0)
                    {
                        for (k = 4; k < 5; k++)
                        {
                            SetConsoleTextAttribute(hConsole, k);
                            cout << "\nDosyada hiç kayıt yok" << endl;
                        }
                    }
                    dosya.close();
                }
            }
            break;
        }
        case 3:
        {
            for (k = 2; k < 3; k++)
            {
                SetConsoleTextAttribute(hConsole, k);
                cout << "1";
            }
            cout << ". Tabak" << endl;
            cout << "2. Bardak" << endl;
            cout << "3. Çatal Kaşık" << endl;
            cout << "4. Tencere" << endl;
            cout << "5. Saklama Kabı" << endl;
            cout << "6. Tava" << endl;
            cout << "7. Süpürge" << endl;
            for (k = 6; k < 7; k++)
            {
                SetConsoleTextAttribute(hConsole, k);
                cout << "Değiştirmek istediğiniz ürünün numarasını giriniz: ";
            }
            cin >> secim2;
            cout << endl;
            switch (secim2)
            {
            case 1:
            {
                for (k = 2; k < 3; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "1";
                }
                cout << ". Beyaz Tabak" << endl;
                cout << "2. Renkli Tabak" << endl;
                cout << "3. Desenli Tabak" << endl;
                for (k = 6; k < 7; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "Değiştirmek istediğiniz ürünün çeşidininin numarasını giriniz: ";
                }
                cin >> secim3;
                cout << endl;
                switch (secim3)
                {
                case 1:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "B";
                    }
                    cout << "eyaz tabak sayısını giriniz: "; cin >> cesit.beyaztabak;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                case 2:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "R";
                    }
                    cout << "enkli tabak sayısını giriniz: "; cin >> cesit.renklitabak;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                case 3:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "D";
                    }
                    cout << "esenli tabak sayısını giriniz: "; cin >> cesit.desenlitabak;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                default:
                    for (k = 4; k < 5; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Hatalı giriş yaptınız!" << endl;
                    }                    
                }
                break;
            }
            case 2:
            {
                for (k = 2; k < 3; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "1";
                }
                cout << ". Çay Bardağı" << endl;
                cout << "2. Su Bardağı" << endl;
                cout << "3. Kupa Bardak" << endl;
                for (k = 6; k < 7; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "Değiştirmek istediğiniz ürünün çeşidininin numarasını giriniz: "; 
                }
                cin >> secim4;
                cout << endl;
                switch (secim4)
                {
                case 1:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Ç";
                    }
                    cout << "ay bardağı sayısını giriniz: "; cin >> cesit.caybardagi;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                case 2:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "S";
                    }
                    cout << "u bardağı sayısını giriniz: "; cin >> cesit.subardagi;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                case 3:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "K";
                    }
                    cout << "upa Bardak sayısını giriniz: "; cin >> cesit.kupabardak;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                default:
                    for (k = 4; k < 5; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Hatalı giriş yaptınız!" << endl;
                    }
                    
                }
                break;
            }
            case 3:
            {
                for (k = 2; k < 3; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "1";
                }
                cout << ". Kısa Çatal Kaşık" << endl;
                cout << "2. Orta Çatal Kaşık" << endl;
                cout << "3. Uzun Çatal Kaşık" << endl;
                for (k = 6; k < 7; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "Değiştirmek istediğiniz ürünün çeşidininin numarasını giriniz: ";
                }
                cin >> secim5;
                cout << endl;
                switch (secim5)
                {
                case 1:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "K";
                    }
                    cout << "ısa Çatal Kaşık sayısını giriniz: "; cin >> cesit.kisacatalkasik;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                case 2:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "O";
                    }
                    cout << "rta Çatal Kaşık sayısını giriniz: "; cin >> cesit.ortacatalkasik;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                case 3:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "U";
                    }
                    cout << "zun Çatal Kaşık sayısını giriniz: "; cin >> cesit.uzuncatalkasik;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                default:
                    for (k = 4; k < 5; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Hatalı giriş yaptınız!" << endl;
                    }
                }
                break;
            }
            case 4:
            {
                for (k = 2; k < 3; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "1";
                }
                cout << ". Çelik Tencere" << endl;
                cout << "2. Granit Tencere" << endl;
                for (k = 6; k < 7; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "Değiştirmek istediğiniz ürünün çeşidininin numarasını giriniz: ";
                }
                cin >> secim6;
                cout << endl;
                switch (secim6)
                {
                case 1:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Ç";
                    }
                    cout << "elik Tencere sayısını giriniz: "; cin >> cesit.celiktencere;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                case 2:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "G";
                    }
                    cout << "ranit Tencere sayısını giriniz: "; cin >> cesit.granittencere;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                default:
                    for (k = 4; k < 5; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Hatalı giriş yaptınız!" << endl;
                    }
                    
                }
                break;
            }
            case 5:
            {
                for (k = 2; k < 3; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "1";
                }
                cout << ". Dikdörtgen Saklama Kabı" << endl;
                cout << "2. Kare Saklama Kabı" << endl;
                cout << "3. Yuvarlak Saklama Kabı" << endl;
                for (k = 6; k < 7; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "Değiştirmek istediğiniz ürünün çeşidininin numarasını giriniz: ";
                }
                cin >> secim7;
                cout << endl;
                switch (secim7)
                {
                case 1:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "D";
                    }
                    cout << "ikdörtgen Saklama Kabı sayısını giriniz: "; cin >> cesit.dikdortsakkab;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                case 2:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "K";
                    }
                    cout << "are Saklama Kabı sayısını giriniz: "; cin >> cesit.karesakkab;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                case 3:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Y";
                    }
                    cout << "uvarlak Saklama Kabı sayısını giriniz: "; cin >> cesit.yuvsakkab;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                default:
                    for (k = 4; k < 5; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Hatalı giriş yaptınız!" << endl;
                    }
                }
                break;
            }
            case 6:
            {
                for (k = 2; k < 3; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "1";
                }
                cout << ". Kızartma Tavası" << endl;
                cout << "2. Pişirme Tavası" << endl;
                for (k = 6; k < 7; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "Değiştirmek istediğiniz ürünün çeşidininin numarasını giriniz: ";
                }
                cin >> secim8;
                cout << endl;
                switch (secim8)
                {
                case 1:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "K";
                    }
                    cout << "ızartma Tavası sayısını giriniz: "; cin >> cesit.kizartmatava;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                case 2:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "P";
                    }
                    cout << "işirme Tavası sayısını giriniz: "; cin >> cesit.pisirmetava;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                default:
                    for (k = 4; k < 5; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Hatalı giriş yaptınız!" << endl;

                    }
                }
                break;
            }
            case 7:
            {
                for (k = 2; k < 3; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "1";
                }
                cout << ". El Süpürgesi" << endl;
                cout << "2. Elektrikli Süpürge" << endl;
                for (k = 6; k < 7; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "Değiştirmek istediğiniz ürünün çeşidininin numarasını giriniz: ";
                }
                cin >> secim9;
                cout << endl;
                switch (secim9)
                {
                case 1:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "E";
                    }
                    cout << "l Süpürgesi sayısını giriniz: "; cin >> cesit.elsupurge;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }
                case 2:
                {
                    ofstream dosya("zuccaciyestok.dat", ios::binary);

                    for (k = 9; k < 10; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "E";
                    }
                    cout << "lektrikli Süpürge sayısını giriniz: "; cin >> cesit.elektriksupurge;

                    dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                    for (k = 13; k < 14; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Kayıt Başarılı!" << endl;
                    }
                    dosya.close();
                    break;
                }   
                default:
                    for (k = 4; k < 5; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Hatalı giriş yaptınız!" << endl;
                    }
                }
                break;
            }
            default:
                for (k = 4; k < 5; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "Hatalı giriş yaptınız!" << endl;
                }     
            }
            break;
        } 
        case 4:
        {
            do
            {
                for (k = 2; k < 3; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "1";
                }
                cout << ". Tabak" << endl;
                cout << "2. Bardak" << endl;
                cout << "3. Çatal Kaşık" << endl;
                cout << "4. Tencere" << endl;
                cout << "5. Saklama Kabı" << endl;
                cout << "6. Tava" << endl;
                cout << "7. Süpürge" << endl;
                for (k = 6; k < 7; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "Stoktan düşmek için sayının başına eksi koyunuz." << endl;
                    cout << "Stok eklemek ya da stoktan düşmek istediğiniz ürünün numarasını giriniz: "; 
                }
                cin >> secim10;
                cout << endl;
                switch (secim10)
                {
                case 1:
                {
                    for (k = 2; k < 3; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "1";
                    }
                    cout << ". Beyaz Tabak" << endl;
                    cout << "2. Renkli Tabak" << endl;
                    cout << "3. Desenli Tabak" << endl;
                    for (k = 6; k < 7; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "İşlem yapmak istediğiniz ürünün çeşidininin numarasını giriniz: "; 
                    }
                    cin >> secim11;
                    cout << endl;
                    switch (secim11)
                    {
                    case 1:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.beyaztabak << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> bts;
                            cesit.beyaztabak = cesit.beyaztabak + (bts);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.beyaztabak << endl;

                            }
                            dosya.close();
                        }
                        break;
                    }
                    case 2:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.renklitabak << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> rts;
                            cesit.renklitabak = cesit.renklitabak + (rts);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.renklitabak << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    case 3:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.desenlitabak << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);
                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> dts;
                            cesit.desenlitabak = cesit.desenlitabak + (dts);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.desenlitabak << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    default:
                        for (k = 4; k < 5; k++)
                        {
                            SetConsoleTextAttribute(hConsole, k);
                            cout << "Hatalı giriş yaptınız!" << endl;
                        }
                    }
                    break;
                }
                case 2:
                {
                    for (k = 2; k < 3; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "1";
                    }
                    cout << ". Çay Bardağı" << endl;
                    cout << "2. Su Bardağı" << endl;
                    cout << "3. Kupa Bardak" << endl;
                    for (k = 6; k < 7; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "İşlem yapmak istediğiniz ürünün çeşidininin numarasını giriniz: ";
                    }
                    cin >> secim12;
                    cout << endl;
                    switch (secim12)
                    {
                    case 1:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.caybardagi << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> cbs;
                            cesit.caybardagi = cesit.caybardagi + (cbs);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.caybardagi << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    case 2:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.subardagi << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> sbs;
                            cesit.subardagi = cesit.subardagi + (sbs);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.subardagi << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    case 3:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.kupabardak << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> kbs;
                            cesit.kupabardak = cesit.kupabardak + (kbs);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.kupabardak << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    default:
                        for (k = 4; k < 5; k++)
                        {
                            SetConsoleTextAttribute(hConsole, k);
                            cout << "Hatalı giriş yaptınız!" << endl;
                        }
                    }
                    break;
                }
                case 3:
                {
                    for (k = 2; k < 3; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "1";
                    }
                    cout << ". Kısa Çatal Kaşık" << endl;
                    cout << "2. Orta Çatal Kaşık" << endl;
                    cout << "3. Uzun Çatal Kaşık" << endl;
                    for (k = 6; k < 7; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "İşlem yapmak istediğiniz ürünün çeşidininin numarasını giriniz: "; 
                    }
                    cin >> secim13;
                    cout << endl;
                    switch (secim13)
                    {
                    case 1:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.kisacatalkasik << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> kcks;
                            cesit.kisacatalkasik = cesit.kisacatalkasik + (kcks);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.kisacatalkasik << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    case 2:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.ortacatalkasik << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> ocks;
                            cesit.ortacatalkasik = cesit.ortacatalkasik + (ocks);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.ortacatalkasik << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    case 3:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.uzuncatalkasik << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> ucks;
                            cesit.uzuncatalkasik = cesit.uzuncatalkasik + (ucks);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.uzuncatalkasik << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    default:
                        for (k = 4; k < 5; k++)
                        {
                            SetConsoleTextAttribute(hConsole, k);
                            cout << "Hatalı giriş yaptınız!" << endl;
                        }
                    }
                    break;
                }
                case 4:
                {
                    for (k = 2; k < 3; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "1";
                    }
                    cout << ". Çelik Tencere" << endl;
                    cout << "2. Granit Tencere" << endl;
                    for (k = 6; k < 7; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "İşlem yapmak istediğiniz ürünün çeşidininin numarasını giriniz: "; 
                    }
                    cin >> secim14;
                    cout << endl;
                    switch (secim14)
                    {
                    case 1:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.celiktencere << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> cts;
                            cesit.celiktencere = cesit.celiktencere + (cts);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.celiktencere << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    case 2:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.granittencere << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> gts;
                            cesit.granittencere = cesit.granittencere + (gts);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.granittencere << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    default:
                        for (k = 4; k < 5; k++)
                        {
                            SetConsoleTextAttribute(hConsole, k);
                            cout << "Hatalı giriş yaptınız!" << endl;
                        }
                    }
                    break;
                }
                case 5:
                {
                    for (k = 2; k < 3; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "1";
                    }
                    cout << ". Dikdörtgen Saklama Kabı" << endl;
                    cout << "2. Kare Saklama Kabı" << endl;
                    cout << "3. Yuvarlak Saklama Kabı" << endl;
                    for (k = 6; k < 7; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "İşlem yapmak istediğiniz ürünün çeşidininin numarasını giriniz: "; 
                    }
                    cin >> secim15;
                    cout << endl;
                    switch (secim15)
                    {
                    case 1:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.dikdortsakkab << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> dsks;
                            cesit.dikdortsakkab = cesit.dikdortsakkab + (dsks);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.dikdortsakkab << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    case 2:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.karesakkab << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> ksks;
                            cesit.karesakkab = cesit.karesakkab + (ksks);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.karesakkab << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    case 3:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.yuvsakkab << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> ysks;
                            cesit.yuvsakkab = cesit.yuvsakkab + (ysks);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.yuvsakkab << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    default:
                        for (k = 4; k < 5; k++)
                        {
                            SetConsoleTextAttribute(hConsole, k);
                            cout << "Hatalı giriş yaptınız!" << endl;
                        }
                    }
                    break;
                }
                case 6:
                {
                    for (k = 2; k < 3; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "1";
                    }
                    cout << ". Kızartma Tavası" << endl;
                    cout << "2. Pişirme Tavası" << endl;
                    for (k = 6; k < 7; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "İşlem yapmak istediğiniz ürünün çeşidininin numarasını giriniz: "; 
                    }
                    cin >> secim16;
                    cout << endl;
                    switch (secim16)
                    {
                    case 1:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.kizartmatava << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> kts;
                            cesit.kizartmatava = cesit.kizartmatava + (kts);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.kizartmatava << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    case 2:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.pisirmetava << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> pts;
                            cesit.pisirmetava = cesit.pisirmetava + (pts);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.pisirmetava << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    default:
                        for (k = 4; k < 5; k++)
                        {
                            SetConsoleTextAttribute(hConsole, k);
                            cout << "Hatalı giriş yaptınız!" << endl;
                        }
                    }
                    break;
                }
                case 7:
                {
                    for (k = 2; k < 3; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "1";
                    }
                    cout << ". El Süpürgesi" << endl;
                    cout << "2. Elektrikli Süpürge" << endl;
                    for (k = 6; k < 7; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "İşlem yapmak istediğiniz ürünün çeşidininin numarasını giriniz: "; 
                    }
                    cin >> secim17;
                    cout << endl;
                    switch (secim17)
                    {
                    case 1:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.elsupurge << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> elss;
                            cesit.elsupurge = cesit.elsupurge + (elss);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.elsupurge << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    case 2:
                    {
                        {
                            ifstream dosya("zuccaciyestok.dat", ios::binary);
                            dosya.seekg(0, ios::end);
                            int kayitsayisi = dosya.tellg() / sizeof(cesit);
                            dosya.close();
                            {
                                ifstream dosya;
                                dosya.open("zuccaciyestok.dat", ios::binary);

                                if (kayitsayisi > 0)
                                {
                                    for (int j = 0; j < kayitsayisi; j++)
                                    {
                                        dosya.seekg(j * sizeof(cesit));
                                        dosya.read(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                                        for (k = 4; k < 5; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Uyarı -> Lütfen mevcut stoktan daha düşük bir değer girmeyiniz!" << endl;
                                        }
                                        for (k = 9; k < 10; k++)
                                        {
                                            SetConsoleTextAttribute(hConsole, k);
                                            cout << "Mevcut ürün stoğu: " << cesit.elektriksupurge << endl;
                                        }
                                        dosya.close();
                                    }
                                }
                            }
                        }
                        {
                            ofstream dosya("zuccaciyestok.dat", ios::binary);

                            for (k = 9; k < 10; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "D";
                            }
                            cout << "eğişen stok miktarını giriniz: "; cin >> ess;
                            cesit.elektriksupurge = cesit.elektriksupurge + (ess);

                            dosya.write(reinterpret_cast<char*>(&cesit), sizeof(cesit));
                            for (k = 13; k < 14; k++)
                            {
                                SetConsoleTextAttribute(hConsole, k);
                                cout << "Kayıt Başarılı!    Yeni stok --> " << cesit.elektriksupurge << endl;
                            }
                            dosya.close();
                        }
                        break;
                    }
                    default:
                        for (k = 4; k < 5; k++)
                        {
                            SetConsoleTextAttribute(hConsole, k);
                            cout << "Hatalı giriş yaptınız!" << endl;
                        }
                    }
                    break;
                }
                default:
                    for (k = 4; k < 5; k++)
                    {
                        SetConsoleTextAttribute(hConsole, k);
                        cout << "Hatalı giriş yaptınız!" << endl;
                    }
                }
                for (k = 6; k < 7; k++)
                {
                    SetConsoleTextAttribute(hConsole, k);
                    cout << "Devam Etmek İçin [b/B], İşlemi Bitirmek İçin [c/C]: "; 
                }
                cin >> cıkıs2;
            } while (cıkıs2 == 'b' || cıkıs2 == 'B');
            break;
        }
        default:
            for (k = 4; k < 5; k++)
            {
                SetConsoleTextAttribute(hConsole, k);
                cout << "Hatalı giriş yaptınız!" << endl;
            }
        }
        for (k = 6; k < 7; k++)
        {
            SetConsoleTextAttribute(hConsole, k);
            cout << "Menüye Dönmek İçin [m/M], Programdan Çıkmak İçin [c/C]: "; 
        }
        cin >> cıkıs1;
    } while (cıkıs1 == 'm' || cıkıs1 == 'M');

    return 0;
}