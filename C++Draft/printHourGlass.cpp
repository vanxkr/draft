#include <iostream>
#include <cstdio>
using namespace std;
void hourGlass(int n) {
    int i = 0, j;
    for (i=n; i>0; --i) {
        for (j=0; j;)
        for (j=0; j<i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    i += 2;
    for (; i<=n; ++i) {
        for (j=0; j<i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    while (cin >> n, n) {
        hourGlass(n);
    }
    return 0;
}
