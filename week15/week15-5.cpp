//week14-5a.cpp SOIT108_Advance_011
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int hh = N / 60 /60;
    int mm = N / 60 % 60;
    int ss = N % 60;
    printf("%02d:%02d:%02d",hh,mm,ss);
}
//week15-5b.cpp SOIT108_Advance_012
#include <stdio.h>
int main()
{
    int K;
    scanf("%d", &K);
    //1+2+...+N > K, tell me N
    int total = 0;
    for (int i=1; i<=1000; i++){
    	total += i;
    	if(total > K){
    	   printf("%d", i);
    	   break;
        }
    }
}
//week15-5c.cpp SOIT108_Advance_014
#include <stdio.h>
int  main()
{
     int N;
     scanf("%d", &N);
     int total = 0;
     for(int i=0; i<=N; i++){
        total += 2*i + 1;
     }
     printf("f(%d)=%d", N, total);
}
