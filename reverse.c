/*Задача 8 Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.﻿*/
#include<stdio.h>
#include<string.h>
void reverse(char s[]){
    for(int i=strlen(s);i>=0;i--){
        printf("%c",s[i]);
    }
    printf("\n");
   
}
int main(void){
    char s[]="Miro\n";
    reverse(s);
    return 0;
}
