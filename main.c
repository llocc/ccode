#include <stdio.h>
int main(){
    FILE * file = fopen( "abc.txt", "a" );
    fprintf( file, "abc %d\n", 1 );
    fclose(file);
    return 0;
}
