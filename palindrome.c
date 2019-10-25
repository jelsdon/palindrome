#include <string.h>
#include <stdio.h>
int main(int c,char **v){
  int i=0,l=0;l=strlen(v[1]);int j=0;int is_palindrome = 1;printf("String is\t"); 
  while(i<=l-1)putchar(v[1][i++]);
 printf("\n");printf("Reverse string is\t");
  while(i-->0)putchar(v[1][i]);
  printf("\n");
for(i = 0, j = l - 1; i < l / 2; i++, j--) {
        if(v[1][i] != v[1][j]) {
            is_palindrome = 0;
            break;
        }
    }

    printf("String %s a palindrome.\n", is_palindrome ? "is" : "is not");

    return(0);

}
