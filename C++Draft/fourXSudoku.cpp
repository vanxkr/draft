// 输出所有n阶数独表
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int n, sqrtn;
int mapn[10][10];
bool vism[10][10];
bool visn[10][10];
bool visp[4][4][10];

int dfs(int pos) {
	if (pos == n*n) {
		for (int i = 0; i<n; ++i) {
			for (int j = 0; j<n; ++j) {
				cout << mapn[i][j] << (j + 1 == n ? "\n" : " ");
			}
		}
		cout << endl;
		return 1;
	}
	int sum = 0;
	int x = pos / n;
	int y = pos%n;
	for (int i = 1; i <= n; ++i) {
		if (vism[x][i] || visn[y][i] || visp[x / sqrtn][y / sqrtn][i]) {
			continue;
		}
		vism[x][i] = visn[y][i] = visp[x / sqrtn][y / sqrtn][i] = true;
		mapn[x][y] = i;
		sum += dfs(pos + 1);
		vism[x][i] = visn[y][i] = visp[x / sqrtn][y / sqrtn][i] = false;
	}
	return sum;
}

int main()
{
	while (cin >> n, n) {
		memset(vism, false, sizeof(vism));
		memset(visn, false, sizeof(visn));
		memset(visp, false, sizeof(visp));
		sqrtn = sqrt(n);
		cout << dfs(0) << endl;
	}
	return 0;
}

