#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    float t;
    char system;
    sscanf(argv[1], "%f", &t);
    sscanf(argv[2], "%c", &system);
    switch (system) {
        case 'C': //Если выбран Цельсий
            if (t > -273.15)
        {
            printf("C - %.2f\n", t);
            printf("K - %.2f\n", t+273.15);
            printf("F - %.2f\n", t*1.8 + 32);
        }
            else {printf("Вводимая температура ниже абсолютного нуля\n");} 
            break;
        case 'c': 
            if (t > -273.15)
        {
            printf("C - %.2f\n", t);
            printf("K - %.2f\n", t+273.15);
            printf("F - %.2f\n", t*1.8 + 32);
        }
            else {printf("Вводимая температура ниже абсолютного нуля\n");}
            break;
        case 'K':
            if (t > 0)
        {
            printf("C - %.2f\n", t - 273.15);
            printf("K - %.2f\n", t);
            printf("F - %.2f\n", 1.8*(t - 273)+32);
        }
            else {printf("Вводимая температура ниже абсолютного нуля\n");}
            break;
        case 'k':
            if (t > 0)
        {
            printf("C - %.2f\n", t - 273.15);
            printf("K - %.2f\n", t);
            printf("F - %.2f\n", 1.8*(t - 273)+32);
        }
            else {printf("Вводимая температура ниже абсолютного нуля");}
            break;
        case 'F':
            if (t > -459.67)
        {
            printf("C - %.2f\n", (t-32)*0.55);
            printf("K - %.2f\n", ((t-32)/1.8)+273.15);
            printf("F - %.2f\n", t);
        }
            else {printf("Вводимая температура ниже абсолютного нуля\n");}
            break;
        case 'f':
            if (t > -459.67)
        {
            printf("C - %.2f\n", (t-32)*0.55);
            printf("K - %.2f\n", ((t-32)/1.8)+273.15);
            printf("F - %.2f\n", t);
        }
            else {printf("Вводимая температура ниже абсолютного нуля");}
            break;
        default:
            printf("Неверный ввод - выбрана с.с. цельсий\n");
            if (t > -273.15)
            {
                printf("C - %.2f\n", t);
                printf("K - %.2f\n", t+273.15);
                printf("F - %.2f\n", t*1.8 + 32);
            }
            else {printf("Вводимая температура ниже абсолютного нуля\n");}
            break;
    }
    return 0;
}
