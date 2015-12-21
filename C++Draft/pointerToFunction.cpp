#include <iostream>
#include <cstdio>
using namespace std;

int *func(int *n)
{
	return n;
}

int main()
{
	int a = 8;
	int *p = &a;

	// 这样赋值, 会将0(即NULL)赋值给pFunc(即将pFunc置为空)
	int *(*pFunc)(int *n) = 0;
	printf("%#x\n", pFunc);


	pFunc = &func;
	printf("%#x\n", pFunc);

	cout << *pFunc(p) << endl;
	printf("%#x\n", pFunc);

	//pFunc = 0;
	//printf("%#x\n", pFunc);

	cout << *pFunc(p) << endl;
	int *(*qFunc)(int *n);
	//printf("%d\n", qFunc);

	getchar();

	return 0;
}
