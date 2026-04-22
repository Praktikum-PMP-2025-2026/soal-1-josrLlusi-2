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
    int jlh;
    int i=0;
    int array[100];
    int *ptr = array;
    int hasil = 0;
    int *ptrhasil;
    double avg = 0;
    double *ptravg;
    int max =0;
    int *ptrmaks;
    ptrmaks = &max;
    int idxmax =0;
    int *ptridx;

    ptridx = &idxmax;
    ptravg = &avg;
    ptrhasil = &hasil;

    scanf("%d", &jlh);


    while(i<jlh){
        scanf("%d", &array[i]);
        i++;
    }

    sum(jlh, ptr, ptrhasil);
    maxim(jlh, ptr, ptrmaks);
    average(jlh, ptr, ptravg);
    idxmaks(jlh, ptr, ptridx);
    printf("SUM %d\n", hasil);
    printf("AVG %.2f\n", avg);
    printf("MAX %d\n", max);
    printf("IDX %d", idxmax);

    return 0;
}
 
