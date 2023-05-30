//아직 미완성

#include "./headers.h"

void split_with_semicolon(char* s_g)
{
    /*int arc = 0;
    
    while (s_g[arc] != NULL){
		if(c_g == ':')
        
	}*/
}

void my_chown(char* (*argv)[])
{
    int num;
    int size = 256;

    char curDir[256];
    getcwd(curDir, size);

    int arc = 0;
    
    while((*argv)[arc] != NULL){
        arc++;
    }

    //chmod [s]:[g] filename


    
}