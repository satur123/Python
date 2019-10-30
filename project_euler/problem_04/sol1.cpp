"""
Problem:
A palindromic number reads the same both ways. The largest palindrome made from
the product of two 2-digit numbers is 9009 = 91 x 99.

Find the largest palindrome made from the product of two 3-digit numbers which
is less than N.
"""
#include<bits/stdc++.h>
using namespace std;
int pal(int a)
{
    vector<int>v;
    int p=a;
    while(p)
      {
         v.push_back(p%10);
          p=p/10;
          
      }
    int m=v.size();
    for(int i=0;i<m/2;i++)
      {
           if(v[i]!=v[n-1-i])
            return 0;
      }
    return 1;
}
int main()
{
     int n;
     cin>>n;
    int p=0;
    
    for(int i=999;i>=100;i--)
          {
               
                for(int j=999;j>=100;j--)
                  {
                        if(pal(i*j)&&i*j<n)
                           {
                                
                               if(p<i*j)
                                 p=i*j;
                               
                           }
                       
                            
                  }
          }
      if(p)
    cout<<p<<endl;
     else
      cout<<"No palindrone exist"<<endl;
     return 0;
}
