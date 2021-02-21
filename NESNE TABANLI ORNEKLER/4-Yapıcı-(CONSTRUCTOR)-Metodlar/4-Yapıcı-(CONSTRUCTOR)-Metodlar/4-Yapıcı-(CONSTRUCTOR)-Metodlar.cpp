#include <iostream>

using namespace std;

class Araba {

private:
    int Model;
    string Marka;


public:

    Araba(int copyModel, string copyMarka) {
        Model = copyModel;
        Marka = copyMarka;
    }

    /*int getModel() {
        return Model;
    }

    string getMarka() {
        return Marka;
    }*/

    void BilgileriYaz() {

        cout << "Marka : " << Marka << endl << "Model : " << Model;
    };
};

int main()
{

    Araba car1(1996, "TOYOTA SUPRA");

    car1.BilgileriYaz();

    //cout << "Model : " << car1.getModel() << endl << "Marka : " << car1.getMarka();

    //Eger 19.satırı kullanmak istiyorsak ve 40. satırdaki gibi ekrana bastırmayı istiyorsak, 27. satırda bulunan fonksiyonu silmemiz gerekir.
    //Sonuc olarak fonksiyon kullandık ve get komutlarından kurtulduk.

    return 0;
}

