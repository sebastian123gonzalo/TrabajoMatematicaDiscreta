#pragma once

#include<iostream>
#include<vector>
using namespace std;

class Funciones {
private: 
	vector<char> elemen; //Se pasaran tipo int a tipo Char
	int n;
	//Se inicializa una matriz con 0
	char matriz[8][8] = 
	{
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
	
	};
	//Matriz auxiliar
	char nuevaMatriz[8][8] =
	{
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0',
	};

	string conjunto;
	bool completo;
public:
	Funciones(); //constructor
	~Funciones(); //destructor

	vector<char> retornarConjunto(); //Retorna todos los valores almacenados en el vector elemen

	void IngresarParOrdenado(char a, char b);
	char ImprimirMatriz(short a, short b);
	char ImprimirMatriz1(short a, short b);

	void IngresarDatos(char a); //push.back
	bool validarDato(int n); //Se valida si el valor de "n" está dentro del rango permitido

	void setN(int n); //Se asigna la cantidad de elementos del conjunto
	int getN(); //Retorna valor de la cantidad de elementos del conjunto

	void conjuntoCompleto(bool completo); //Si es que ya se llenaron los elementos al conjunto
	bool getCompleto(); //Retorna si el vector ya se lleno o no

	//Evaluar las propiedades de la matriz booleana
	bool evaluarReflexividad();
	bool evaluarIrreflexividad();
	bool evaluarSimetria();
	bool evaluarAsimetria();
	bool evaluarAntisimetria();
	bool evaluarTransitividad();
	bool evaluarRelacionEquivalencia();
	bool evaluarRelacionOrdenParcial();

	//Funciones para diagrama de Hasse
	void SacarReflexividadMatriz();
	void elevarCuadradoMatriz();
	void EliminarUnos();
};

Funciones::Funciones() {
	n = 0;
	completo = false;
	conjunto = "{ "; 
}

Funciones::~Funciones() {}

vector<char> Funciones::retornarConjunto() {
	return elemen;
}

void Funciones::IngresarParOrdenado(char a, char b) {
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < n; j++) {
			if (elemen[i] == a && elemen[j] == b) {
				matriz[i][j] = '1';
			}
		}
	}
}

char Funciones::ImprimirMatriz(short a, short b) {
	return matriz[a][b];
}

char Funciones::ImprimirMatriz1(short a, short b) {
	return nuevaMatriz[a][b];
}

void Funciones::IngresarDatos(char a) {	elemen.push_back(a); }

bool Funciones::validarDato(int n) {
	if (n >= 4 && n <= 7) { return true; }
	else return false;
}

void Funciones::setN(int n) { this->n = n; }
int Funciones::getN() { return n; }

void Funciones::conjuntoCompleto(bool completo) { this->completo = completo; }
bool Funciones::getCompleto() { return completo; }

bool Funciones::evaluarReflexividad() {
	for (short i = 0; i < n; i++) {
		if (matriz[i][i] != '1') {
			return false;
		}
	}
	return true;
}

bool Funciones::evaluarIrreflexividad() { 
	for (short i = 0; i < n; i++) {
		if (matriz[i][i] != '0') {
			return false;
		}
	}
	return true;
}

bool Funciones::evaluarSimetria() {
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < n; j++) {
			if (matriz[i][j] != matriz[j][i]) {
				return false;
			}
		}
	}
	return true;
}

bool Funciones::evaluarAsimetria() {
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < n; j++) {
			if (matriz[i][j] != matriz[j][i]) {
				return true;
			}
		}
	}
	return false;
}

bool Funciones::evaluarAntisimetria() { //Comprobamos si la matriz es antisimétrica
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (matriz[i][j] == '1' && matriz[j][i] == '1') {
				return false; // La matriz no es antisimétrica
			}
		}
	}
	// Si no se ha encontrado un par de elementos (i, j) y (j, i) donde i != j, entonces la matriz es antisimétrica
	return true;
}

bool Funciones::evaluarTransitividad() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (matriz[i][j] != '0') {
				for (int k = 0; k < n; k++) {
					if (matriz[i][j] && matriz[j][k] && !matriz[i][k]) {
						return false;
					}
				}
			}
		}
	}
	return true;
}

bool Funciones::evaluarRelacionEquivalencia() {
	if (evaluarReflexividad() && evaluarSimetria() && evaluarTransitividad()) {
		return true;
	}
	return false;
}

bool Funciones::evaluarRelacionOrdenParcial() {
	if (evaluarReflexividad() && evaluarAntisimetria() && evaluarTransitividad()) {
		return true;
	}
	return false;
}
//Pasos para sacar diagrama de Hasse
void Funciones::SacarReflexividadMatriz() {
	for (short i = 0; i < n; i++) {
		if (matriz[i][i] == '1') {
			matriz[i][i] = '0';
		}
	}
}

void Funciones::elevarCuadradoMatriz() {
	SacarReflexividadMatriz();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				matriz[i][j] |= (matriz[i][k] & matriz[k][j]);
			}
		}
	}
}

void Funciones::EliminarUnos() {
	for (short i = 0; i < n; i++) {
		for (short j = 0; j < n; j++) {
			if (nuevaMatriz[i][j] == '1') {
				matriz[i][j] = '0';
			}
		}
	}
}