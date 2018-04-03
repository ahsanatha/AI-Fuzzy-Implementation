#include <iostream>
#include "FuzzyRules.h"
#include "Fuzzification.h"

using namespace std;

struct elm TT[2],WW[2];

int main()
{
    int inTT,inWW;
    cout << "Input Nilai Test Tulis : ";
    cin >> inTT;
    cout << "Input Nilai Wawancara : ";
    cin >> inWW;
    while ((inTT != NULL) && (inWW != NULL)) {
        TTCrisptoFuzzy(TT,inTT);
        WWCrisptoFuzzy(WW,inWW);
        cout << TT[0].fuzz << " || " << TT[1].fuzz << " || " << TT[2].fuzz << endl;
        cout << WW[0].fuzz << " || " << WW[1].fuzz << " || " << WW[2].fuzz << endl;
        cout <<endl<<"<==== "<< FuzzyRules(inTT,inWW)<<"====>"<<endl<<endl;
        cout <<endl;
        cout << "Input Nilai Test Tulis : "; cin >> inTT;
        cout << "Input Nilai Wawancara : "; cin >> inWW;
    }

    return 0;
}
