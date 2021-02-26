#include <iostream>
#include <conio.h>


using namespace std;

int main()
{

int sayi;
int Toplam=0;

cout << "1'den N'ye kadar olan sayilarin Toplami !"<<endl;
cout << "\nBir N sayisi giriniz : ";
cin>>sayi;

while (sayi>0)
{
    Toplam = Toplam + sayi;
    sayi--;
}
 cout<< "SONUC : "<< Toplam;

getch();
return 0;
}
