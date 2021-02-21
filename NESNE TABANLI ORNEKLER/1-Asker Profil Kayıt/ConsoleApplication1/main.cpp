#include <iostream>
#include "asker.h"


using namespace std;


int main() {

    Asker asker1,asker2;

    asker1.isim = "Ertugrul";
    asker1.Rutbe = "Komando";
    asker1.Yas = 25;

    asker1.BilgileriYazdir();

    asker2.isim = "Fatih";
    asker2.Rutbe = "Yarbay";
    asker2.Yas = 36;

    asker2.BilgileriYazdir();


    return 0;
}