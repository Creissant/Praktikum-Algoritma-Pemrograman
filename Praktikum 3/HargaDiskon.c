//Nama File : HargaDiskon.c
//Deskripsi : menghitung besarnya harga setelah diberikan diskon lalu ditampilkan di layar.
//Nama      : Varrel
//NIM       : 24060121130062
//Kelas     : B1

#include <stdio.h>

int main (){
	//Kamus
	int h1;
	float v,h2;
	char d;

	//Algoritma
	printf("Program Harga Diskon \n");
	printf("Harga Awal Produk  : ");
	scanf("%d", &h1);
	printf("Masukan Jenis Diskon  : ");
	scanf(" %c", &d);

	switch(d){
		case 'A' :
			v = 0.1;
			h2 = h1 - (h1 * v);
			printf("Harga Akhir Produk adalah %.2f", h2);
			break;

		case 'B' :
			v = 0.15;
			h2 = h1 - (h1 * v);
			printf("Harga Akhir Produk adalah %.2f", h2);
			break;

		case 'C' :
			v = 0.2;
			h2 = h1 - (h1 * v);
			printf("Harga Akhir Produk adalah %.2f", h2);
			break;

		default :
			printf("Pilihan Jenis Diskon tidak valid (Valid: A,B,C)");
	}
	return 0;
}
