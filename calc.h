typedef struct {
    double (*applyb)(binary, const double, const double);
    double (*applyu)(unary, const double);
    double (*add)(const double, const double);
    double (*subtract)(const double, const double);
    double (*multiply)(const double, const double);
    double (*divide)(const double, const double);
    double (*power)(const double, const double);
    double (*increment)(const double);
    double (*decrement)(const double);
} calc_interface;

const calc_interface calc_exports;
