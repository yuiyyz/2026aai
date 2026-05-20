//week13-5a.cpp SOIT107_ADVANCE_009_C
#include<iostream>
using namespace std;

int max_digit(int n)
{
   int ans = n%10;
   while (n>0){
       if(n%10 > ans) ans = n%10;
       n = n / 10;
   }
   return ans;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* よC++  main ㄧ计 单基 よ C  main ㄧ计
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
//week13-5b.cpp SOIT107_013_C_C++
#include<iostream>
using namespace std;

int max(int a, int b, int c, int d)
{
    if (b>a) a = b;
    if (c>a) a = c;
    if (d>a) a = d;
    return a;
}
int min(int a, int b, int c, int d)
{
    if (b<a) a = b;
    if (c<a) a = c;
    if (d<a) a = d;
    return a;
}

int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* よC++ main ㄧΑ 单 よ C  main ㄧΑ
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
//week13-5c.cpp SOIT106_ADVANCE_009
#include <stdio.h>
int f (int N)
{
    int ans = 0;
    while (N>0) {
       ans = ans * 10 + N%10;
       N = N / 10;
    }
    return ans;
}
int main()
{
   int N;
   scanf("%d", &N);
   printf("%d\n",f(N) );
}
