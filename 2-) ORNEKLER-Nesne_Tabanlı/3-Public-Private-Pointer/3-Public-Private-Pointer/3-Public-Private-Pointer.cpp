#include <iostream>

using namespace std;

class Araba {

    private :
        int Model;

    public :
        string Marka;


    public:

        void setModel(int copyModel) {
            Model = copyModel;
        };
        void setMarka(string copyMarka) {
            Marka = copyMarka;
        };

        int getModel() {
            return Model;
        }

        string getMarka() {
            return Marka;     
        }
    
};

int main()
{


    Araba* car1 = new Araba();

    car1->setModel(1996);
    car1->setMarka("TOFAS");

    cout << "Marka : " << car1->getMarka() << endl << "Model : " << car1->getModel();

    return 0;
}