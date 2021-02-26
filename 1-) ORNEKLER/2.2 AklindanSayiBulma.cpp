#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

using namespace std;

int main()
{

int tutsayi=0;
int tahmin=0; 
int kactahmin=0;



srand(time(0));
tutsayi=rand()%100+1;


cout << "Haydi Bakalim Sayi Tuttum Bilde Gorelim Kac Seferde Bulabiliceksin !\n\n";


menu:

cout << "Bir sayi GIR  : ";
cin >> tahmin ;



if (tahmin<1 || tahmin>100) {
cout << "--> LUTFEN 1-100 Arası sayi SEC !\n";
}

kactahmin++;

if(tahmin==tutsayi) {
cout << "Tebrikler "<<kactahmin<<". denemede buldun ! \n";
}

else {
if(tahmin>tutsayi) {
cout << "-> Cok ciktin biraz iN\n\n"; goto menu;

}
else { 
    cout << "-> Biraccık daha CIK\n\n" ; goto menu; } }


getch();
return 0;
}
