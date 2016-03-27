    #include <stdio.h>
    #include <json/json.h>
    #include <libxml/tree.h>
    #include <libxml/parser.h>
    #include <string.h>



int main(int argc, char *argv[]){

    char *filename = malloc(100);
    char *outputName = malloc(100);
    strcpy(filename,argv[1]);

    char *extention = malloc(10);	
    int i = strlen(filename);
    int j=0;



    if(filename == NULL)
    {
    	printf("%s,Please add xml or json file as an input\n\n");
    	
    }
    else
    {
      while(filename[i]!='.')
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
          i--;
      }
      while(filename[i] !='\0')
      {
    			//printf("%c",file[i]);
         extention[j]=filename[i];
    			//printf("%c",extention[i]);
         i++;
         j++;
     }


     if(strcmp(extention,".json")==0)
     {

              // json to xml
     }
     else if(strcmp(extention,".xml")==0){

     }
     else{
        printf("%s\n Please enter extention proper\n" );

    }
}


return 0;
}




