#include <iostream>

using namespace std;

int main()
{
	int Lista[] = {10, 15, 21, 4, 16, 75, 94, 8};
	int Longitud = 8;

	// Imprime la lista desorganizada.
	cout << "Lista desorganizada: ";
	for (int i = 0; i < Longitud; i++)
		cout << Lista[i] << ", ";

	// Inicia el acomodamiento por inserción directa.
	for (int i = 1; i < Longitud; i++)
	{
		int Actual = Lista[i];
		int Izquierda = i - 1;

		// Acomoda los digitos conforme es < > = hasta pornelos correctamente.
		while (Izquierda >  0 && Lista[Izquierda] > Actual)
		{
			Lista[Izquierda + 1] = Lista[Izquierda];
			Izquierda -= 1;
		}

		// Coloca el dato correcto en "Lista".
		Lista[Izquierda + 1] = Actual;
	}

	// Imprime la lista organizada.
	cout << endl << "Lista organizada: ";
	for (int i = 0; i < Longitud; i++)
		cout << Lista[i] << ", ";

	return 0;
}
