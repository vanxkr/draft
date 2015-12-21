#include <cstdio>                                                                      
#include <cstdlib>
#include <cstring>

#include "vaneTypedef.h"

#define NMAX 250

u8 vaneMap[NMAX][NMAX];
void vaneInitMap() {
    memset(vaneMap, 0, sizeof(vaneMap));
}
u8 vaneInput() {
    vaneInitMap();
    u8 n = 0, r = 0;
    u8 a = 0, b = 0;
    scanf("%d", &n);
    r = n;
    while(n > 0 && n --) {
        scanf("%d %d", &a, &b);
        vaneMap[a][b] = 1;
   }
   return r > 0 ? r : 0;
}

int main() {
    while(vaneInput()) {
        for(u8 i = 0; i< NMAX; ++ i) {
            printf("%d ", i);
//          for(u8 j = 0; j < NMAX; ++ j) {
//              if(vaneMap[i][j] == 1) {
//                  printf("%d -> %d\n", i, j);
//              }
//          }
        }
    }
    return 0;
}
