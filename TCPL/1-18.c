#include <stdio.h>
#define MAXLINE 1000
#define True 1
#define False 0

int is_blank(int c);
/*Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines. */
main(){
  int len;
  char text[MAXLINE];

  int i, blank_start, c, j, new_line;
  blank_start = 0;
  j = 1;
  for(i=0; i < MAXLINE-1 && (c=getchar())!=EOF ; ++i){
  text[i] = c;
    if (c == '\n'){
      if (text[i-1] == '\n')
        i = i -1;
        text[i] = c;
      else {
        while(is_blank(text[i-1])){
          i = i - 1;
        }
          i = i + 1;
          text[i] = '\n';
      }
    }
  }
  

  printf("%s", text);

}
int is_blank(int c){
  if (c == '\t' || c == ' ')
    return True;
  else
    return False;
}
