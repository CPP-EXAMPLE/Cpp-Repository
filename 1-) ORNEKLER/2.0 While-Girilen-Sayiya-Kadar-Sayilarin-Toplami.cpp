#include <iostream>

using namespace std;

int main()
{

int sayi;
int Toplam=0;

cout << "1'den N'ye kadar olan sayilarin Toplami !"<<endl;
cout << "Bir N sayisi giriniz : ";
cin>>sayi;

while (sayi>0)
{
    Toplam = Toplam + sayi;
    sayi--;
}
 cout<< "SONUC : "<< Toplam;

return 0;
}
