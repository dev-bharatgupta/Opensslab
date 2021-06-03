# include <stdio.h>
# include <string.h>
int main( )
{
    FILE *filePointer ;
   
    char dataToBeRead[50]; 
    // in read mode using "r" attribute
    filePointer = fopen("file.txt", "r") ;
   
    // Check if this filePointer is null
      if ( filePointer == NULL )
    {
        printf( "GfgTest.c file failed to open." ) ;
    }
    else
    {
        
        printf("The file is now opened.\n") ;
        
               while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
        {
        
                     printf( "%s" , dataToBeRead ) ;
      }
        
        // Closing the file using fclose()
        fclose(filePointer) ;
        printf("The file is now closed.") ;
    }
    return 0;       
}
