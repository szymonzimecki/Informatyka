#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    int a, b, iloczyn, nww;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    iloczyn = a * b;

    while (a != b)
    {

        if (a < b) {
            b -= a;
        }

        else {
            a -= b;
        }
    }

    nww = iloczyn / a;

    cout << "Najwiekszy wspolny dzielnik: " << a;
    cout << endl;


    cout << "Najmniejsza wspolna wielokrotnosc: " << nww;

}