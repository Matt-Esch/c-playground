typedef struct {
    double (*acos)(double x);
    double (*asin)(double x);
    double (*atan)(double x); 
    double (*atan2)(double y, double x);
    double (*ceil)(double x);
    double (*cos)(double x);
    double (*cosh)(double x);
    double (*exp)(double x);
    double (*fabs)(double x);
    double (*floor)(double x);
    double (*fmod)(double x, double y);
    double (*frexp)(double x, int *expptr);
    double (*ldexp)(double x, int exp);
    double (*log)(double x);
    double (*log10)(double x); 
    double (*modf)(double x, double *intptr);
    double (*pow)(double x, double y); 
    double (*sin)(double x);
    double (*sinh)(double x);
    double (*sqrt)(double x);
    double (*tan)(double x);
    double (*tanh)(double x);
} math_interface;

const math_interface math;
