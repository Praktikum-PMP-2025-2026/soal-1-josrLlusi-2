/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : Data Manipulation and External Files
 *   Hari dan Tanggal    : Rabu, 22 April 2026
 *   Nama (NIM)          : Jose Luis Fernando Saragi
 *   Nama File           : soal1.c
 *   Deskripsi           : ada angka, dicari sum, max, avg dan idxnya dalam pointer
 * 
 */


 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>



void sum(int jlh, int *ptr, int *hasiljlh){
    for(int i=0; i<jlh; i++){
        *hasiljlh += *(ptr+i); 
    }
}

void average(int jlh, int *ptr, double *avg){
    double count = 0;
    int i = 0;
    for(i =0; i<jlh; i++){
        count += *(ptr+i);
    }
    *avg = count / i;
}

void maxim(int jlh, int *ptr, int *max){
    *max = *(ptr);
    for(int i = 0; i<jlh; i++){
        if(*(ptr+i) > *max){
            *max = *(ptr+i);
        }
    }
}

void idxmaks(int jlh, int *ptr, int *idxmax){
    for(int i = 0; i<jlh; i++){
        if(*(ptr+i) > *(ptr + *idxmax)){
            *idxmax = i;
        }
        else if(*(ptr+i) == *(ptr + *idxmax)){
            continue;
        }
    }
}
  
int main() {
    int jlharray;
    int *ptrarray;
    int *ptrhasil;
    double *ptravg;
    int *ptrmaks;
    int *ptridx;
    double avg = 0;
    int max =0;
    int hasil = 0;
    int idxmax =0;
    //int i=0;
    //int *parr;

    //parr = &ptrarray;
    
    ptrmaks = &max;
    ptridx = &idxmax;
    ptravg = &avg;
    ptrhasil = &hasil;
    
    scanf("%d", &jlharray);

    ptrarray = (int*)malloc(jlharray * sizeof(int));

    if (ptrarray == NULL){
        printf("fail");
    }


    for(int i = 0; i<jlharray; i++){
        scanf("%d", ptrarray + i);
    }

    sum(jlharray, ptrarray, ptrhasil);
    maxim(jlharray, ptrarray, ptrmaks);
    average(jlharray, ptrarray, ptravg);
    idxmaks(jlharray, ptrarray, ptridx);

    printf("SUM %d\n", hasil);
    printf("AVG %.2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d", idxmax);

    return 0;
}
 
