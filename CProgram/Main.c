#include <reg51.h>

	char bdata mem;  
	sbit x1 = mem^0;  
	sbit x2 = mem^1;
	sbit x3 = mem^2;
	sbit x4 = mem^3;
	sbit z = P1^0;

	main() {   
		
		for(mem = 0; mem < 8; mem++){
			P1<<=1; z = (x1 | ~x3 & x4) & (~x1 | x2);
		}
		return 0;
		
  }
	