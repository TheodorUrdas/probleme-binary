#pragma once
#include <iostream>
using namespace std;

//La o probă de maraton participă N maratonişti. Ştiind că la secunda 0, un maratonist se află la Xi metri de linia de sosire și aleargă cu o viteză 
//de Yi metri/secundă, să se răspundă la Q întrebări de tipul: - Câți maratonişti au trecut linia de sosire după Qi secunde ?
void pb1() {
	int v[1000],y[1000],z[1000],t[1000], n;
	citire(v, n);
	citire(y, n);
	citire(z, n);
	for (int i = 0; i < n; i++) {
		int ajuns = viteza(v, y, z[i], n);
		t[i] = ajuns;
	}
	afisare(t, n);
}

//La secția de împachetare a produselor dintr - o fabrică lucrează n muncitori.Fiecare muncitor împachetează același tip de produs, și pentru 
//fiecare se cunoaște timpul necesar pentru împachetarea unui obiect.Să se determine durata minimă de timp în care vor împacheta cei n muncitori 
//cel puțin M obiecte.
void pb2() {
	int v[1000], n, m;
	citire(v, n);
	cout << "m=";
	cin >> m;
	int timp = pachete(v, n, m);
	cout << timp;
}

//Se dă un șir de n numere naturale și un număr natural val. Determinați lungimea maximă a unei secvențe cu proprietatea că suma numerelor din 
//aceasta este mai mică sau egală cu val.
void pb3() {
	int v[1000], n, sum;
	citire(v, n);
	cout << "suma=";
	cin >> sum;
	int ctMax = 0;
	for (int i = 0; i < n; i++) {
		if (suma(v, n, sum) >= ctMax) {
			ctMax = suma(v, n, sum);
		}
	}
	cout << ctMax;
}

//Se consideră un șir a[1], a[2], …, a[n] de numere naturale nenule. Pentru doi indici 1 ≤ i < j < n, notăm cu X = a[1] + a[2] + ... + a[i], 
//Y = a[i + 1] + a[i + 2] + ... + a[j] și Z = a[j + 1] + a[j + 2] + ... + a[n]. Să se determine doi indici i și j astfel încât diferența 
//max(X, Y, Z) - min(X, Y, Z) să fie minimă.
void pb4() {
	int v[1000], x[1000], y[1000], z[1000], n, i, j;
	citire(v, n);
	i = sumaXYZi(v, n, x, y, z);
	j = sumaXYZj(v, n, x, y, z);
	cout << i << " " << j;
	
}