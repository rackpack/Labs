#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char a[256];
	int i=0;

	file = fopen("data_1.txt", "r");

	while ((a[i] = fgetc (file)) != EOF) {
		if (a[i] == '\n') {
			a[i] = '\0';
			printf("%s\n",a);
			i = 0;
		}
		else i++;
	}
	a[i] = '\0';
	printf("%s\n",a);

    return 0;
}
