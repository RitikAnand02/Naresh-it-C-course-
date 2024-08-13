#include<stdio.h>
int main(){
int num = 25;
int result;
if (!(num % 2 != 0)) {
    result = num * 2;
} else {
    result = num * 3;
}
printf("%d",result);
}