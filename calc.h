typedef double (*binary)(const double, const double);
typedef double (*unary)(const double);
typedef double (*apply_binary);
typedef double (*apply_unary)(unary, double, double);

typedef struct {
    double (*applyb)(binary, const double, const double);
    double (*applyu)(unary, const double);
    binary add;
    binary subtract;
    binary multiply;
    binary divide;
    binary power;
    unary increment;
    unary decrement;
} calc_interface;

const calc_interface calc_exports;
