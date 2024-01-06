#include <stdio.h>
int main(){
    int i,n,sum;
    printf("lütfen bir sayı giriniz  : \n");
    scanf("%d",&n);
    i=1;
    sum=1;
    while(i!=n+1){
        sum=sum*i;
        i++;
    }
    printf("%d",sum);
    return 0;
}