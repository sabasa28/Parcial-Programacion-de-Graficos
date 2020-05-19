#include "ejer1.h"
#include "pch.h"
#include <iostream>

using namespace std;

namespace parcial
{
	void mostrarCreditos()
	{
		cout << "Autor: Iñaki Diez Galarza." << endl;
		cout << "Version de Visual Studio : 2019" << endl;
	}

	float diferencia(float num1, float num2)
	{
		return abs(num1 - num2);
	}
}