#include <iostream>
#include <conio.h>

using namespace std;

int tek,cift,i,sayi,adet;
float tekToplam = 0 , ciftToplam = 0;


int main()
{
    cout << "Ogrenmek istediginiz sayi adedi ? = ";
    cin >> adet;
    cout << endl;
    
    for ( i = 0; i < adet; i++)
    {
        
        cout << i+1 << ". Sayiyi Gir : ";
        cin>>sayi;

        if (sayi % 2 == 0)
        {
            cift += 1;
            ciftToplam += sayi;
        }

        else
        {
            tek += 1;
            tekToplam += sayi;
        }
        

    }

            cout << endl <<" Tek sayi adedi : "<< tek << "\t" << " Tek Sayilar Toplami : " << tekToplam << "\t" << " ORTALAMA : "<<tekToplam/tek << endl ; 
            cout << "Cift sayi adedi : "<< cift << "\t" << "Cift Sayilar Toplami : "<< ciftToplam << "\t" << " ORTALAMA : "<<ciftToplam/cift ;
    






    getch();
    return 0;
}