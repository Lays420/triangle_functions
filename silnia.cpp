#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
int wybór, x, y, r;
float liczba;
using namespace std;
void cot() {
	double cot = 1 / tan(x);
}

int main()
{
	label1:
	setlocale(LC_ALL, "polish");
	cout << "Funkcje trygonometryczne" << endl;
	cout << endl << "[1]radiany\n[2]boki\n[3]opuść" << endl;
	cin >> wybór;
	switch (wybór)
	{
	case 1:
		goto radiany;
	case 2:
		goto boki;
	}
radiany:
	cout << "[1]sinus\n[2]cosinus\n[3]tangens\n[4]cotangens\n[5]powrót\n" << endl;
	cin >> wybór;
	switch (wybór)
	{
	case 1:
		goto sinus;
	sinus:
		cout << "wprowadź liczbę w radinach\n" << endl;
		cin >> x;
		if (x < 0) {
			cout << endl << "liczba nie możę byc mniejsza od 0\n" << endl;
			goto sinus;
		}
		cout << endl << sin(x) << endl;
	case 2:
		goto cosinus;
	cosinus:
		cout << "wprowadź liczbę w radinach\n" << endl;
		cin >> x;
		if (x < 0) {
			cout << endl << "liczba nie możę byc mniejsza od 0\n" << endl;
			goto cosinus;
		}
		cout << endl << cos(x) << endl;
	case 3:
		goto tangens;
	tangens:
		cout << "wprowadź liczbę w radinach\n" << endl;
		cin >> x;
		if (x < 0) {
			cout << endl << "liczba nie możę byc mniejsza od 0\n" << endl;
			goto tangens;
		}
		cout << endl << tan(x) << endl;
	case 4:
		goto cotangens;
	cotangens:
		cout << "wprowadź liczbę w radinach\n" << endl;
		cin >> x;
		if (x <= 0) {
			cout << endl << "liczba nie może byc mniejsza od 0\n" << endl;
			goto cotangens;
		}
		cout << endl << cot << endl;
	case 5:
		goto label1;
	}
boki:
	cout << "[1]sinus\n[2]cosinus\n[3]tangens\n[4]cotangens\n[5]powrót" << endl;
	cin >> wybór;
	switch (wybór)
	{
	case 1:
		goto sinus1;
	sinus1:
		cout << endl <<"wprowadź przeciwprostokątną\n" << endl;
		cin >> r;
		cout << "wprowadź przyprostoktną(leżącą na przeciw kąta alfa)\n" << endl;
		cin >> y;
		cout << "sinus przeciwprostoktnej i przyprostokątnej leżcej n przeciw kąta wynosi " << y / r << endl;
		goto boki;
	case 2:
		goto cosinus1;
	cosinus1:
		cout << endl << "wprowadź przeciwprostokątną\n" << endl;
		cin >> r;
		cout << "wprowadź przyprostoktną(leżącą przy kącie alfa)\n" << endl;
		cin >> x;
		cout << "sinus przeciwprostoktnej i przyprostokątnej leżcej przy kącia wynosi " << x / r << endl;
		goto boki;
	case 3:
		goto tangens1;
	tangens1:
		cout << endl << "wprowadź przyprostoktną(leżącą na przeciw kąta alfa)\n" << endl;
		cin >> y;
		cout << "wprowadź przyprostoktną(leżącą przy kącie alfa)\n" << endl;
		cin >> x;
		if (x <= 0)
		{
			cout << "przyprostokątna nie może być równa 0\n" << endl;
			goto tangens1;
		}
		cout << "tengens przyprostokątnej(na przeciw kąta alfa) i przyprostokątnej (przy kącia wynosi) " << y / x << endl;
		goto boki;
	case 4:
		goto cotangens1;
	cotangens1:
		cout << endl << "wprowadź przyprostoktną(leżącą na przeciw kąta alfa)\n" << endl;
		cin >> y;
		if (y <= 0)
		{
			cout << "przyprostoktną nie może być równa 0\n" << endl;
			goto cotangens1;
		}
		cout << "wprowadź przyprostoktną(leżącą przy kącie alfa)\n" << endl;
		cin >> x;
		cout << "przyprostokątnej (przy kącia wynosi) i tengens przyprostokątnej(na przeciw kąta alfa) " << x / y << endl;
		goto boki;
	case 5:
		goto label1;
	}
	return 0;
}