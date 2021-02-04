/*Задача 4.Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е помалък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива.*/
#include<stdio.h>
int binarySearch(int a[],int l,int d){
    
    int result=-1;
    if(d<=a[l/2]){
         for(int i=0;i<l/2;i++){
            if(a[i]==d){
                return result=i;
            }
         }
    }else if(d>a[l/2]){
        for(int i=0;i<l;i++){
            if(a[i]==d){
                return result=i;
            }
        }
    }
    
    printf("\n");
    return result;
}
int main(){
    int d=3;
    int arr[12]={1,2,3};
    printf("The position of element in array is:%d \n",binarySearch(arr,12,d));
    //The position of element in array is:2

    return 0;
}