#include <iostream>

//Depoda bulunun STOK malzeme hesabi yapan program

using namespace std;

int main()
{
    char islem;
    int mevcut,urun;

    cout << "STOK URUN HESAP PROGRAMINA HOS GELDINIZ"<< endl << endl;
    cout << "--> Urun eklemek istiyorsaniz ( + ) \n--> Urun silmek istiyorsaniz  ( - ) Komutunu giriniz."<< endl;
    cout << "Yapilacak Islem : ";
    cin >> islem ;



    switch (islem)
    {
    case '+' :
        cout << "Mevcut STOK miktarinizi giriniz : ";
        cin>> mevcut;
        cout << "Eklemek istediginiz urun miktari : "; 
        cin>> urun;
        mevcut += urun;
        cout << "Guncel STOK DURUMUNUZ : " << mevcut;
        break;

    case '-' :
        cout << "Mevcut STOK miktarinizi giriniz : ";
        cin>> mevcut;
        cout << "Cikarmak istediginiz urun miktari : ";
        cin>> urun;
        mevcut -= urun;
        cout << "Guncel STOK DURUMUNUZ : " << mevcut;
        break;

    default:
        cout << "Hatali Giris Yaptiniz !";
        break;
    }


    return 0;
}
