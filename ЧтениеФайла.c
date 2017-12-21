  #include <stdio.h>
      #include <stdlib.h>

      #define LEN 50

      int main(void)
      {
        puts("Text file operations");
        char cArray[LEN];
        FILE *pData = fopen("C:\\Data.dat", "r");
        if(pData == NULL)
        {
          puts("Problems");
          return EXIT_FAILURE;
        }
        while(fgets(cArray, LEN, pData) != NULL)
        {
          printf("%s", cArray);
        }

        fclose(pData);
        return EXIT_SUCCESS;
      }
