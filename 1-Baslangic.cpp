#include <iostream> //Input-Output-Stream
#include <conio.h> //VisualCode kullananlar ve getch(); komutunu kullanmak isteyenler icin kutuphane

//keremerguner
//consol out -- end line -- consol in //

using namespace std; // Kullan - Bos bir isim - Standart 

int main()
{

    cout << "Hello World!" << endl << endl ;

    int number1, number2;
    int toplam;

    

    cout << "Iki Tane Sayi Giriniz : " << endl;

    cin >> number1 >> number2;

    toplam=number1+number2;

    cout <<"First Number : " << number1<<endl<<"Two Number : "<<number2 <<endl << "Toplam : "<<toplam << endl ; 
    
    cout << "Bolum Sonucu : " << float(number1)/number2<<endl ;          //eğer bir tane numarayı float yaparsan işlem sonucu float olur
                                                                         //eğer işlemin hepsini float yaparsan somnuc integer olur


    getch();
    return 0;


}