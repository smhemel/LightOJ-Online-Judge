//
//  main.cpp
//  LightOJ 1289 - LCM for 1 to n.
//
//  Created by S M HEMEL on 5/22/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#define size 100000100
#define check(n) (pri[n>>6] &(1<<((n>>1)&31)))
#define visit(n) (pri[n>>6]|=(1<<((n>>1)&31)))
using namespace std;
unsigned int pri[size / 64 + 100];
unsigned int prime[5761558];
unsigned int dp[5761558];
int cnt;
void bitwise_sieve()
{
    int root = sqrt(size);
    for(unsigned int i=3; i<=root; i+=2)
        if(!(check(i)))
            for(unsigned int j=i*i; j<=size; j+=2*i)
                visit(j);
    prime[cnt++] = 2;
    for(unsigned int i=3; i<=size; i+=2)
        if(!(check(i)))
            prime[cnt++] = i;
}

unsigned int find_product(int x)
{
    unsigned int ans = 1;
    unsigned int temp;
    for(int i=0; prime[i]*prime[i]<=x; i++) {
        temp = x/prime[i];
        while(temp >= prime[i]) {
            temp /= prime[i];
            ans *= prime[i];
        }
    }
    return ans;
}
int main()
{
    bitwise_sieve();
    unsigned int test,x;
    dp[0] = 2;
    for(unsigned int i=1; i<cnt; i++)
        dp[i] = dp[i-1] * (unsigned int)prime[i];
    scanf("%d",&test);
    for(unsigned int t=1; t<=test; t++) {
        scanf("%d", &x);
        unsigned int ans = find_product(x);
        unsigned int upper = upper_bound(prime, prime+cnt, x) - prime;
        upper--;
        ans *= dp[upper];
        printf("Case %d: %u\n", t, ans);
    }
    return 0;
}
