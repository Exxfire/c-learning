//�Ӽ�������һ��Ӣ�������ĵ��ʼ��䳤�ȡ�
//�ѵ㣬�Ӽ�������ʱ���ڿո�scanfʶ�𲻵��� ->��gets();gets()���Զ����ո�
#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int max,i,maxword=0,temp=0;
	printf("please input the sentence:");
	gets(a);
	if(strlen(a)==0){                         //δ����ֱ��ִ��ʱ.
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



