#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	FILE* file1, * file2;
	file1 = fopen("C:\\Users\\admin\\Desktop\\12345.txt", "rb");
	file2 = fopen("C:\\Users\\admin\\Desktop\\123.txt", "wb");

	if (file1 != nullptr && file2 != nullptr)
	{
		char str[500];
		int countLine = 0;
		while (fgets(str, 500, file1))
			countLine++;

		int lastLine = 0;
		int count = 0;
		int x = 0;
		bool y = 0;
		

		fclose(file1);
		fclose(file2);
	}
	else
		cout << "Помилка відкриття файлів" << endl;

	return 0;
}
