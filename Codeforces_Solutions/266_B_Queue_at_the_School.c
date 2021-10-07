#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,t;
    scanf("%d %d", &n,&t);
    char c[100];
    scanf("%s", c);
    while(t--){
        for(int i=0;i<n-1;i++){
            if(c[i]=='B' && c[i+1]=='G'){
                c[i]='G';
                c[i+1]='B';
                i++;
            }
        }
    }
    printf("%s", c);
    return 0;
}
