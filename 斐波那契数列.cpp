#include<stdio.h>

int fibonacci(int n){
	if(n==1||n==2){
		return 1;
	}else{
		int a=1,b=1,c;
		for(int i=3;i<=n;i++){
			c=a+b;
			a=b;
			b=c;
		}return c;
	}
}
int main (){
	int n;
	printf("输入测试数据的组数:");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		int a;
		printf("输入正整数 a:");
		scanf("%d",&a);
		int result =fibonacci(a);
		printf("斐波那契数列中第%d个数是%d.\n",a,result);
	} return 0; 
}
