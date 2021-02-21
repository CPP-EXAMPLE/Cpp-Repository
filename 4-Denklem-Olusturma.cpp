#include <iostream>
#include <conio.h>


using namespace std;

int main()
{


    int x,y,z,t;

    cout << " Denklem = (2x + (1/2)y - z * 7t) " << endl << endl << " Dort tane sayi giriniz : " << endl;

    cin >> x >> y >> z >> t ;

    cout << " Denklem Sonucu : " <<( (2*x) + (0.5*y) - (7*t*z) ) ; 

    getch();
    return 0;
}
