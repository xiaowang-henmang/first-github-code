
#include <stdio.h>
void XiuFuBUG(void){
  printf("�޸�BUG");
}
void QiChuang(void){

  printf("������\r\n");
}
int main(){
  XiuFuBUG();
  QiChuang();
  printf("hello world\r\n");
  system("pause");
  return 0;
}
