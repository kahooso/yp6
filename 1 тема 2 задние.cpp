﻿#include <iostream>
using namespace std;

int masmas (int num, int mas[], int limit)
{
	int a = 0;
	if (num == 0) {
		mas[0] = 0;
		return 1;
	}

	while (num > 0 && limit) {

		mas[a++] = num % 10;

		num /= 10;

		limit--;
	}


	return num ? 0 : a;
}

int main ()
{
	setlocale (LC_ALL, "Russian");
	int n, b, kol;
	int relult[10];
	int kolnum;
	int i, j;

	cout << "Введите число: ";
	cin >> n;

	kolnum = masmas (n, relult, 10);

	for (i = kolnum - 1; i >= 0; i--) {
		b = relult[i];
		kol = 0;
		for (j = kolnum - 1; j >= 0; j--) {
			if (b == relult[j]) {
				kol++;
			}
		}
		if (kol > 1) {
			cout << b << " повторилось " << kol << " раза" << endl;
		}
	}
	return 0;
}
