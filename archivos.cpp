#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int numero,r,c;
	int matriz[4][4];
	ofstream arch("C:\\files\\test.csv", ios::out);
	cout << "ingresa un numero";
	cin >> numero;
	for (int r = 0; r<4; r++)
	{
		for (int c = 0; c<4; c++)
		{
			matriz[r][c] = numero++;
		}
	}
	for (int r = 0; r<4; r++)
	{
		for (int c = 0; c<4; c++)
		{
			arch << matriz[r][c] << ",";
		}
		arch << endl;
	}
	cin.get();
	cin.get();
	return 0;
}
