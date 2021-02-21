#include <iostream>

using namespace std;

class Araba {

private:
    int Model;
    string Marka;


public:

    Araba(int Model, string Marka) {
        this->Model = Model;            //this->Model 8.satırdaki Modele ait , 2.Model ise 14. satırdakş modele ait
        this->Marka = Marka;
    }

    void BilgileriYaz() {

        cout << "Marka : " << Marka << endl << "Model : " << Model << endl;
    };

    ~Araba() {
        cout << " Nesneniz Silindi ! " << endl;
        cout << " Eger nesnenizin silindigini konsolda gormek isterseniz" << endl;
        cout << " 37. satirin altına  car1->BilgileriYaz(); fonk. kullanarak gorebilirsiniz" << endl;
    }
};

int main()
{

    Araba *car1 = new Araba(1996, "TOYOTA SUPRA");

    car1->BilgileriYaz();

    delete car1;

    return 0;
}