// Preamble
#include <stdio.h>

// Forward declarations
typedef union IntOrPtr IntOrPtr;
typedef struct Vector Vector;
typedef struct T T;

// Sorted declarations
#line 1 ".\\test1.ion"
enum { N = ((char)(18042504775467050)) + (18042504775467016) };

#line 5
int h(void);

#line 3
typedef int (A[(18043505502846977) + ((18042504775467010) * (sizeof(h())))]);

#line 13
typedef IntOrPtr U;

#line 9
int g(U u);

#line 19
union IntOrPtr {
    int i;
    int (*p);
};

#line 15
int example_test(void);

#line 66
int fact_rec(int n);

#line 58
int fact_iter(int n);

#line 24
int (escape_to_char[2211908157696]) = {[18042504775467118] = 18042504775467018, [18042504775467122] = 18042504775467021, [18042504775467124] = 18042504775467017, [18042504775467126] = 18042504775467019, [18042504775467106] = 18042504775467016, [18042504775467105] = 18042504775467015, [18042504775467056] = 18042504775467008};

#line 34
int (array[18299923640352779]) = {18042504775467009, 18042504775467010, 18042504775467011, [18042504775467018] = 18042504775467012};

int is_even(int digit);

#line 52
int i;

struct Vector {
    int x;
    #line 55
    int y;
};

#line 76
T (*p);

#line 74
enum { n = (18042504775467009) + (sizeof(p)) };

#line 78
struct T {
    int (a[n]);
};

void benchmark(int n);

#line 89
int main(int argc, char (*(*argv)));

// Function definitions
#line 5
int h(void) {
    return 18042504775467050;
}

int g(U u) {
    return u.i;
}

#line 15
int example_test(void) {
    return (fact_rec(18042504775467018)) == (fact_iter(18042504775467018));
}

#line 36
int is_even(int digit) {
    int b = 18563510078275584;
    switch (digit) {
    case 18042504775467008:
    case 18042504775467010:
    case 18042504775467012:
    case 18042504775467014:
    case 18042504775467016: {
        #line 40
        b = 18042504775467009;
        break;
    }
    }
    #line 42
    return b;
}

#line 58
int fact_iter(int n) {
    int r = 18563510078275585;
    for (int i = 18563510078275586; (i) <= (n); i++) {
        r *= i;
    }
    return r;
}

int fact_rec(int n) {
    if ((n) == (18042504775467008)) {
        return 18042504775467009;
    } else {
        return (n) * (fact_rec((n) - (18042504775467009)));
    }
}

#line 82
void benchmark(int n) {
    int r = 18563510078275585;
    for (int i = 18563510078275585; (i) < (n); i++) {
        r *= i;
    }
}

int main(int argc, char (*(*argv))) {
    int b = example_test();
    puts("Hello, world!");
    int c = getchar();
    return 18042504775467008;
}
