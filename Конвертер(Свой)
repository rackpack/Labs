#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
  
    float t;
    char sys;
    switch (argc)
	{ 	
		case 2:
			t = atoi (argv [1]);
			sys = 'X';
			break;
		
		case 3:
			t = atoi (argv [1]);
			sys = *argv [2];
			break;
	}
    switch (sys){
	case 'C':
	case 'c':
	if (t > -273.15)
        {
            printf("C - %.2f\n", t);
            printf("K - %.2f\n", t+273.15);
            printf("F - %.2f\n", t*1.8 + 32);
        }
            else {printf("A0");} 
            break;
       
        case 'K':
	case 'k':
            if (t > 0)
        {
	    printf("K - %.2f\n", t);
            printf("C - %.2f\n", t - 273.15);
            printf("F - %.2f\n", 1.8*(t - 273)+32);
        }
            else {printf("A0");}
            break;
       
        case 'F':
	case 'f':
            if (t > -459.67 )
        {
	    printf("F - %.2f\n", t);
            printf("C - %.2f\n", (t-32)*0.55);
            printf("K - %.2f\n", ((t-32)/1.8)+273.15);
        }
            else {printf("A0");}
            break;
       	    
        default:
            if (t > -273.15)
        {
            printf("C - %.2f\n", t);
            printf("K - %.2f\n", t+273.15);
            printf("F - %.2f\n", t*1.8 + 32);
        }
            else {
		printf("C = ");
		printf("A0\n");} 
	      if (t > 0)
        {
	    printf("K - %.2f\n", t);
            printf("C - %.2f\n", t - 273.15);
            printf("F - %.2f\n", 1.8*(t - 273)+32);
        }
            else {
		printf("K = ");
		printf("A0\n");}
	    if (t > -459.67 )
        {
	    printf("F - %.2f\n", t);
            printf("C - %.2f\n", (t-32)*0.55);
            printf("K - %.2f\n", ((t-32)/1.8)+273.15);
        }
            else {
		printf("F = ");	
		printf("A0\n");}
            break;
    }
    return 0;
}
