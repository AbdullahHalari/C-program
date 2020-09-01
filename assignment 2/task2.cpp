#include <stdio.h>
int main(){
	
	int a = 125, b = 12345;
long xy = 1234567890;
short sh = 4043;
float ft = 2.13459;
double dd = 1.1415927;
char charc = 'f';
unsigned long udlg = 2541567890;


printf("a + charc =  %d\n",a + charc);
printf("xy + charc = %d\n",xy + charc);
printf("dd + xy = %f\n",dd + xy);
printf("((int) dd) + xy%f\n",((int) dd) + xy);
printf("a + ft =%f\n",a + ft);
printf("sh + b = %d\n",sh + b);
printf("xy + b = %d\n",xy + b);
printf("sh + char =%d\n",sh + charc);
printf("xy + charc =%d\n",xy + charc);
printf("xy + udlg = %d\n",xy + udlg);	
	
	return(0);
	
}
