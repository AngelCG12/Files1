#include <stdio.h>
#include <stdlib.h>

const char written_file[] = "file1.txt";
const char copied_file[] = "file2.txt";

int main()
{

 FILE *writtenfile;   
 FILE *copiedfile;

int character;

writtenfile = fopen(written_file, "r");
	
	if(writtenfile == NULL)	
	{
	printf("Error opening the file for reading\n");
	return(8);
	}


copiedfile = fopen(copied_file, "w+"); 
	
	if(copiedfile == NULL)
	{
	printf("Error opening the file for writing\n");
	return(8);
	}


	while(1)
	{
	character = fgetc(writtenfile); 

	if(character == EOF)  
		{
		break;
		}

	if(character == '\t')		
		{
		fputc(' ', copiedfile);		
		fputc(' ', copiedfile);
		}
		else
		{
		fputc(character, copiedfile);      
		}
	}

fclose(writtenfile);     	
fclose(copiedfile);

return 0;

}

