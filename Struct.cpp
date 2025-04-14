#include <iostream>
using namespace std;

struct Hero{
    string Nama;
    string Role;
    string Tipe;
};

int main()
{
    Hero arhero[3];
    for (int i = 0; i < 3; i++){
    cout << "masukkan namahero =";
    cin >> arhero[3].Nama;
    cout << "masukkan jenis role=";
    cin >> arhero[3].Role;
    cout << "masukkan tipe hero=";
    cin >> arhero[3].Tipe;
    }

    cout << endl;
    cout << " Tampilkan Hero" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++){
    cout << "Nama Hero = " << arhero[3].Nama << endl;
    cout << "Jenis Role Hero = " << arhero[3].Role << endl;
    cout << "Type Hero = " << arhero[3].Tipe << endl;
    }

}

