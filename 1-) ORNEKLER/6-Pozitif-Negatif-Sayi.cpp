#include <iostream>
#include <conio.h>

//keremerguner

using namespace std;


int main()
{
    int sayi;
    
    menu : cout << "Bir Sayi Giriniz : ";
    cin >> sayi;

    if ( sayi > 0)
    {
        cout << " Sayi POZITIFTIR !" << endl;
    }
    else if ( sayi == 0)
    {
        cout << " Sayiniz Etkisiz Elamandır !" << endl;
    }
    else 
    {
        cout << " Sayiniz NEGATIFTIR !" << endl;
    }
     goto menu ;


getch();
return 0;
}
