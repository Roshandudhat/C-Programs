//uv and lv vowel
#include<stdio.h>
#include<conio.h>
int main()
{
	int uv,lv;
	char c;
	printf("enetr a elfabet:");
	scanf("%c",&c);
	uv=(c=='A' || c=='E'|| c=='I'|| c=='O'|| c=='U');
	lv=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	if(uv||lv)
	printf("is a vowel");
	else
	printf("is a constant");
	return 0;
}
