#include <stdio.h>
#define MAXLINE 1000 //入力業行の最大長

int getline2(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len;               //現在行の長さ
  int max;               //最大長
  char line[MAXLINE];    //入力行
  char longest[MAXLINE]; //最長行

  max = 0;
  while ((len = getline2(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) {
    printf("%s", longest);
  }
  return 0;
}

int getline2(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\n';
  return i;
}

void copy(char to[], char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
