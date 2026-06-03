//week15-3a.cpp SOIT108_Advance_006_C_CPP
#include<iostream>
using namespace std;
int GCD(int a, int b){
  if(a==0)return b;
  if(b==0)return a;
  return GCD(b, a%b);
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
//week15-3b.cpp SOIT108_ADVANCE_009
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[100];
    for (int i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    for(int i=N-1; i>=0; i--){
       if(a[i]%2==1)
         printf("%d ", a[i]);
    }
}
