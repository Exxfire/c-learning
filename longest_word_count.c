//从键盘输入一句英语，返回最长的单词及其长度。
//难点，从键盘输入时存在空格，scanf识别不到。 ->用gets();gets()可以读到空格。
#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int max,i,maxword=0,temp=0;
	printf("please input the sentence:");
	gets(a);
	if(strlen(a)==0){                         //未输入直接执行时.
		printf("input error!\n");
	return 0;
	}
	for(i=0;i<=strlen(a)+1;i++){
		if(a[i]==' '||a[i]=='\0'){
			if(max<temp){
				max=temp;
			maxword=i;
			}
			temp=0;
		}
		else
			temp++;
	}

	printf("the longest word  length is %d.\n",max);
	printf("the longest word is:");
	for(i=maxword-max-1;i<maxword;i++)
		printf("%c",a[i]);
	printf("\n");

	return 0;
}



