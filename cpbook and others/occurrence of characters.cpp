#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void main(){
int counts[26] = { 0 };
int i,len;
char *str;

printf("Enter a sentence:");
gets(str);

len = strlen(str);

for (i = 0; i < len; i++) {
    char c = str[i];
    if (!isalpha(c)) continue;

    counts[(int)(tolower(c) - 'a')]++;
}

for (i = 0; i < 26; i++) {
    printf("'%c' has %2d occurrences.\n", i + 'a', counts[i]);
}

getch();
}                        