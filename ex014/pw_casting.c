#include <unistd.h>

int pw_casting(float f) {
    int entier;
    int caractere;
    int arrondi;

    entier = (int)f;       
    caractere = (char)f;  

    float decimal = f - (int)f;

    if (f >= 0) {
        if (decimal >= 0.5)
            arrondi = entier + 1;
        else
            arrondi = entier;
    } else {
        if (decimal <= -0.5)
            arrondi = entier - 1;
        else
            arrondi = entier;
    }

    return entier + caractere + arrondi;
}
