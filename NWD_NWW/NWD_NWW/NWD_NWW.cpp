#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

int main()
{
    int a, b, iloczyn, nww;

    chrono::system_clock::time_point start = chrono::system_clock::now();	// czas start

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

    chrono::system_clock::time_point end = chrono::system_clock::now(); // czas stop
    elapsed_seconds += end - start;	// obliczenie czasu

    cout << std::chrono::duration_cast<std::chrono::seconds>(elapsed_seconds).count() << "\t seconds\n";
}