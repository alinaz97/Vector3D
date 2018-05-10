#include<iostream>
#include<string>
#include"Header.h"
using namespace std;

int main()
{
	Vector3D array[10000];

	char* s = new char[5];
	cin.getline(s, 5, ' '); //въвеждаме операцията

	int n;
	cin >> n; //въвеждаме броя вектори

	for (int i = 0; i < n; i++)
	{
		cin >> array[i]; //въвеждаме векторите
	}

	//започваме търсене на операцията и нейното изпълняване
	if (strcmp(s, "+") == 0) //сбор
	{
		Vector3D v;
		for (int i = 0; i < n; i++)
		{
			v = v + array[i];
		}
		cout << v;

	}
	else if (strcmp(s, "-") == 0) //изваждане
	{
		Vector3D v = v + array[0];
		for (int i = 1; i < n; i++)
		{
			v = v - array[i];
		}
		cout << v;
	}
	else if (strcmp(s, "NEG") == 0) //негиране
	{
		for (int i = 0; i < n; i++)
		{
			cout << -array[i];
			if (i != n - 1) cout << " ";
		}
	}
	else if (s[0] == '*') //умножение
	{
		int number = 0;

		for (int i = 1; i <= strlen(s) - 1; i++)
		{
			number = number + (s[i] - '0'); //конвертираме символ във число
			if (i != strlen(s) - 1) number = number * 10;
		}

		for (int i = 0; i < n; i++)
		{
			cout << array[i] * number;
			if (i != n - 1) cout << " ";
		}
	}
	else if (s[0] >= '1' && s[0] <= '9') //умножение
	{
		int number = 0;

		for (int i = 0; i <= strlen(s) - 2; i++)
		{
			number = number + (s[i] - '0'); //конвертираме символ във число
			if (i != strlen(s) - 2) number = number * 10;
		}

		for (int i = 0; i < n; i++)
		{
			cout << array[i] * number;
			if (i != n - 1) cout << " ";
		}
	}

	system("pause");
	return 0;
}