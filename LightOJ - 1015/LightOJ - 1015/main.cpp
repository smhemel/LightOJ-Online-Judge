//
//  main.cpp
//  LightOJ - 1015
//
//  Created by S M HEMEL on 3/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int test,x,amount;
    cin >> test;
    for(int i=1; i<=test; i++)
    {
        int total = 0;
        cin >> x;
        for(int l=1; l<=x; l++)
        {
            cin >> amount;
            if(amount>0)
                total += amount;
        }
        if(total>=0)
            printf("Case %d: %d\n",i,total);
    }
    return 0;
}

