//
//  main.cpp
//  LightOJ 1182 - Parity
//
//  Created by S M HEMEL on 10/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int test,n;
    scanf("%d",&test);
    for(int t=1; t<=test; t++){
        scanf("%d",&n);
        printf("Case %d: ",t);
        (__builtin_popcount(n)%2==0) ? puts("even") : puts("odd");
    }
    return 0;
}
