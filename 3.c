#include <stdio.h>
#include <stdlib.h>

typedef int (*Mezon)(int, int);

int osish(int a, int b) {
    return a > b;
}

int kamayish(int a, int b) {
    return a < b;
}

int modul(int a, int b) {
    int x = (a < 0) ? -a : a;
    int y = (b < 0) ? -b : b;

    if (x == y) {
        return a > b;
    }

    return x > y;
}

void sarala(int *a, int n, Mezon mezon) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (mezon(a[j], a[j + 1])) {
                int vaqtincha = a[j];
                a[j] = a[j + 1];
                a[j + 1] = vaqtincha;
            }
        }
    }
}

void chiqar(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(void) {
    int n;

    printf("Massiv elementlari sonini kiriting: ");

    if (scanf("%d", &n) != 1 || n <= 0 ||
        (size_t)n > (size_t)-1 / sizeof(int)) {
        printf("Noto'g'ri o'lcham!\n");
        return 1;
    }

    int *a = malloc((size_t)n * sizeof(int));

    if (a == NULL) {
        printf("Xotira ajratilmadi!\n");
        return 1;
    }

    printf("%d ta butun son kiriting:\n", n);

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Noto'g'ri kiritish!\n");
            free(a);
            return 1;
        }
    }

    int tanlov;

    printf("\n1. O'sish tartibi\n");
    printf("2. Kamayish tartibi\n");
    printf("3. Modul bo'yicha\n");
    printf("Tanlovingiz: ");

    if (scanf("%d", &tanlov) != 1) {
        printf("Noto'g'ri tanlov!\n");
        free(a);
        return 1;
    }

    Mezon mezon;

    switch (tanlov) {
        case 1:
            mezon = osish;
            break;
        case 2:
            mezon = kamayish;
            break;
        case 3:
            mezon = modul;
            break;
        default:
            printf("Bunday tanlov mavjud emas!\n");
            free(a);
            return 1;
    }

    sarala(a, n, mezon);

    printf("Saralangan massiv: ");
    chiqar(a, n);

    free(a);
    return 0;
}
