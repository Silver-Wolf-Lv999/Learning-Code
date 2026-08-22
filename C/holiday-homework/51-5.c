#include<stdio.h>
#include<string.h>

int main()
{
				char ss[10] = "1,2,3,4,5";
				gets(ss);
				strcat(ss, "6789");
				puts(ss);
				return 0;
}
