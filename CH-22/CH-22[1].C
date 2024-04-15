#include<stdio.h>

void main()
{
      FILE *SFile, *dFile;

       char f[30];

    SFile =fopen ("read.txt", "r");
     dFile = fopen ("write.txt", "w");

        while(fgets(f,30,SFile) != NULL)
		{
             fputs (f,dFile);
        }

         fclose(SFile);
         fclose(dFile);
         printf("File open successfully.-\n");
  
}
