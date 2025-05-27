#include <unistd.h>

int pw_count_e(char *str) {
    int count = 0;
    int i = 0;

    if (str == 0)  // Vérifie si la chaîne est NULL
        return 0;

    while (str[i] != '\0') {
        if (str[i] == 'e') {
            count++;
        }
        i++;
    }

    return count;
}
