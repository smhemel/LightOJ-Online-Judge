//
//  main.cpp
//  LightOJ-1014 Iftar party
//
//  Created by S M HEMEL on 8/12/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int t, tno=1, j, k;
    long long int l, p, c, d=0, pr[1200];
    cin >> t;
    while (t--)
    {
        cin >> p>> l;
        c=p-l;
        d=l;
        cout<<"Case "<< tno++ <<":";
        for(p=1, k=0; p*p<=c; p++)
            if(c%p==0)
            {
                pr[k++]=p;
                pr[k++]=c/p;
            } for(p=0; p<k; p++)
                for(l=1; l<k; l++)
                    if(pr[l]<pr[l-1])
                    {
                        c=pr[l-1];
                        pr[l-1]=pr[l];
                        pr[l]=c;
                    }
        for(p=0, j=0; p<k; p++)
            { if(pr[p]>d)
                {
                    cout<<" "<<pr[p];
                    j=1;
                    d=pr[p];
                }
            }
        if(j==0)
            cout<<" impossible"; cout<<endl;
    }
    return 0;
}
