#include<stdio.h>
#define max 50

int sayiBul(int sayilar[],int uzunluk,int aranan){
    int i;
    for(i=0;i<uzunluk;i++){
        if (sayilar[i]==aranan)
        {
            return sayilar[i];
        }
    }
    return -1;
}

int main(){

    int sayilar[max];

    printf("Elaman sayisi :");
    int uzunluk;
    scanf("%d",&uzunluk);

    int i;
    for(i=0;i<uzunluk;i++){
        scanf("%d",&sayilar[i]);
    }
    int aranan;
    printf("Bulmak Istediginiz Sayiy Girinizi:");
    scanf("%d",&aranan);
    int sonuc;

    sonuc=sayiBul(sayilar,uzunluk,aranan);

    if(sonuc==-1){
        printf("Aradiginiz Sayi Yok");
    }
    else{
        printf("Aradiginiz Sayi Var :%d",sonuc);
    }

    return 0;
}