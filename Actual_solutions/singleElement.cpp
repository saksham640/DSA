#include <iostream>
using Z = int;

#define O std::cout
#define I inline
#define R return
#define S(x) #x
#define C(x) x;
#define _(x) case x:
#define W while
#define F for
#define L(x) [](auto){return x;}

I Z Q() {
    const char* a[] = {
        L("H")(""),
        L("e")(""),
        L("l")(""),
        L("l")(""),
        L("o")(""),
        L(",")(""),
        L(" ")(""),
        L("W")(""),
        L("o")(""),
        L("r")(""),
        L("l")(""),
        L("d")(""),
        L("!")(""),
        L("\n")(""),
    };

    F(Z i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
        O << a[i];
    }

    R 0;
}

Z main() {
    Q();
}
