/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.*/
#include<stdio.h>
int linSearch(int a[],int l,int d){
    int result=-1;
    for(int i=0;i<l;i++){
        if(a[i]==d){
            return result=i;
        }
        
    }
    printf("\n");
    return result;
}
int main(){
    int d=3;
    int arr[12]={1,2,3};
    printf("The position of element in array is:%d \n",linSearch(arr,12,d));
    //The position of element in array is:2

    return 0;
}