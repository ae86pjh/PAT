#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int s, N, p = 1, count[5] = {0}, a[5] = { 0 };
	a[4] = -1;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &s);
		switch (s % 5) {
		case 0:if (!(s % 2)) { a[0] += s; count[0]++;}break;
		case 1:a[1] += p * s; p = (-1) * p;count[1]++;break;
		case 2:a[2]++;count[2]++;break;
		case 3:a[3] += s;count[3]++;break;
		case 4:count[4]++;if (s > a[4]) { a[4] = s; }break;
		}
	}
	//输出
	if (!count[0])
		printf("N ");
	else{
		printf("%d ", a[0]);
	}

	if (!count[1])
		printf("N ");
	else {
		printf("%d ", a[1]);
	}

	if (!count[2])
		printf("N ");
	else {
		printf("%d ", a[2]);
	}
	if (!count[3])
		printf("N ");
	else {
		printf("%.1f ", (float)a[3] / count[3]);
	}
	if (!count[4])
		printf("N");
	else {
		printf("%d",a[4]);
	}
	return 0;
}