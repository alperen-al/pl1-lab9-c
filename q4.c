#include <stdio.h>
int main(){
    int sum,a,i,b;
    printf("lütfen bir sayı giriniz   : \n");
    scanf("%d",&a);
    b=a;
    sum=0;
    while(a!=0){
        i=a%10;
        a=a/10;
        sum=sum*10+i;
    }
    if (b==sum){
        printf("sayınız palindromedir.");
    }
    else{
        printf("not palindrome.");
    }
    return 0;

}