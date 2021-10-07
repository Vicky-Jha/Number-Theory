#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,m,count=0,temp,final=0;
    scanf("%d%d", &n,&m);
    int arr[n],arr2[100];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i]<0){
            arr2[count]=arr[i];
            count++;
        }
    }
    if(count==0){
        printf("0");
    }
    else{
        for(int i=0;i<count;i++){
            for(int j=i+1;j<count;j++){
                if(arr2[i]>arr2[j]){
                    temp=arr2[i];
                    arr2[i]=arr2[j];
                    arr2[j]=temp;
                }
            }
        }
        if(count<=m){
            for(int i=0;i<count;i++){
                final+=arr2[i];
            }
        }
        else{
            for(int i=0;i<m;i++){
                final+=arr2[i];
            }    
        }
        printf("%d", final*(-1));
    }
    
    return 0;
}
