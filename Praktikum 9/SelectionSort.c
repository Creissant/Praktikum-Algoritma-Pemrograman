//Nama File : SelectionSort.c
//Deskripsi : melakukan algoritma selection sort dengan cara memilih bilangan terkecil
// dari array lalu dibandingkan dengan elemen lain pada array, jika sudah maka bilangan tersebut
// akan menjadi list pertama index array dan akan melakukan perulangan (langkah awal) kembali.
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

void swap(int *a, int *b) {
    //Kamus lokal
    int temp;

    //Algoritma
    temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort (int arr[], int n){
    //Kamus Lokal
    int i, j, min;

    //Algoritma
    for (i = 0; i < n-1; i++) {
            for (j = i+1; j < n; j++){
                min = i;
            if (arr[j] < arr[min]) {
                    min = j;
            }
            swap (&arr[i], &arr[min]);
        }
    }
}


int main(){
    //Kamus
    int arr[]={10, 9, 8, 7, 6, 5, 6, 4, 3, 9, 2, 1, 10};
    int n;

    //Algoritma
    n=sizeof(arr)/sizeof (arr[0]);
    printArr(arr, n);
    SelectionSort(arr, n);
    printArr(arr, n);

    return 0;
}
