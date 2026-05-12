/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 5 (Foundation of Algorithm)
 *   Hari dan Tanggal    : Selasa, 12 Mei 2026
 *   Nama (NIM)          : 13224078
 *   Nama File           : soal1.c
 *   Deskripsi           : Membuat Silsilah Dinasti Langit, yaitu membuat 3 
 * cara pembacaan dari pohon biner keluarga bangsawan. 
 * Pembacaan yang dilakukan:
 * 1. Pre-order: akar - cabang kiri - cabang kanan
 * 2. In-order: cabang kiri - akar - cabang kanan
 * 3. Post-order: cabang kiri - cabang kanan - akar
 * Dengan ketentuan sebagai berikut:
 * 1. Menggunakan representasi array lengkap
 * 2. Anak kiri memiliki indeks 2i+1
 * 3. Anak kanan memiliki indeks 2i+2
 * 4. Semua node dianggap valid
 */

 #include <stdio.h>
 #include <string.h>

 #define MAX 50
 
 //Fungsi pre-order
 void preorder(int arr[], int idx, int N){
    //kalau proses sudah selesai, return
    if (idx>=N){
        return;
    }

    printf("%d", arr[idx]);
    if(idx<N){
        printf(" ");
    }   
    preorder(arr, 2*idx+1, N);
    preorder(arr, 2*idx+2, N);
 }

 //Fungsi in-order
 void inorder(int arr[], int idx, int N){
    //kalau proses sudah selesai, return
    if (idx>=N){
        return;
    }
    inorder(arr, 2*idx+1, N);
    printf("%d", arr[idx]);
    if(idx<N){
        printf(" ");
    }   
    inorder(arr, 2*idx+2, N);

 }

 //Fungsi post-order
 void postorder(int arr[], int idx, int N){
    //kalau proses sudah selesai, return
    if (idx>=N){
        return;
    }
    
    postorder(arr, 2*idx+1, N);
    postorder(arr, 2*idx+2, N);
    printf("%d", arr[idx]);
    if(idx<N){
        printf(" ");
    }   
 }

 int main() {
    //input jumlah node
    int N;
    scanf("%d", &N);

    //inisialisasi array
    int i;
    int arr[MAX];

    //input node
    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    printf("PRE "); 
    preorder(arr,0,N);

    printf("\nIN ");
    inorder(arr,0,N);

    printf("\nPOST ");
    postorder(arr,0,N);

    return 0;
 }
