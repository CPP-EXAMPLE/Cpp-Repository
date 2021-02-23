#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    int toplam,Aci_1,Aci_2,Aci_3;

    cout << "Ucgeninizin hangi tur ucgen oldugunu anlamak icin ucgenin ic acilarini giriniz " << endl;
    
    cout << "Birinci Aci = " ;
    cin >> Aci_1 ;
    cout << "Ikinci Aci = " ;
    cin >> Aci_2 ;
    cout << "Ucuncu Aci = " ;
    cin >> Aci_3 ;

    toplam = Aci_2 + Aci_3 + Aci_1;

    if ( toplam == 180)
    {
        cout << "Girdiginiz degerler bir ucgen olusturuyor. Ozel Ucgen olusturabiliyor mu ogrenmek icin ENTER tusuna basiniz !" << endl;
        getch();

         if ( Aci_1 == Aci_2 || Aci_1 == Aci_3 || Aci_2 == Aci_3 )
        {
            if ( Aci_1 == Aci_2 && Aci_1 == Aci_3 && Aci_2 == Aci_3)
            {
            cout << "Ucgenininz  ES KENAR UCGEN'dir !";
            }
            else
            {   
            cout << "Ucgenininiz IKIZ KENAR UCGEN'dir !" ;
            }
        }
        
        else if ( Aci_1 != Aci_2 || Aci_1 != Aci_3 || Aci_2 != Aci_3)
        {
            cout << "Ucgenininiz CESIT KENAR UCGEN'dir !";
        }
    }
    else
    {
        cout << "Ucgenlerin ic acilari 180'e esit degil ! ";
    }

    getch();
    return 0;
}