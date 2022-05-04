//Nama File : InsertionSort.c
//Deskripsi : melakukan algorimta insertion sort dengan cara
// mencari tempat yang "tepat" untuk setiap elemen tabel, dengan cara
// sequential search, kemudian setiap kali menyisipkan sebuah elemen tabel yang
// diproses ke tempatnya yang seharusnya. Proses dilakukan sebanyak N tahapan
//Nama      : Varrel
//NIM       : 24060121130062
//Kelas     : B1
//tanggal	: 03-05-2022

#include <stdio.h>

void printArr(int arr[], int n) {
    //Kamus lokal
    int i;

    //Algoritma
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void InsertionSort(int arr[], int n){
    //Kamus lokal
    int i, j, key;

    //Algoritma
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
    arr[j + 1] = key;
    }
}

int main(){
    //Kamus
    int arr[]={1, 7, 7, 0, 1, 3, 12, 11, 10, 9, 11, 10, 101, 8};
    int n;

    //Algoritma
    n = sizeof(arr)/sizeof(arr[0]);
    printArr(arr, n);
    InsertionSort(arr, n);
    printArr(arr, n);

    return 0;
}
