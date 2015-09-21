#include <stdio.h>
#include <stdlib.h>
int main(){
	int p = 13 ;
	int a = 100;
	char c[3];
	scanf("%s",c);
	printf("%d",(int)strtol(c,NULL,10) + 10);
	//printf("%d\n",*(p+1));
	//char a[50];
	//scanf("%s", a);
	//printf("%c", a[2]);
}