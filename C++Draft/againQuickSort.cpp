#include <iostream>
using namespace std;
const int maxLength = 10010;
void againQuickSort(int st[], int low, int high);
int main()
{
    int n;
    int st[maxLength];
    while (cin >> n, n) {
        for (int i=0; i<n; ++i) {
            cin >> st[i];
        }
        againQuickSort(st, 0, n-1);
        for (int i=0; i<n; ++i) {
            cout << st[i] << (i==n-1?"\n":" ");
        }
    }
    return 0;
}
void againQuickSort(int st[], int low, int high) {
    if (low >= high) {
        return;
    }
    int left = low;
    int right = high;
    int key = st[left];
    while (left < right) {
        while (left < right && st[right] >= key) {
            --right;
        }
        st[left] = st[right];
        while (left < right && st[left] <= key) {
            ++left;
        }
        st[right] = st[left];
    }
    st[left] = key;
    againQuickSort(st, low, left-1);
    againQuickSort(st, left+1, high);
}
/*
0 4  4 1 0 3 2
0 3  2 1 0 3 2
3 3  2 1 0 3 2
     2 1 0 3 4

0 3  2 1 0 3
0 2  0 1 0 3
     0 1 2 3
     0 1
     2 3
     0 1 2 3 4
*/
