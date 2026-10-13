
#include <stdio.h>

int bosh_joy(char c) {
    return c == ' ' || c == '\t' || c == '\n' ||
           c == '\r' || c == '\v' || c == '\f';
}
char *eng_uzun(char *s, int *uzunlik) {
    char *p = s;
    char *eng_bosh = s;
    int joriy = 0;
    int eng = 0;
    int ichida = 0;
    *uzunlik = 0;

    while (*p != '\0') {
        if (bosh_joy(*p)) 
        {
            if (ichida) 
            {
                if (joriy > eng) 
                {
                    eng = joriy;
                    eng_bosh = p - joriy;
                }

                joriy = 0;
                ichida = 0;
            }
        } 
        else 
        {
            if (!ichida) 
            {
                ichida = 1;
                joriy = 0;
            }

            joriy++;
        }

        p++;
    }

    if (ichida && joriy > eng) 
    {
        eng = joriy;
        eng_bosh = p - joriy;
    }

    *uzunlik = eng;

    if (eng == 0) 
    {
        return NULL;
    }

    return eng_bosh;
}

int main(void) 
{
    char s[1000];
    int uzunlik;

    printf("Matn kiriting: ");

    if (fgets(s, sizeof(s), stdin) == NULL) 
    {
        return 1;
    }

    char *p = eng_uzun(s, &uzunlik);

    if (p != NULL)
    {
        printf("Eng uzun so'z: ");
        printf("%.*s\n", uzunlik, p);
        printf("Uzunligi: %d\n", uzunlik);
        printf("Pointer manzili: %p\n", (void *)p);
    } 
    else 
    {
        printf("Matnda so'z yo'q.\n");
    }

    return 0;
}
