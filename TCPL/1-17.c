# include <stdio.h>
#define MAXLINE 1000



/* Write a program to print all input lines that are longer than
80 characters */
main()
{
  int len;
  char text[MAXLINE];

  int i, line_start, c;
  line_start = 0;
  for(i=0; i < MAXLINE-1 && (c=getchar())!=EOF ; ++i)
  {
    if (c == '\n')
      if (i - line_start < 80)
        i = line_start;
      else
         line_start = i;
    text[i] = c;
  }
  printf("%s", text);

}
