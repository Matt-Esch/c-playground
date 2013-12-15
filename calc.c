#include <math.h>
#include "calc.h"

typedef double (*binary)(const double, const double);
typedef double (*unary)(const double);

static double applyb(const binary op, const double a, const double b) {
    return op(a, b);
}

static double applyu(const unary op, const double a) {
    return op(a);
}

static double add(const double a, const double b) {
    return a + b;
}

static double subtract(const double a, const double b) {
    return a - b;
}

static double multiply(const double a, const double b) {
    return a * b;
}

static double divide(const double a, const double b) {
    return a / b;
}

static double power(const double a, const double b) {
    return pow(a, b);
}

static double increment(const double a) {
    return a + 1;
}

static double decrement(const double a) {
    return a - 1;
}

const calc_interface calc_exports = {
    applyb,
    applyu,
    add,
    subtract,
    multiply,
    divide,
    power,
    increment,
    decrement,
};
