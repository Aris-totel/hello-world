//Ex 1.

/**
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    float numar1, numar2, numar3;
    printf("Introduceti cele trei numere:");
    scanf("%f %f %f", &numar1, &numar2, &numar3);
    printf("%f", (numar1 + numar2 + numar3)/3);

    return 0;
}*/

//Ex 2.
/**
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    float mediaGeometrica, numar1, numar2;
    printf("Introduceti cele doua numere:");
    scanf("%f %f", &numar1, &numar2);
    mediaGeometrica  = sqrt(numar1 * numar2);
    printf("Media geometrica este: %f", mediaGeometrica);

    return 0;
}
*/

//Ex 3.
/**
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int  numar1, numar2, numar3;
    float pondere1, pondere2, pondere3;
    scanf("%d %d %d", &numar1, &numar2, &numar3);
    scanf("%f %f %f", &pondere1, &pondere2, &pondere3);
    float sumaPonderata = 0;
    if((pondere1 + pondere2 + pondere3) == 1) {
        sumaPonderata = numar1 * pondere1 + numar2 * pondere2 + numar3 * pondere3;
        printf("%f", sumaPonderata);
    }
    else {
        printf("Suma nu poate fi calculata");
    }

    return 0;
}*/


//Ex 4.
/**
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char caracter1, caracter2, caracter3;
    scanf("%c %c %c", &caracter1, &caracter2, &caracter3);
    printf("%c.%c.%c", caracter1, caracter2, caracter3);

    return 0;
}*/

/**

//Ex 5
/**
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int varsta;
    scanf("Eu am %d ani", &varsta);
    printf("%d", varsta);

    return 0;
}*/

//Ex 6
/**
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float rezultatOperatie = 1/a + 1/b + 1/c;
    printf("%f\n", rezultatOperatie);

    return 0;
}*/

//Ex 7
/**#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main( ) {
    char A, B, C, D;
    int a, b, c, d;
    scanf("%c%d%c%d%c%d%c%d", &A, &a, &B, &b, &C, &c, &D, &d);
    printf("%d%c%d%c%d%c%d%c", d, D, c, C, b, B, a, A);

    return 0;
}*/

///KissAris_2116_Lab5_pb1

/**
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x, polinom;
    scanf ("%f %f %f %f %f", &a, &b, &c, &d, &x);
    polinom = pow(x, 3)*a + pow(x, 2)*b + x*c + d;
    printf ("%f\n", polinom);

    return 0;

}
*/


///KissAris_2116_Lab5_pb2
/**
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
    int lat1, lat2, lat3;
    float arie, p;
    scanf("%i %i %i", &lat1, &lat2, &lat3);
    p = (lat1 + lat2 + lat3)/2;
    arie = sqrt(p*(p-lat1)*(p-lat2)*(p-lat3));
    printf("%f\n", arie);

    return 0;
}
*/

///KissAris_2116_Lab5_pb3
///
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
     a
}