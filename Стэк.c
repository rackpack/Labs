#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define LIMIT 10


int current, action, get;
float elements[LIMIT], getpull;

void push(void)
{printf("Type a value that you would like to add to stack.\n");
scanf("%d", &get);
if (current < 9) {
current++;
elements[current] = get;
  }
else {
printf("Impossible to add new element, stack is full");  }
 }
void pull(void)
{if (current == -1)
printf("Stack is empty, nothing to pull\n");
else {getpull = elements[current];
elements[current] = 0;
current = current - 1;}
}
void peek(void)
{if (current == -1)
printf("Stack is empty, nothing to peek\n");
else
getpull = elements[current];
}
void showstack(void)
{
int i;
for (i = 0; i < LIMIT;  i++)
printf("%f\n", elements[i]);
}

void lastrecieved(void)
{ if (getpull != -1)
  printf("%f\n", getpull);
  else
  printf("You didn't pull any element, nothing to show\n");
}

int main() {
int i;
for (i = 0; i <  LIMIT; i++)
elements[i] = 0;
current = -1;
getpull = -1;
printf("Choose action that you would like to do. Available commands:\n");
printf("1 - push\n");
printf("2 - pull\n");
printf("3 - peek\n");
printf("4 - showstack\n");
printf("5- lastrecieved\n");
printf("6 - exit\n");
while (action != 6) {
scanf("%d", &action);
if (1 == action)
push();
if (2 == action)
pull();
if (3 == action)
peek();
if (4 == action)
showstack();
if (5 == action)
lastrecieved();
  }
_Exit (EXIT_SUCCESS);
return 0;
}
