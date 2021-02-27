#include <iostream>
#include <conio.h>

using namespace std;

int main()
{   

    int x,y,z,t,k;
    float toplam=0;

    cout << "KISA SINAV 1 Notunuzu Giriniz : ";
    cin >> x;
    if (x<= 100 && x>=0)
    {
        cout << "KISA SINAV 2 Notunuzu Giriniz : ";
        cin >> y; 
        if (y<= 100 && y>=0)
        {
        
            cout << "ODEV Notunuzu Giriniz : ";
            cin >> z;
            if (z<= 100 && z>=0)
            {
    
                 cout << "ARA SINAV Notunuzu Giriniz : ";
                 cin >> t;
                 if (t<= 100 && t>=0)
                 {
                   

                    cout << "FINAL SINAV Notunuzu Giriniz : ";
                    cin >> k;
                    if (k<= 100 && k>=0)
                    {
                     

    toplam = (x*0.05) + (y*0.05) + (z*0.1) + (t*0.2) + (k*0.6);


    if (toplam<= 100 && toplam>87.5)
    {
        cout << endl << endl << "SAYI BAZLI NOT   :   " << toplam <<endl<< "HARF BAZLI NOT   :   "<< "AA";
    }
    else if (toplam<= 87.5 && toplam>75)
    {
        cout << endl << endl << "SAYI BAZLI NOT   :   " << toplam <<endl<< "HARF BAZLI NOT   :   "<< "BA";
    }
     else if (toplam<= 75 && toplam>62.5)
    {
        cout << endl << endl << "SAYI BAZLI NOT   :   " << toplam <<endl<< "HARF BAZLI NOT   :   "<< "BB";
    }
     else if (toplam<= 62.5 && toplam>50)
    {
        cout << endl << endl << "SAYI BAZLI NOT   :   " << toplam <<endl<< "HARF BAZLI NOT   :   "<< "CB";
    }
     else if (toplam<= 50 && toplam>37.5)
    {
        cout << endl << endl << "SAYI BAZLI NOT   :   " << toplam <<endl<< "HARF BAZLI NOT   :   "<< "CC";
    }
    else if (toplam<= 37.5 && toplam>25)
    {
        cout << endl << endl << "SAYI BAZLI NOT   :   " << toplam <<endl<< "HARF BAZLI NOT   :   "<< "DC";
    }
    else if (toplam<= 25 && toplam>12.5)
    {
        cout << endl << endl << "SAYI BAZLI NOT   :   " << toplam <<endl<< "HARF BAZLI NOT   :   "<< "DD";
    }
    else if (toplam<= 12.5 && toplam>0)
    {
        cout << endl << endl << "SAYI BAZLI NOT   :   " << toplam <<endl<< "HARF BAZLI NOT   :   "<< "FD";
    }
    else if (toplam == 0)
    {
        cout << endl << endl << "SAYI BAZLI NOT   :   " << toplam <<endl<< "HARF BAZLI NOT   :   "<< "FF";
    }
    else
    {
        cout << endl << endl << "HATA ! HATA ! HATA ! HATA ! HATA !";
    }
    }
    else 
    {
        cout << "HATA ! ! !";
    }
    }
    else 
    {
        cout << "HATA ! ! !";
    }
    }
    else 
    {
        cout << "HATA ! ! !";
    }
    }
    else 
    {
        cout << "HATA ! ! !";
    }
    }  
    else 
    {
        cout << "HATA ! ! !";
    }



    getch();
    return 0;
}