#include <iostream>
#include <conio.h>

//keremerguner

using namespace std;

class Araba
{   public:

    int Model;
    string Marka;
    string Yakit;


    void Yazdir(){

    cout <<"Model NO : "<< Model << endl <<"Markasi  : "<< Marka << endl <<"Yakit Turu : "<< Yakit <<endl<<endl; 

    }

};


int main()
{
    
    Araba surucu1,surucu2;

    surucu1.Model = 2020;
    surucu1.Marka = "Bmw" ;
    surucu1.Yakit = "Benzin";

    surucu2.Model = 1960;
    surucu2.Marka = "Mercedes" ;
    surucu2.Yakit = "LPG";

    surucu1.Yazdir();
    surucu2.Yazdir();


    getch();
    return 0;
}
