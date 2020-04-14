//kmp算法。
/*分为三部分：
		1、求next数组；
		2、实现字符串查找功能；
		3、主函数部分。
		*/

#include<stdio.h>
#define N 10
void get_next(char T[],int next[]){
 int i=1;
 int j=0;
 next[1]=0;
 while(i<strlen(T)){
  if(j==0||T[i]==T[j]){
   ++i;
   ++j;
   next[i]=j;
  }
  else
   j=next[j];
 }
}
//
int kmp(char s[],char T[],int next[]){
int i=0;
int j=1;
 while(i<=strlen(s)&&j<=strlen(T)){
  if(j==0||(s[i]==T[j-1])){
   ++i;
   ++j;
  }
  else
   j=next[j];
 }

 if(j>strlen(T))
  return (i-strlen(T)+1);
else
  return 0;
 }
//
int main(){
 
  char zhuchuan[100];
  char zichuan[N];
  int next[N],k;
  printf("please input the information of main string:");
  gets(zhuchuan);
  printf("please input the information of search string:");
  gets(zichuan);
  get_next(zichuan,next);
  k=kmp(zhuchuan,zichuan,next);
if(k==0)
   printf("匹配失败！");
else
  printf("\n%d\n",k);
  return 0;
 }
//先记下来，再逐步理解。