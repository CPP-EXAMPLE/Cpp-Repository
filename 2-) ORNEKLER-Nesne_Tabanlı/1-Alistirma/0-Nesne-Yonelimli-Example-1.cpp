#include <iostream>
#include <conio.h>

//keremerguner

using namespace std;

class Araba{
    public :

    int Model;
    string Marka;
    string Yakit;

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


    cout << surucu1.Model <<" "<< surucu1.Marka <<" "<< surucu1.Yakit << endl;
    cout << surucu2.Model <<" "<< surucu2.Marka <<" "<< surucu2.Yakit << endl;


    getch();
    return 0;
}
