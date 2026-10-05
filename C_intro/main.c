//#define clearBuffer() while (getchar() != '\n');
#include <stdio.h>


int main()
{
	int x = 4;
	
	char txt[10] = "Hello!";
	
	printf("%s\n", txt );
    
	printf("%d\n", x );
    
	getchar();	//pause
	
	return 0;	//exit	
}
