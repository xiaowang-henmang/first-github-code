
#include <stdio.h>

void XiuFuBUG(void){
   printf("�޸�BUG");
}
void ShangCheng(void){
   printf("С�������̳ǿ�ҵ��\r\n");
}
void QiChuang(void){

   printf("������\r\n");
}
int main(){

  XiuFuBUG();
  ShangCheng();
  QiChuang();
  printf("hello world\r\n");
  system("pause");
  return 0;
}
