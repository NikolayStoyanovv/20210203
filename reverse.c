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