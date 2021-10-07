#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long n,m,b=0;
    scanf("%lld%lld", &n,&m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%lld", &arr[i]);
    }
    b=(arr[0]-1);
    for(int i=1;i<m;i++){
        if(arr[i]>=arr[i-1]){
            b+=(arr[i]-arr[i-1]);
        }
        else{
            b+=(n-arr[i-1]+arr[i]);
        }
    }
    printf("%lld", b);
    return 0;
}
