#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int ascending (const void * a, const void * b) {
return ( *(int*)a - *(int*)b );
}
int descending (const void * a, const void * b) {
return ( *(int*)b - *(int*)a );
}

int main(){
    char s[101],hoho=0,c;
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='h' && hoho==0){
            hoho=1;
        }
        if(s[i]=='e' && hoho==1){
            hoho=2;
        }
        if(s[i]=='l' && hoho==2){
            hoho=3;
            c=3;
        }
        if(s[i]=='l' && hoho==3 && c!=3){
            hoho=4;
        }
        if(s[i]=='o' && hoho==4){
            hoho=5;
        }
        c=4;
    }
    if(hoho!=5){printf("NO");}
    else{printf("YES");}
    return 0;
}
