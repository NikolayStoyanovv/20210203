#include<stdio.h>
#include<string.h>


int main(void){
  char s[3]={'1','2','3'};
  int s2[3]={'1','2','3'};
  double s3[3]={'1','2','3'};
  printf("size of array is %c \n",sizeof(s));
  printf("size of array is %d \n",sizeof(s2));
  printf("size of array is %lf \n",sizeof(s3));
    return 0;
}