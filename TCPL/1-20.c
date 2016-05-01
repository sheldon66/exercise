/* Replace tab stop with spaces */
#include <stdio.h>
#define TABSTOP 8


main(){
  int i, j, c, space_number;
  char text[1000];
  for(i=0; i<1000; ++i){
    c = getchar();
    if(c == '\t'){
      space_number =TABSTOP - i % TABSTOP;
      i = -1;
      for(j=0; j<space_number; ++j)
        putchar(' ');
    }
    else{
      if (c == '\n')
        i = -1;
      if (c == EOF)
        return 0;
      putchar(c);
    }



  }
}
