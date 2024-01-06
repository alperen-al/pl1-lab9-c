#include <stdio.h>
int main(){
    int a,b,k,x,sum,i,y;
    printf("lütfen terim sayısını giriniz  : ");
    scanf("%d",&x);
    sum=1;
    i=1;
    a=1;
    b=1;
    while(i!=x+1){
        i++;
        a=a*y;
        while(b!=i){
            b++;
            k=k*b;
        }
        sum=sum+(a/k);
    }
    printf("%d",sum);
    return 0;
}
