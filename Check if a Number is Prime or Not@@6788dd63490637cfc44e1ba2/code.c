#include<stdio.h>
#include<ctype.h>
int main(){
    int a;
    scanf("%d",&a);
    if (isprime(a)){
        printf("Prime");
    }else{
        printf("Not prime");
    }
    return 0;
}