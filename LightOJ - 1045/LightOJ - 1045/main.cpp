//
//  main.cpp
//  LightOJ - 1045
//
//  Created by S M HEMEL on 3/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
double fib_digit[1000011];
void digit(){
    fib_digit[0] = log(1);
    for(int i=1;i<=1000011; i++)
        fib_digit[i] = fib_digit[i-1]+log(i*1.0);
}
int main()
{
    digit();
    int n,m,test,t=0;
    cin >> test;
    while (test--)
    {
        t++;
        cin >> n >> m;
        printf("Case %d: %d\n",t,(int)(fib_digit[n]/log(m)+1));
    }
    return 0;
}
