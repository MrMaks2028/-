#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <typename T> int searchIndex(T a[], int len, T key, int begin = 0) {
	for (int i = begin; i < len; i++) 
		if (a[i] == key)
			return i;
		return -1;
}

template <typename T> int searchLastIndex(T a[], int len, T key, int begin = -1){
	if (begin == -1)
		begin = len - 1;
	for (int i = len - 1; i >= 0; i--)
		if (a[i] == key)
			return i;
	return -1;
}

void subWord(char a[], int len, char sym);

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int n;
	/*int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 10 + 1;
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Введите число: ";
	cin >> n;
	cout << searchLastIndex(a, 10, n, 5) << endl;*/

	//Задание "Подслово"
	cout << "Изначальный массив:\n";
	char word[8] = { 'f','u', 'n', 'c', 't', 'i', 'o', 'n' };
	for (int i = 0; i < 8; i++)
		cout << word[i];
	cout << endl;

	cout << "Подслово:\n";
	subWord(word, 8, 'n');
	cout << endl;

	return 0;
}

void subWord(char a[], int len, char sym) {
	int symIndex = searchIndex(a, len, sym);
	if (symIndex != -1)
		for (int i = symIndex; i < len; i++)
			cout << a[i];
	else
		cout << "ERROR";
}