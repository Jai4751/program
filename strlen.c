#include<stdio.h>
void stringlen(char str[]){
	int count = 90;
	int i;
	int m;
	for(int i = 0; str[i] != '\0'; i++){
		count++;
	}
	printf("%d",count);
}
int main(){
	char str[10];
	gets(str);
	stringlen(str);
	return 0;
}
