#include <stdio.h>
#include <stdlib.h>
int ConversieNumar(const char* sir) {
    int numar = 0;
    for (int i = 0;sir[i] != '\0';i++) {
        int cifra = sir[i] - '0';
        numar = numar * 10 + cifra;
    }
    return numar;
}

int main() {
    FILE* fisier;
    fisier = fopen("in.txt", "r");
    int suma = 0;
    char sir[1000];
    while (fscanf(fisier, "%s", sir) != EOF) {
        suma += ConversieNumar(sir);
    }
    printf("%d", suma);
    fclose(fisier);
    return 0;
}