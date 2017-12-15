#include "stdio.h"
#include "stdlib.h"

int main (int argc, char *argv[2])
{
	float temp;
	float F, K, C;
	char sys;
	switch (argc)
	{
		case 2:
			temp = atoi (argv [1]);
			sys = 'X';
			break;

		case 3:
			temp = atoi (argv [1]);
			sys = *argv [2];
			break;
	}
	switch (sys)
	{
		case 'C':
		case 'c':
			if(*argv[1]==-273.15)
			{printf ("Абсолютный ноль");
			 break;
			}
			else{
			F = temp * 1.8 + 32.0;
			K = temp + 273.15;
			printf ("%.2f F\n%.2f K",F, K);
			break;}

		case 'F':
		case 'f':
			if(((5.0/9.0) * (temp - 32.0))==-273.15)
			{printf ("Абсолютный ноль");
			 break;
			}
			else
			{
			C = (5.0/9.0) * (temp - 32.0);
			K = (5.0/9.0) * (temp - 32.0) + 273.15;
			printf ("%.2f C\n%.2f K",C, K);
			break;}

		case 'K':
		case 'k':
			if((temp - 273.15)==-273.15)
			{printf ("Абсолютный ноль");
			 break;
			}
			else
			{
			C = temp - 273.15;
			F = 9.0 * (temp - 273.15)/5.0 + 32.0;
			printf ("%.2f C\n%.2f F",C, F);
			break;}
		default:
			if ( (*argv[1]==-273,15)&&((5.0/9.0) * ((temp - 32.0)==-273.15)&&(temp - 273.15)==(-273.15)))
			    {
				    printf ("Абсолютный Ноль");
				    break;
			    }
			    else
			    {
			F = temp * 1.8 + 32.0;
			K = temp + 273.15;
			printf ("%.2f C: \n%.2f F\n%.2f K\n\n",temp, F, K);

			C = (5.0/9.0) * (temp - 32.0);
			K = (5.0/9.0) * (temp - 32.0) + 273.15;
			printf ("%.2f F: \n%.2f C\n%.2f K\n\n",temp, C, K);

			C = temp - 273.15;
			F = 9.0 * (temp - 273.15)/5.0 + 32.0;
			printf ("%.2f K: \n%.2f C\n%.2f F\n\n",temp, C, F);
			break;}
	}
	return 0;
}

