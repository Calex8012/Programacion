#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void mostrar(int matriz[][3], int r);

int main()
{
	int r, c, a, b;
	int matriz[3][3];
	ifstream arch("C:\\files\\datos.txt", ios::in);
	for (r = 0; r<3; r++) {
		for (c = 0; c<3; c++) {
			cout << "ingresa numero ";
			arch >> matriz[r][c];
		}
	}
	mostrar(matriz, r);
	cout << "Ingresa dos numeros ";
	arch >> a >> b;
	cout << "suma " << a + b;
	arch.close();
	system("pause");
	return 0;

}
void mostrar(int matriz[][3], int r) {
	for (int r = 0; r<3; r++)
	{
		for (int c = 0; c<3; c++)
		{
			cout << matriz[r][c] << "\t";
		}
		cout << endl;
	}
}
