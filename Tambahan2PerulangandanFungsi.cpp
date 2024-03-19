#include <iostream>
using namespace std;

int main ()
{
    string pilihan;
    do    
    {
        cout << "makan" << endl;
        cout << "mandi" << endl;
        cout << "ibadah" << endl;

        cout << "apakah anda masih hidup? (Y/N)";
        cin >> pilihan;
    } while (pilihan == "Y");
}