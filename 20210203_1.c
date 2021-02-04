#include<stdio.h>
unsigned Factorial(unsigned uValue){
    if(uValue==1){
        return 1;
    }else{
return  uValue* Factorial(uValue-1);
    }
}
int main(){
    printf("%d\n",Factorial(6));
    return 0;
}