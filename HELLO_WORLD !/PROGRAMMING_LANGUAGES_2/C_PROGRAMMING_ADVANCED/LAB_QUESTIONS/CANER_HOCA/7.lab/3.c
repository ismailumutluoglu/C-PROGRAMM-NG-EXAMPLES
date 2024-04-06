#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *string1, *string2;

    // Bellek ayır
    string1 = (char *)malloc(100 * sizeof(char));
    if (string1 == NULL) {
        printf("Bellek tahsisi basarisiz.");
        return 1;
    }

    // Kullanıcıdan string1'i al
    printf("Bir string girin: ");
    fgets(string1, 100, stdin);

    // Bellek ayır
    string2 = (char *)malloc((strlen(string1) + 1) * sizeof(char));
    if (string2 == NULL) {
        printf("Bellek tahsisi basarisiz.");
        free(string1); // Belleği serbest bırak
        return 1;
    }

    // string1'i string2'ye kopyala
    strcpy(string2, string1);

    // İki string'i ekrana yazdır
    printf("String 1: %s", string1);
    printf("String 2: %s", string2);

    // Belleği serbest bırak
    free(string1);
    free(string2);

    return 0;
}