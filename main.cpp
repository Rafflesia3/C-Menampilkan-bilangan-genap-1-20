#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i;

    cout << "\t\t\Pelita bangsa\n\n" << endl;
    cout << "==========================================\n" << endl;
    cout << "Nama : Rafi Alwan Setyawan \nNIM  : 311810325\n" << endl;
    cout << "==========================================\n" << endl;

    cout<<"PROGRAM MENAMPILKAN BILANGAN GENAP 1-20"<<endl <<endl;
    for (i=1 ; i<=20 ; i++)
    {
        if (i%2 ==0) cout <<i<<",";
    }
    cout <<endl<<endl<<endl;
    _getch ();
}
