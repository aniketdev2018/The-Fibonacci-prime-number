#include<bits/stdc++.h>
using namespace std;

/*
commenting for better rich
 Follow this .
1. variable name should be sync with the actual definition
2. indentation is necessary for code to look healthy
3. avoid multiple cout and cin*/
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag=0;
        // first store  all the prime with  fibonacci number in the format of string, since there are very few numbers.which are prime and also belong to fabonacii
   string l[]={"2","3", "5", "13", "89", "233", "1597", "28657", "514229","433494437", "2971215073", "99194853094755497","1066340417491710595814572169","19134702400093278081449423917","475420437734698220747368027166749382927701417016557193662268716376935476241"};
   for(int i=0;i<15;i++)
   {
       if(s==l[i])
       {
           flag=1;
           break;
       }
   }
   if(flag==1)
   cout<<"1"<<endl;
   else
   cout<<"0"<<endl;
    }
}


