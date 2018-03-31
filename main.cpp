#include <iostream>
#include "FuzzyRules.h"

using namespace std;

int main()
{
    int TT,WW;
    cout << "Input Nilai Test Tulis : ";
    cin >> TT;
    cout << endl << "Input Nilai Wawancara : ";
    cin >> WW;
    cout << endl;
    while ((TT != NULL)&&(WW != NULL)) {
        cout << FuzzyRules(TT,WW)<< endl;
        cout << "Input Nilai Test Tulis : ";        cin >> TT;
        cout << endl << "Input Nilai Wawancara : "; cin >> WW;
        cout << endl;
    }

    return 0;
}
