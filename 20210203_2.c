/*Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край.*/
#include<stdio.h>
void printArr(int a[],int l){
    for(int i=0;i<l;i++){
        printf(" %d ",a[i]);
    }
    printf("\n");
}
int main(){
    int arr[12]={1,2,3};
    printArr(arr,12);//1  2  3  0  0  0  0  0  0  0  0  0
    return 0;
}