
#include <stdio.h>
void XiuFuBUG(void){
  printf("ÐÞ¸´BUG");
}
void QiChuang(void){

  printf("ÔçÉÏÆð´²\r\n");
}
int main(){
  XiuFuBUG();
  QiChuang();
  printf("hello world\r\n");
  system("pause");
  return 0;
}
