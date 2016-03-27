#include <stdio.h>
#include <json/json.h>
#include <libxml/tree.h>
#include <libxml/parser.h>
#include <string.h>

int takeExtension(char *file)
{
char *extention = malloc(10);	
int i = 0;
int j=0;
while(file[i]!='.')
{
	/*
	if(i==0)
	{
		return 0;
	}
	else
	{
		i--;	
	}
	*/
	i++;
}
	while(file[i] !='\0')
		{
			//printf("%c",file[i]);
			extention[j]=file[i];
			//printf("%c",extention[i]);
			i++;
			j++;
		}
		printf("%s\n", extention);
	 return 0;
}

int main(int argc, char *argv[]){
 
  char *filename = malloc(100);
  char *outputName = malloc(100);
  strcpy(filename,argv[1]);

if(filename == NULL)
{
	printf("%s,Please add xml or json file as an input\n\n");
	
}
 else
 {
 	takeExtension(filename);
		
 }


 return 0;
}




