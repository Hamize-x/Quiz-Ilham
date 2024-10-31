#include <iostream>
using namespace std;

int main() {
	double beratApel, beratJeruk, beratSemangka, diskon;
	const double hargaApel_Kg = 24000, hargaJeruk_Kg = 32500, hargaSemangka_Kg = 8000;

	cout << "Masukkan berat Apel (kg): ";
	cin >> beratApel;
	cout << "Masukkan berat Jeruk (kg): ";
	cin >> beratJeruk;
	cout << "Masukkan berat Semangka (kg): ";
	cin >> beratSemangka;

	double totalBerat = beratApel + beratJeruk + beratSemangka;
	double totalHarga = (beratApel*hargaApel_Kg) + (beratJeruk*hargaJeruk_Kg) + (beratSemangka*hargaSemangka_Kg);

	if (totalBerat > 10) {
		diskon = 0.05;
	}
	else if (totalBerat > 8) {
		diskon = 0.02;
	}
	else {
		diskon = 0;
	}

	double totalBayar = totalHarga - (totalHarga * diskon);

	cout << "Total yang harus dibayarkan Mas Okarun: Rp." << totalBayar << endl;

	return 0;
}