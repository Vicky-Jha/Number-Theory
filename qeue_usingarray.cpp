#include<iostream>
#include<vector>
using namespace  std;
#define lq(i,a,n) for(int i=a;i<n;i++)
typedef vector<int> v;
v que;
int frnt=-1,rear=-1,n,item;
void insertion(){
   cout<<"enter element to inserted\n";

   cin>>item;
   if(( frnt==0 && rear==n ) || (frnt==rear+1)){
   cout<<"OVERRFLOW condition\n";
   return;
   }
   else if(frnt==-1){
     rear=0; frnt=0;
   }
   else if(rear==n-1){
   rear=0;
   }
   else{
    rear=rear+1;
   }
   que[rear]=item;
    cout<<"element inserted\n";

}
void delete_q(){
   if(frnt==-1){
    cout<<"underflow condition\n";
   }
    item=que[frnt];
    cout<<"element deleted\n";
    if(frnt==rear){
        frnt=-1; rear=-1;
    }
    else if(frnt==n-1){
        frnt=0;
    }
    else{
        frnt=frnt+1;
    }


}
void dis_p(){
    if(frnt==-1){
        cout<<"list is empty\n";
        return;
    }
    else if(frnt<=rear){
        lq(i,frnt,rear+1){
        cout<<que[i]<<" ";
         }
    }
    else{
        lq(i,frnt,n-1){
          cout<<que[i]<<" ";
        }
        lq(i,0,rear+1){
          cout<<que[i]<<" ";
        }
    }

  cout<<endl;
}

int main(){
  cout<<"enter the max cp of queue\n";
cin>>n;
que.resize(n);
lq(i,0,n){
  insertion();
}
dis_p();
 delete_q();
dis_p();

  insertion();
 dis_p();
}
