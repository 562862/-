#include<stdio.h>

int main()
{
	for(int n=100;n<=999;n++){
	int g=n%10;
	int s=n/10%10;
	int b=n/100;
    if(n==g*g*g+s*s*s+b*b*b)
    {
    	printf("%d��ˮ�ɻ���\n",n);
	}
    }
	return 0;
}
