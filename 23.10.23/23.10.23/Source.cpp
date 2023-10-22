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

	
	return 0;
}
