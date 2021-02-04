
#include<stdio.h>
void squeeze(char s[],int c){
    int i,a;
    for(i=a=0;s[i]!='\0';i++){
        if(s[i]!=c){
            s[a++]=s[i];
            s[a]='\0';
            
        }
       
    }
}
int main(){
    char s[]="Hello";
    int c;
    printf("Please enter the character which you want to earase \n");
    scanf("%d\n",&c);
    
    squeeze(s,c);
    return 0;
}