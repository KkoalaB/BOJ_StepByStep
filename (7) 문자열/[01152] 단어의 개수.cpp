#include <iostream>
#include <string.h>

# define MAX_STR_LEN 5

using namespace std;

char* rtrim(char* s) {
  char t[MAX_STR_LEN];
  char *end;

  strcpy(t, s);
  end = t + strlen(t) - 1;
  while (end != t && isspace(*end))
    end--;
  *(end + 1) = '\0';
  s = t;

  return s;
}

char* ltrim(char *s) {
  char* begin;
  begin = s;

  while (*begin != '\0') {
    if (isspace(*begin))
      begin++;
    else {
      s = begin;
      break;
    }
  }

  return s;
}

char* trim(char *s) {
  return rtrim(ltrim(s));
}

int main() {
    char str[MAX_STR_LEN];
    int cnt = 1;
    cin.getline(str, MAX_STR_LEN);
    strcpy(str, trim(str));
    printf("%s", str);

    for(int i = 0; str[i] != NULL; i++) {
        if(str[i] == ' ') cnt++;
    }

    printf("%d\n", cnt);
}

