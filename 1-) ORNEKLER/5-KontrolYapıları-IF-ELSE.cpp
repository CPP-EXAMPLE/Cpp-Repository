#include <iostream>
#include <conio.h>

//keremerguner

using namespace std;

int main()
{

string isim;
string soyisim;
string KullaniciAdi;
string email;
string KontrolEmail;
string parola;
string KontrolParola;

cout << "Isiminizi Giriniz : " ;
cin >> isim ; 

cout << endl << "Soyisminizi Giriniz : ";
cin >> soyisim ;

cout << endl << "Bir Kullanici Adi Giriniz : ";
cin >> KullaniciAdi;

menu :
cout << endl << "Bir E-Mail Giriniz : ";
cin >> email;

cout << endl << "Tekrar E-Mail Giriniz : ";
cin >> KontrolEmail;

cout << endl << "Bir Parola Giriniz : ";
cin >> parola;

cout << endl << "Tekrar Parola Giriniz : ";
cin >> KontrolParola;


if (email == KontrolEmail && parola  == KontrolParola)
{
    cout << endl <<  "Basarili bir sekilde kaydiniz gerceklesti !" ;
}

else
{ 
    cout << endl << "Birbiriyle eslesmeyen Parola veya Email ! " << endl << "Lutfen kontrol ettikten sonra tekrar deneyin !" << endl;
    goto menu;
}

    getch();
    return 0;
}