
#include <stdio.h>

int bosh_joy(char c) {
    return c == ' ' || c == '\t' || c == '\n' ||
           c == '\r' || c == '\v' || c == '\f';
}
int main(void) {
    char s[1000];
    int sozlar = 0;
    int joriy = 0;
    int eng_uzun = 0;
    int bosh = 0;
    int eng_bosh = 0;
    int ichida = 0;

    printf("Matn kiriting: ");

    if (fgets(s, sizeof(s), stdin) == NULL) 
    {
        return 1;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (bosh_joy(s[i])) {
            if (ichida) 
            {
                sozlar++;
                if (joriy > eng_uzun) 
                {
                    eng_uzun = joriy;
                    eng_bosh = bosh;
                }

                ichida = 0;
                joriy = 0;
            }
        } 
        else {
            if (!ichida) 
            {
                bosh = i;
                ichida = 1;
            }

            joriy++;
        }
    }

    if (ichida) 
    {
        sozlar++;

        if (joriy > eng_uzun) {
            eng_uzun = joriy;
            eng_bosh = bosh;
        }
    }

    printf("So'zlar soni: %d\n", sozlar);

    if (eng_uzun > 0) {
        printf("Eng uzun so'z: ");
        printf("%.*s\n", eng_uzun, s + eng_bosh);
        printf("Uzunligi: %d\n", eng_uzun);
    } else {
        printf("Matn bo'sh.\n");
    }

    return 0;
}
