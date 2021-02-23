#include <iostream>


using namespace std;

int main()
{
    
    int islemNO;
    float sayi1,sayi2;
    float toplama,cikarma,carpma,bolme,kareAl;
    
    

    menu : 

    cout << endl <<"<----Hesap Makinesi---->" << endl << endl;

    cout <<"1-)Toplama"<< endl <<"2-)Cikarma"<< endl <<"3-)Carpma" << endl << "4-)Bolme" <<endl <<"5-)Karesini Alma"<< endl << endl;

    cout <<"Yapmak istediginiz islem NO'sunu giriniz : ";

    cin>>islemNO;


    if ( islemNO == 1 )
    {
        cout << endl << "Birinci sayiyi giriniz : ";
        cin>>sayi1;
        cout << endl << "Ikinci sayiyi giriniz : ";
        cin>>sayi2;

        toplama = sayi1 + sayi2;

        cout << endl << "Toplama Islemi Sonucu : " << toplama;
    }
    else if (islemNO == 2)
    {
        cout << endl << "Birinci sayiyi giriniz : ";
        cin>>sayi1;
        cout << endl << "Ikinci sayiyi giriniz : ";
        cin>>sayi2;

        cikarma = sayi1 - sayi2;

        cout << endl << "Cikarma Islemi Sonucu : " << cikarma;
    }
    else if (islemNO == 3)
    {
        cout << endl << "Birinci sayiyi giriniz : ";
        cin>>sayi1;
        cout << endl << "Ikinci sayiyi giriniz : ";
        cin>>sayi2;

        carpma = sayi1 * sayi2;

        cout << endl << "Carpma Islemi Sonucu : " << carpma;
    }
    else if (islemNO == 4)
    {
        cout << endl << "Birinci sayiyi giriniz : ";
        cin>>sayi1;
        cout << endl << "Ikinci sayiyi giriniz : ";
        cin>>sayi2;

        bolme = sayi1 / sayi2;

        cout << endl << "Bolme Islemi Sonucu : " << bolme;
    }
    else if (islemNO == 5)
    {
        cout << endl << "Karesini almak istediginiz sayiyi giriniz : ";
        cin>>sayi1;

        kareAl = sayi1 * sayi1;

        cout << endl << "Kare Alma Islemi Sonucu : " << kareAl;
    }
    else 
    {
        cout << endl << "Hatali Giris ! Lutfen tekrar deneyiniz !"<< endl;
    }

    cout << endl << endl << "Yeni bir islem yapmak icin ENTER tusuna basiniz ! "<< endl;
    
    

    goto menu ;
    return 0;
}