#include "Fuzzification.h"

void TTCrisptoFuzzy(elm arrTT[2], int C){
    //keanggotaan rendah
    if ((C >= 0) && (C <= 30)) {
        arrTT[0].tipe = "Rendah";
        arrTT[0].fuzz = 1.0;
    } else if ((C > 30) && (C <= 50)){
        arrTT[0].tipe = "Rendah";
        arrTT[0].fuzz = -((C - 50.0)/(50.0-30.0));
    }
    //keanggotaan sedang
    if ((C > 30) && (C < 50)) {
        arrTT[1].tipe = "Sedang";
        arrTT[1].fuzz = 1.0 - arrTT[0].fuzz;
    } else if ((C >= 50) && (C <= 75)){
        arrTT[1].tipe = "Sedang";
        arrTT[1].fuzz = 1.0;
    } else if ((C > 75) && (C < 95)){
        arrTT[1].tipe = "Sedang";
        arrTT[1].fuzz = -((C - 95.0)/(95.0 - 75.0));
    }
    //keanggotaan tinggi
    if ((C > 75) && (C < 95)){
        arrTT[2].tipe = "Tinggi";
        arrTT[2].fuzz = 1.0 - arrTT[1].fuzz;
    } else if ((C >= 95) && (C <= 100)) {
        arrTT[2].tipe = "Tinggi";
        arrTT[2].fuzz = 1.0;
    }
}

void WWCrisptoFuzzy(elm WW[], int C){
    //keanggotaan rendah
    if ((C >= 0) && (C <= 30)) {
        WW[0].tipe = "Rendah";
        WW[0].fuzz = 1.0;
    } else if ((C > 30) && (C <= 50)){
        WW[0].tipe = "Rendah";
        WW[0].fuzz = -((C - 50.0)/(50.0-30.0));
    }
    //keanggotaan sedang
    if ((C > 30) && (C < 50)) {
        WW[1].tipe = "Sedang";
        WW[1].fuzz = 1.0 - WW[0].fuzz;
    } else if ((C >= 50) && (C <= 70)){
        WW[1].tipe = "Sedang";
        WW[1].fuzz = 1.0;
    } else if ((C > 70) && (C < 90)){
        WW[1].tipe = "Sedang";
        WW[1].fuzz = -((C - 90.0)/(90.0 - 70.0));
    }
    //keanggotaan tinggi
    if ((C > 70) && (C < 90)){
        WW[2].tipe = "Tinggi";
        WW[2].fuzz = 1.0 - WW[1].fuzz;
    } else if ((C >= 90) && (C <= 100)) {
        WW[2].tipe = "Tinggi";
        WW[2].fuzz = 1.0;
    }
}
/**
void TTCrisptoFuzzy(TesTulis &TT, int C){
    //keanggotaan rendah
    if ((C >= 0) && (C <= 30)) {
        TT.rendah.tipe = "Rendah";
        TT.rendah.fuzz = 1.0;
    } else if ((C > 30) && (C <= 50)){
        TT.rendah.tipe = "Rendah";
        TT.rendah.fuzz = -((C - 50)/(50-30));
    }
    //keanggotaan sedang
    if ((C > 30) && (C < 50)) {
        TT.sedang.tipe = "Sedang";
        TT.sedang.fuzz = 1.0 - TT.rendah.fuzz;
    } else if ((C >= 50) && (C <= 75)){
        TT.sedang.tipe = "Sedang";
        TT.sedang.fuzz = 1.0;
    } else if ((C > 75) && (C < 95)){
        TT.sedang.tipe = "Sedang";
        TT.sedang.fuzz = -((C - 95)/(95 - 75));
    }
    //keanggotaan tinggi
    if ((C > 75) && (C < 95)){
        TT.tinggi.tipe = "Tinggi";
        TT.tinggi.fuzz = 1.0 - TT.sedang.fuzz;
    } else if ((C >= 95) && (C <= 100)) {
        TT.rendah.tipe = "Tinggi";
        TT.rendah.fuzz = 1.0;
    }
}

void WWCrisptoFuzzy(Wawancara &WW, int C){
    //keanggotaan rendah
    if ((C >= 0) && (C <= 30)) {
        WW.rendah.tipe = "Rendah";
        WW.rendah.fuzz = 1.0;
    } else if ((C > 30) && (C <= 50)){
        WW.rendah.tipe = "Rendah";
        WW.rendah.fuzz = -((C - 50)/(50-30));
    }
    //keanggotaan sedang
    if ((C > 30) && (C < 50)) {
        WW.sedang.tipe = "Sedang";
        WW.sedang.fuzz = 1.0 - WW.rendah.fuzz;
    } else if ((C >= 50) && (C <= 70)){
        WW.sedang.tipe = "Sedang";
        WW.sedang.fuzz = 1.0;
    } else if ((C > 70) && (C < 90)){
        WW.sedang.tipe = "Sedang";
        WW.sedang.fuzz = -((C - 90)/(90 - 70));
    }
    //keanggotaan tinggi
    if ((C > 70) && (C < 90)){
        WW.tinggi.tipe = "Tinggi";
        WW.tinggi.fuzz = 1.0 - WW.sedang.fuzz;
    } else if ((C >= 90) && (C <= 100)) {
        WW.rendah.tipe = "Tinggi";
        WW.rendah.fuzz = 1.0;
    }
}
**/
