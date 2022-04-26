#include <iostream>
#include <chrono>

using namespace std;


chrono::duration<double> elapsed_seconds;

int wyszukiwanie(int szukana, char tab[]);

int main()
{
    int szukana;

    char tab[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };


    chrono::system_clock::time_point start = chrono::system_clock::now();	// czas start

    cout << "Podaj liczbe ktora chcesz znalezc: ";
    cin >> szukana;

    wyszukiwanie(szukana, tab);
    cout << "Liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie " << wyszukiwanie(szukana, tab) << endl;

    if (wyszukiwanie(szukana, tab) == -1) {
        cout << "Nie znalazlo liczby" << endl;
    }
    else
    {
        cout << "Znalazlo liczby" << endl;
    }

    chrono::system_clock::time_point end = chrono::system_clock::now(); // czas stop

    elapsed_seconds += end - start;	// obliczenie czasu


    cout << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count() << "\t milliseconds\n";
}

int wyszukiwanie(int szukana, char tab[]) {

    int l = 0, p = 15, sr = (l + p)/2;

    while (l <= p)
    {
        if (tab[sr] == szukana) {
            return sr;
        }
        if (tab[sr] > szukana) {
            p = sr - 1;
        }
        else
        {
            l = sr + 1;
        }

        sr = (l + p) / 2;
    }

    return -1;

}