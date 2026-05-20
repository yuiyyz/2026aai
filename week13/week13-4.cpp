//week13-4a.cpp SOIT106_ADVANCE_002
#include <stdio.h>
int gcd(int a, int b)
{
    if (a==0) return b;
    if (b==0) return a;
    return gcd( b, a%b );
}
int main()
{
   int a, b;
   scanf("%d%d", &a, &b);
   int ans = gcd(a, b);
   printf("%d %d\n", a/ans, b/ans);
}

// week13-4b.cpp SOIT107_ADVANCE_008_C_C++
#include <iostream>
using namespace std;

int prime(int n)
{
    for (int i=2; i<n; i++) {
        if (n%i==0) return 0; //failed
    }
    return 1; // success!
}

int main(){
    int n; cin>>n;
    cout<<"["<<prime(n)<<"]";
    return 0;
}

