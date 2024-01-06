#include <stdio.h>

int main(){
    while(1){
    float bakiye,dovizcarpan,toplamay=1,oran,netkazanc,miktar=1;
    int ay,a;
    printf("Bakiyenizi döviz cinsinden giriniz: ");
    scanf("%f",&bakiye);
    printf("Kaç aylık yatırım yapacağınızı giriniz: ");
    scanf("%d",&ay);
    printf("Ay başına yüzde kaç kar elde edeceğinizi düşünüyorsunuz: ");
    scanf("%f",&oran);
    oran=oran/100+1;
    a=ay;
    while(a!=0){
        toplamay=toplamay*1.04;
        a=a-1;
    }
    a=ay;
    while(a!=0){
        miktar=miktar*oran;
        a=a-1;
    }
    netkazanc=toplamay*bakiye*miktar*29;
    miktar=miktar*100;
    toplamay=toplamay*100;
    printf("\n");
    printf("\n");
    printf("Sermayeniz %d ay boyunca yüzde %.2f oranında büyüyecek. \n",ay,miktar);
    printf("Döviz getirisi yüzde %.2f oranında olacak. \n",toplamay);
    printf("Net kazancınız ise: %.0f",netkazanc);
    printf("\n");
    }
    return 0;
}
