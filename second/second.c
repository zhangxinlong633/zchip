#include <stdio.h>

int main(int argc, char **argv)
{
	int op, a, b;
	switch(op) {
		case 0: 
			a = a + b;
			break;
		case 1: 
			a = a - b;
			break;
		case 2: 
			a = a * b;
			break;
		case 3: 
			a = a / b;
			break;
		case 4: 
			a = b;
			break;
		case 5: 
			a = a << b;
			break;
		case 6: 
			a = a >> b;
			break;
		case 7: 
			a = a & b;
			break;
		case 8: 
			a = a | b;
			break;
		case 9: 
			a = !a;
			break;
		case 10: 
			a = a ^ b;
			break;
		case 11: 
			a = a + 1;
			break;
		case 12: 
			a = a - 1;
			break;
	}
	return 0;
}
