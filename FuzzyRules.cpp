#include "FuzzyRules.h"

string ParWawancara (int b){
    if ((b >= 0) && (b <= 40))
        return "Rendah";
    else if ((b >= 40) && (b <= 80))
            return "Sedang";
        else if ((b >= 80) && (b <= 100))
                return "Tinggi";
}

string ParTesTulis (int a) {
    if ((a >= 0) && (a <= 40))
        return "Rendah";
    else if ((a >= 40) && (a <= 85))
            return "Sedang";
         else if ((a >= 85) && (a <= 100))
                return "Tinggi";
}

string FuzzyRules (int a, int b) {
    if (ParTesTulis(a) == "Rendah"){
        if (ParWawancara(b) == "Rendah")
            return "Tolak";
        else if (ParWawancara(b) == "Sedang")
            return "Tolak";
            else if (ParWawancara(b) == "Tinggi")
                    return "Terima";

    } else if (ParTesTulis(a) == "Sedang"){
            if (ParWawancara(b) == "Rendah")
                return "Tolak";
            else if (ParWawancara(b) == "Sedang")
                    return "Terima";
                else if (ParWawancara(b) == "Tinggi")
                        return "Terima";

    } else if (ParTesTulis(a) == "Tinggi"){
            if (ParWawancara(b) == "Rendah")
                return "Terima";
            else if (ParWawancara(b) == "Sedang")
                    return "Terima";
                else if (ParWawancara(b) == "Tinggi")
                        return "Terima";
    }
}
