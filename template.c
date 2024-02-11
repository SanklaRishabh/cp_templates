// Some commonly used headers.
// Comment if the header is unused.

// #include <limits.h>
// #include <ctype.h>
// #include <math.h>
// #include <stdarg.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

// Commons.
typedef long long ll;

#define inf 1e18
#define tc int t
#define ni int n
#define toi(X) for (int i = 0; i < X; i++)
#define toill(X) for (ll i = 0; i < X; i++)
#define toj(X) for (int j = 0; j < X; j++)
#define tojll(X) for (ll j = 0; j < X; j++)
#define loopi(start, end) for (int i = start; i < end; i++)
#define loopill(start, end) for (ll i = start; i < end; i++)
#define loopj(start, end) for (int j = start; j < end; j++)
#define loopjll(start, end) for (ll j = start; j < end; j++)

// <stdio.h>
#define pf printf
#define sf scanf
#define getTc                                                                  \
    tc;                                                                        \
    sf("%d", &t)
#define getN                                                                   \
    ni;                                                                        \
    sf("%d", &n)
#define set3(a, b, c)                                                          \
    int a, b, c;                                                               \
    sf("%d %d %d", &a, &b, &c)
#define set2(x, y)                                                             \
    int x, y;                                                                  \
    sf("%d %d", &x, &y)

// <stdlib.h>
#define newBool(ptr, size) bool *ptr = (bool *)calloc(size, sizeof(bool))
#define newChar(ptr, size) char *ptr = (char *)calloc(size, sizeof(char))
#define newInt(ptr, size) int *ptr = (int *)calloc(size, sizeof(int))

int main(void) { return 0; }
