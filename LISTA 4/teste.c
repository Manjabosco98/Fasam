#include <stdio.h>
#include <stdlib.h>

int main(){
 UINT CPAGE_UTF = 65001;
 UINT CPAGE_DEFAULT = GetConsoleOutput();
 SetConsoleOutputCp(CPAGE_UTF8);

 int num;

 printf("Digite um número:");
 scanf("%d", &num);

 SetConsoleOutputCP(CPAGE_DEFAULT);
 return 0;
}