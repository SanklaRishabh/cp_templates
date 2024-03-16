// Some commonly used headers.
// #include <complex.h>
// #include <ctype.h>
// #include <limits.h>
// #include <math.h>
// #include <stdarg.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// Useful macros.
// Comment if the header is unused.

// Commons.
typedef unsigned U;
typedef long long ll;
typedef unsigned long long ull;

#define inf 1e18

#define tc int t
#define shortTc short t
#define ni int n
#define shortNi short n

#define toi(X) for (int i = 0; i < X; i++)
#define toineg(X) for (int i = X; i >= 0; i--)
#define toill(X) for (ll i = 0; i < X; i++)
#define toillneg(X) for (ll i = X; i >= 0; i--)
#define toj(X) for (int j = 0; j < X; j++)
#define tojneg(X) for (int j = X; j >= 0; j--)
#define tojll(X) for (ll j = 0; j < X; j++)
#define tojllneg(X) for (ll j = X; j >= 0; j--)

#define loopi(start, end) for (int i = start; i < end; i++)
#define loopineg(start, end) for (int i = start; i > end; i--)
#define loopill(start, end) for (ll i = start; i < end; i++)
#define loopillneg(start, end) for (ll i = start; i > end; i--)
#define loopj(start, end) for (int j = start; j < end; j++)
#define loopjneg(start, end) for (int j = start; j > end; j--)
#define loopjll(start, end) for (ll j = start; j < end; j++)
#define loopjllneg(start, end) for (ll j = start; j > end; j--)

#define CEIL_POS(X) ((X - (int)X) ? (int)X + 1 : (int)X)

#define yes pf("Yes\n")
#define no pf("No\n");

// <stdio.h>
#define pf printf
#define sf scanf

#define getShortTc                                                             \
    shortTc;                                                                   \
    sf("%hd", &t)
#define getTc                                                                  \
    tc;                                                                        \
    sf("%d", &t)
#define getShortN                                                              \
    shortNi;                                                                   \
    sf("%hd", &n)
#define getN                                                                   \
    ni;                                                                        \
    sf("%d", &n)
#define set2short(x, y)                                                        \
    short x, y;                                                                \
    sf("%hd %hd", &x, &y)
#define set2(x, y)                                                             \
    int x, y;                                                                  \
    sf("%d %d", &x, &y)
#define set2U(x, y)                                                            \
    U x, y;                                                                    \
    sf("%u %u", &x, &y)
#define set2ll(x, y)                                                           \
    ll x, y;                                                                   \
    sf("%lld %lld", &x, &y)
#define set3short(a, b, c)                                                     \
    short a, b, c;                                                             \
    sf("%hd %hd %hd", &a, &b, &c)
#define set3(a, b, c)                                                          \
    int a, b, c;                                                               \
    sf("%d %d %d", &a, &b, &c)
#define set3ll(a, b, c)                                                        \
    ll a, b, c;                                                                \
    sf("%lld %lld %lld", &a, &b, &c)

// <stdlib.h>
#define newBool(ptr, size) bool *ptr = (bool *)calloc(size, sizeof(bool))
#define newChar(ptr, size) char *ptr = (char *)calloc(size, sizeof(char))
#define newShort(ptr, size) short *ptr = (short *)calloc(size, sizeof(short))
#define newInt(ptr, size) int *ptr = (int *)calloc(size, sizeof(int))
#define newU(ptr, size) U *ptr = (U *)calloc(size, sizeof(U))
#define newLL(ptr, size) ll *ptr = (ll *)calloc(size, sizeof(ll))
#define newULL(ptr, size) ull *ptr = (ull *)calloc(size, sizeof(ull))

int main(void) { return 0; }

