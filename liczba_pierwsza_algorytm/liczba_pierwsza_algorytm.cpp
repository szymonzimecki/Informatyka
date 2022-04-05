#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

int main()
{
    int do_ktorej, lp, p;

    chrono::system_clock::time_point start = chrono::system_clock::now();	// czas start

    cout << "Podaj do ktorej liczby chcesz sprawdzic: ";
    cin >> do_ktorej;

    bool status = true;

    lp = 0;
    p = 2;

    while (lp < do_ktorej)
    {
        for (int d = 2; d <= p - 1; d++)
        {
            if (p % d == 0) {
                status = false;
            }
        }

        if (status == true)
        {
            cout << p << endl;
            lp += 1;
        }

        status = true;

        p += 1;

    }
    chrono::system_clock::time_point end = chrono::system_clock::now(); // czas stop

    elapsed_seconds += end - start;	// obliczenie czasu

    cout << chrono::duration_cast<chrono::seconds>(elapsed_seconds).count() << "\t seconds\n";

    return 0;
}