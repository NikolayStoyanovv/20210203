#include<stdio.h>
#include<string.h>


int main(void){
    char s[3]={'1','2','3'};
    int s2[3]={1,2,3};
    double s3[3]={1.0,2.3,4.3};

    printf("size of array is %c \n",s[2]);
    printf("size of array is %d \n",s2[2]);
    printf("size of array is %f \n",s3[2]);

    return 0;
}