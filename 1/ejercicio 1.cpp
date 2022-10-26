#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;
int main() {
	Console::SetWindowSize(90, 30);
	Random r;
	int num_se�oritas;
	float* talla_participantes = new float;
	do {
		cout << "\nIngrese el numero de senoritas de la convocatoria:> ";
		cin >> num_se�oritas;
	} while (!(num_se�oritas > 0 && num_se�oritas <= 80));
	//generando talla
	for (int i = 0; i < num_se�oritas; i++) {
		talla_participantes[i] = (r.Next(155, 220))/(100*1.0);
	}
	cout << "\nArreglo Original:";
	cout << "\n";
	for (int i = 0; i < num_se�oritas; i++) {
		cout << "  "<< talla_participantes[i];
	}
	//imprime talla
	cout << "\nArreglo Ordenado:";
	cout << "\n";
	//ordenando talla ascen.
	float temporal;
	for (int i = 0; i < num_se�oritas; i++) {
		for (int j = i+1; j < num_se�oritas; j++) {
			if (talla_participantes[i] > talla_participantes[j]) {
				temporal = talla_participantes[i];
				talla_participantes[i] = talla_participantes[j];
				talla_participantes[j] = temporal;
			}
		}
	}
	//imprime talla ordenada
	for (int i = 0; i < num_se�oritas; i++) {
		cout << "  " << talla_participantes[i];
	}
	//talla promedio
	float pro_talla = 0;
	for (int i = 0; i < num_se�oritas; i++) {
		pro_talla=pro_talla + talla_participantes[i];
	}
	int libero = 0;
	int levantadoras = 0;
	int matadoras = 0;
	cout << "\nLa talla promedio es:> "<<pro_talla / num_se�oritas;
	for (int i = 0; i < num_se�oritas; i++) {
		if (talla_participantes[i] >= 1.55 && talla_participantes[i] <= 1.69) {
			libero++;
		}
		if (talla_participantes[i] >= 1.70 && talla_participantes[i] <= 1.85) {
			levantadoras++;
		}
		if (talla_participantes[i] >=1.86) {
			matadoras++;
		}
	}
	cout << "\nLiberos:> " << libero;
	cout << "\nLevantadoras:> " << levantadoras;
	cout << "\nMatadoras:> " << matadoras;
	if (matadoras < (num_se�oritas / 2)) {
		cout << "\nRealiza nueva convocatoria";
	}
	system("pause>0");
	return 0;
}