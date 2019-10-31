#include <stdio.h>
#include <string.h>
int main(){
    char nama[20];
    int uas,uts,na;
    printf("\t\t==========================================\n");
    printf("\t\t<  Menentukan Kelulusan Dan Nilai Akhir  >\n");
    printf("\t\t==========================================\n\n");
    printf("\nMasukkan Nama anda : ");scanf("%s",&nama);
    printf("\nMasukkan Nilai UAS Anda : ");scanf("%d",&uas);
    printf("Masukkan Nilai UTS Anda : ");scanf("%d",&uts);
    if (uts >70){
        printf("\nSelamat %s Dinyatakan LULUS !!!\n",nama);
        printf("Nilai Akhir Anda Adalah = %d\n",uts);
    }
    else if(uts <= 70){
        na = (uts * 0.40) + (uas * 0.60);
        if(na >= 60){
            printf("\n%s Dinyatakan LULUS!!!\n",nama);
            printf("Nilai Akhir Anda Adalah = %d\n",na);
        }
        else{
            printf("Maaf Anda Tidak LULUS :(\n");
        }
    }
    else {
        printf("Maaf Anda Tidak Lulus :(\n");
    }
    printf("\n\t\t===========================================\n");
    printf("\t\t<  Terimakasih Sudah Mencoba Program Saya  >\n");
    printf("\t\t============================================\n");
    }
