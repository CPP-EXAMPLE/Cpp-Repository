#include <iostream>
#include <conio.h>

//keremerguner

using namespace std;

int main()
{

    int sayi;
    int x,y,z,t,k,l;
    int toplam;
    

    cout << "Maksimum 5 Haneli Bir Sayi Giriniz : " << endl;

    cin>>sayi;
    
    y=sayi%10;
    z=sayi%100/10;
    t=sayi%1000/100;
    k=sayi%10000/1000;
    l=sayi%100000/10000;

    cout << endl << "BASAMAKLAR" << endl;
    cout << "1.Bas = " << y << endl;
    cout << "2.Bas = " << z << endl;
    cout << "3.Bas = " << t << endl;
    cout << "4.Bas = " << k << endl;
    cout << "5.Bas = " << l << endl;
    

    getch();
    return 0;
}