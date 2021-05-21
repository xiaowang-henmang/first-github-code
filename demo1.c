
#include <stdio.h>

void XiuFuBUG(void){
   printf("修复BUG");
}
void ShangCheng(void){
   printf("小王网上商城开业了\r\n");
}
void QiChuang(void){

   printf("早上起床\r\n");
}
int main(){

  XiuFuBUG();
  ShangCheng();
  QiChuang();
  printf("hello world\r\n");
  system("pause");
  return 0;
}
