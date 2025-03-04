#include <stdio.h>
#include <string.h>

int main() {

    char str[10000];
    scanf("%[^\n]", str);
    int nrcuvinte = 0;
    char sir[20][30];

    char* p = strtok(str, " ");
    while (p != NULL) {
        strcpy(sir[nrcuvinte], p);
        nrcuvinte++;
        p = strtok(NULL, " ");
    }
    char temp[100];

    for (int i = 0;i < nrcuvinte - 1;i++) {
        for (int j = i + 1;j < nrcuvinte;j++) {
            if (strlen(sir[i]) < strlen(sir[j])) {
                strcpy(temp, sir[i]);
                strcpy(sir[i], sir[j]);
                strcpy(sir[j], temp);
            }
            else if (strlen(sir[i]) == strlen(sir[j]) && strcmp(sir[i], sir[j]) > 0) {
                strcpy(temp, sir[i]);
                strcpy(sir[i], sir[j]);
                strcpy(sir[j], temp);
            }
        }
    }
    for (int i = 0;i < nrcuvinte;i++) {
        printf("%s\n", sir[i]);
    }
    return 0;
}