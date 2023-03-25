#pragma once
#include <iostream>
using namespace std;
#include "functii.h"

void citire(int v[], int& n) {

	cout << "n=";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "v[" << i << "]=";
		cin >> v[i];
	}

}

void afisare(int v[], int n) {

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}

void bubblesort(int v[], int n) {
	bool semn = true;
	do {
		semn = true;
		for (int i = 0; i < n-1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i + 1];
				v[i] = v[i + 1];
				semn = false;
			}
		}
	} while (semn == false);
}

int viteza(int v[], int y[], int z, int n) {
	
	int ct = 1;
	for (int i = 0; i < n; i++) {
		if (z * y[i] >= v[i]) {
			ct++;
		}
	}
	return ct;
}

int maxim(int v[], int n) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] >= max) {
			max = v[i];
		}
	}
	return max;
}

int totalPachete(int v[], int dim, int timp) {

	int contor = 0;

	for (int i = 0; i < dim; i++) {

		contor += (timp / v[i]);
	}
	return contor;
}

int pachete(int v[], int dim, int n) {

	


	for (int i = 1; i <= n; i++) {


		if ( n<= totalPachete(v, dim, i)) {

			return i;
		}
		 
	}

	return -1;
}

int suma(int v[], int n, int suma) {

	int s = 0, ct = 0;
	for (int i = 0; i < n; i++) {
		s = s + v[i];
		if (s <= suma) {
			ct++;
		}
		else {
			return ct;
		}
	}
	return -1;
}

int max(int x, int y, int z, int n) {

	int max = 0;
	if (x >= max) {
		max = x;
	}
	else if (y >= max) {
		max = y;
	}
	else if (z >= max) {
		max = z;
	}
	return max;
}

int min(int x, int y, int z, int n) {
	
	int min = 1000;
	if (x <= min) {
		min = x;
	}
	if (y <= min) {
		min = y;
	}
	if (z <= min) {
		min = z;
	}
	return min;
}

int sumaX(int v[], int n, int ii) {

	int suma = 0;
	for (int i=0; i < ii; i++) {
		suma = suma + v[i];
	}
	return suma;
}

int sumaXYZi(int v[], int n, int x[], int y[], int z[]) {

	int dif = 1000, ii = 0, i = 0, j = i + 1;
	for (int i = 1; i < j; i++) {
		int x = sumaX(v, n, i);
		for (int j = i + 1; j < n; j++) {
			int y = sumaX(v, n, j);
			int z = sumaX(v, n, j + 1);
			if (max(x, y, z, n) - min(x, y, z, n) <= dif) {
				ii = i; 
				dif = max(x, y, z, n) - min(x, y, z, n);
			}
		}
	}
	return ii;
}

int sumaXYZj(int v[], int n, int x[], int y[], int z[]) {

	int dif = 1000, jj = 0, i = 0, j = i + 1;
	for (int i = 1; i < j; i++) {
		int x = sumaX(v, n, i);
		for (int j = i + 1; j < n; j++) {
			int y = sumaX(v, n, j);
			int z = sumaX(v, n, j + 1);
			if (max(x, y, z, n) - min(x, y, z, n) <= dif) {
				dif = max(x, y, z, n) - min(x, y, z, n);
				jj = j;
			}
		}
	}

	return jj;
}


