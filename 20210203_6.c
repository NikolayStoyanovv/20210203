/*Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). 
*/
#include<stdio.h>
void my_swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main(){
    int a,b;
    printf("Please enter a value for variable A:");
    scanf("%d",&a);

    printf("Please enter a value for variable B:");
    scanf("%d",&b);
    printf("You entered %d value for A\n",a);
    printf("You entered %d value for B\n",b);

    my_swap(&a,&b);//swap the value of the A and B

    printf("The new value of a:%d\n",a);
    printf("The new value of b:%d\n",b);
    return 0;
}