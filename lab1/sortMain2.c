#include <stdio.h>
   #include <stdlib.h>
   #include "mySort.h"

int main(int argc, char * argv[])
// argc is the count of the # of command line argument and argv is the array itself
{
 int data[20];
int nDataItems; 
int i; 
 
 if(argc == 1){
    /* Test data */ 
    nDataItems = 4; 
    data[0] = 10; 
    data[1] = 20; 
    data[2] = 30; 
    data[3] = 40; 
    mySort(data, nDataItems); 
	 for(i = 0; i < nDataItems; i++) { 
        printf("%d\n", data[i]); 
 }}
  else if(argc > 1){
	  nDataItems = argc-1;
	      /* Check that the data array is sorted. */ 
    for(i =1; i < argc; i++){
		data[i-1] = atoi(argv[i]); // We did this so that the data array is initialized from zero and argv[i] is filled starting at argv[1] :)
	}		
		 
       for(i = 0; i < nDataItems; i++) 
	   {	
	       mySort(data,nDataItems); 
       }  
        for(i = 0; i < nDataItems; i++) { 
		printf("%d\n", data[i]); }

      }	
  exit(0);
} 
