#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
/* project1 */
	
		int x, y, z, m;
		int a,b,c;
	
		x=1;
		z=2; 
		a=3;
		b=4;
		c=5;
	
		y= a*x*x + b*x + c;
		m = (x+y+z)/3;
	
		printf("y=%d, m=%d\n", y, m);
	
	

	/*project2 */

	
		int k=3;
		int cond1, cond2;
	
		cond1 = (2<k) && (k<5);
		cond2 = (k>1)||(k<4)&&(k>3);
	
		printf("cond1 = %d, cond2 = %d\n", cond1, cond2);
	


	/*project 3 */
	

		int s, l;
		printf("input two integers : ");
		scanf("%d %d", &s,&l);
		
		printf("+ result if : %d\n", s+l);
		printf("- result if : %d\n", s-l);
		printf("* result if : %d\n", s*l);
		printf("/ result if : %d\n", s/l);
		printf("% result if : %d\n", s%l);
	
		return 0;
	}

