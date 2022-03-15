//Nama File : TarifPLN.c
//Deskripsi : menghitung besar tarif listrik yang dikenakan berdasarkan golongan tarif dan pemakaian daya listrik (dalam kWH), lalu menampilkan hasil pada layar.
//Nama      : Varrel
//NIM       : 24060121130062
//Kelas     : B1

#include <stdio.h>

int main (){
	//Kamus
	int g,d,t;

	//Algoritma
	printf("Program Tarif PLN \n");
	printf("Jumlah daya listrik yang dipakai  : ");
	scanf("%d", &d);
	printf("Golongan Tarif  : ");
	scanf("%d", &g);

	if ( d < 100 ) {
		t = g * 1000 * 100;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", t);
    }
    else if (d >= 100 && d < 1000) {
        t = g * 1000 * d;
        printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", t);
    }
    else {
        t = (g * 1000 * d) * 1.1;
        printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", t);
    }

	return 0;
}
