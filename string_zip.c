//����һ���ַ������������������ַ�����ѹ����
//�����ö�̬�ڴ����ķ�����

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n;
	char *str;
	int cut_down(char* s);
	printf("please input the string length:");
	scanf("%d",&n);
	str=(char *)malloc(n*sizeof(char));
	printf("please input string:");
	scanf("%s",str);
	cut_down(str);
	free(str);
	return 0;
}
int cut_down(char*s){
	int i,count=1;
	for(i=0;i<strlen(s);i++){
		while(s[i]==s[i+1]){
			count++;
			i++;}
		if(count!=1){
		printf("%d%c",count,s[i]);
		count=1;}
		else
			printf("%c",s[i]);
	}
	printf("\n");
	return 0;
}