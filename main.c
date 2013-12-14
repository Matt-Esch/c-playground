#include <stdio.h>
#include "calc.h"

int main(void) {
    calc_interface calc = calc_exports;

    printf("apply add with %f and %f: %f\n", 3.1, 3.2,
        calc.applyb(calc.add, 3.1, 3.2));
    printf("apply subtract with %f and %f: %f\n", 7.6, 8.8,
        calc.applyb(calc.subtract, 7.6, 8.8));
    printf("apply multiply with %f and %f: %f\n", 1.4, 7.9,
        calc.applyb(calc.multiply, 1.4, 7.9));
    printf("apply divide with %f and %f: %f\n", 100.0, 2.5,
        calc.applyb(calc.divide, 100.0, 2.5));
    printf("apply expf from math with %f and %f: %f\n", 2.0, 3.14159265359,
        calc.applyb(calc.power, 2.0, 3.14159265359));
    return 1;
}
