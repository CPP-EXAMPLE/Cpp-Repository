#include <iostream>

using namespace std;

class araba {
    private :
        int Model;
    
    public :
        string marka;


        void setModel(int copyModel) {
            Model = copyModel;
        };

        string getMarka() {
           return marka;
        }

        int getModel() {
            return Model;
        }
};

int main()
{
    araba car1, car2;

    // car1.Model = 2007;             Bu satiri yazmamasinin sebebi, 7. satirda Model degiskenini Private : satırında olmasından kaynaklı
       car1.marka = "PORSCHE";
       car1.setModel(2007);

       cout << car1.getMarka() << "     " << car1.getModel() << endl;


       car2.marka = "FERRARI";
       car2.setModel(2006);

       cout << car2.getMarka() << "     " << car2.getModel() << endl;

    
}
