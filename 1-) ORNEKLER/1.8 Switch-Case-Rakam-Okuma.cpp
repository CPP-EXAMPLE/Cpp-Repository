#include <iostream>


using namespace std;


int main()      
{
    int rakam;

    cout << "Rakam Okuma Programi" << endl << endl ;
    cout << " -> 0 \n -> 1 \n -> 2 \n -> 3 \n -> 4 \n -> 5 \n -> 6 \n -> 7 \n -> 8 \n -> 9 \n\n";
    cout << "Yazilisini gormek istediginiz rakami giriniz : ";
    cin>>rakam;

    switch (rakam)
    {
    case 0 :
        cout << "Rakamin yazilisi : Sifir";
        break;
    case 1 :
        cout << "Rakamin yazilisi : Bir";
        break;
    case 2 :
        cout << "Rakamin yazilisi : Iki";
        break;
    case 3 :
        cout << "Rakamin yazilisi : Uc";
        break;
    case 4 :
        cout << "Rakamin yazilisi : Dort";
        break;
    case 5 :
        cout << "Rakamin yazilisi : Bes";
        break;
    case 6 :
        cout << "Rakamin yazilisi : Alti";
        break;
    case 7 :
        cout << "Rakamin yazilisi : Yedi";
        break;
    case 8 :
        cout << "Rakamin yazilisi : Sekiz";
        break;
    case 9 :
        cout << "Rakamin yazilisi : Dokuz";
        break;
    
    default:
        cout << "Hatali Giris ! Lutfen Kontrol Edip Tekrar Deneyiniz.";
        break;
    }
    
    return 0;
}
