# include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);

/* Print the length of arbitrary long input lines and as much as possible
of the text */
main()
{
  int len;
  char line[MAXLINE];
  len = getline(line, MAXLINE);
  printf("%d\n%s",len, line);

}
/* getline: read a line into s, return length */
int getline(char s[],int lim)
{
  int c, i;
  for(i=0; i< lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
