#include<stdio.h>
#include<stdlib.h>
int main(){
char c;
for(;(c = getchar()) != EOF;  ){

if(c == '\n'){printf("\\n");}
else if(c == '\r'){printf("\\r");}
else if(c == ' '){printf("\\b");}
else if(c == '\t'){printf("\\t");}
else if(c == '\0'){printf("\\0");}
else{printf("%c", c);}

//printf("\\n", '\n');

}

return 0;
}