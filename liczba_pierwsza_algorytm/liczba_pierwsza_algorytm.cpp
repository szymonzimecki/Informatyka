#include <iostream>
using namespace std;

int main()
{
    int do_ktorej, lp, p;

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



    return 0;
}