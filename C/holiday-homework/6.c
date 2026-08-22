#include<stdio.h>
int main(){
	double t, x;
	t = (x = 0, x+ 5), t++;
	printf("%lf", t);
	return 0;
}
