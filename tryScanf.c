#include<stdio.h>

int main(){
    int age , year;
    printf("Enter your birth year: ");
    scanf("%d", &year);
    age = (2022 - year);
    printf("your are %d years old" , age);
    return 0;
}