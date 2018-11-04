//
//  main.cpp
//  LightOJ - 1053
//
//  Created by S M HEMEL on 3/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    unsigned int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int a[4];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        if(((a[0]*a[0])+(a[1]*a[1])) == (a[2]*a[2]))
            cout << "Case " << i << ": yes" << endl;
        else
            cout << "Case " << i << ": no" << endl;
    }
    return 0;
}
