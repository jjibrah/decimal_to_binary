#include<stdio.h>

void to_binary(int n);

int main(){
    int num;
    printf("Enter an integer value : ");

    while(scanf("%d",&num) == 1){
        printf("Binary equivalent : ");
        to_binary(num);
        putchar('\n');
        printf("Enter an integer value : ");
    }
    printf("Done!!!\n");
    return 0;
}

void to_binary(int n){
    int bin;
    bin = n % 2;
    if (n>=2){
        to_binary(n/2);
    }
    putchar(bin == 0 ?'0':'1');
}
