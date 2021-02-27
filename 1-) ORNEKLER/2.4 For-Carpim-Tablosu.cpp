#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
        int i,j;

    for (i = 1; i <= 10; i++)
    {

        for ( j = 1; j <= 10; j++)
        {

           cout << j << " x "<< i <<" = "<< i*j << "\t";

        }
        cout <<endl;

    }
   
    getch();
    return 0;
}