#include <stdio.h>
void reverse(char line[], int line_end);
main(){
  char line[1000];
  int c, i;
  for(i=0; (c = getchar()) != EOF; ++i){

    if (c == '\n'){
      reverse(line, i);
      i = -1;
    }
    else
      line[i] = c;

  }
}
void reverse(char line[], int line_end){
  int i;
  for (i = line_end-1;i >= 0; --i)
    putchar(line[i]);
  putchar('\n');
}
