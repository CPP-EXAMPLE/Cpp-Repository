#include <iostream>
#include <conio.h>

// 1'den N'ye kadar olan Pozitif TEK ve CIFT sayilarin Toplamini Hesaplama

using namespace std;

int main()
{
    int sayi;
    int ciftToplam = 0;
    int tekToplam = 0;

    cout << "Bir Sayi Giriniz : ";
    cin>>sayi;

        do
    {
        if (sayi % 2 == 0)
        {
            ciftToplam += sayi;
        }
        else if (sayi % 2 != 0)
        {
            tekToplam += sayi;
        }
        sayi--;
        
    }
        while (sayi>0);

        cout << "Tek Sayilar Toplami --> "<< tekToplam << endl;
        cout << "Cift Sayilar Toplami --> "<< ciftToplam;
    

    getch();
    return 0;
}
