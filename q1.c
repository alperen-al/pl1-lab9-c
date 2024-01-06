#include <stdio.h>
int main(){
    int a,b,c;
    printf("lütfen 3 sayı giriniz : \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("en büyük sayı =  %d\n",a);
    }
    else if(b>a&&b>c){
        printf("en büyük sayı = %d\n",b);
    }
    else{
        printf("en büyük sayı = %d\n",c);
    }
    return 0;
}
