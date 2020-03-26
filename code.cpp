#include<bits/stdc++.h>

#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define ins insert
#define mp make_pair
#define sz(s) (int)s.size()
#define forp(i,a,b) for( i=a;i<=b;i++)
#define rep(i,n) for( i=0;i<n;i++)
#define ren(i,n) for( i=n-1;i>=0;i--)
#define forn(i,a,b) for( i=a;i>=b;i--)
#define w(t) while(t)
#define on cout<<"\n"
#define o2(a,b) cout<<a<<" "<<b
#define os cout<<" "
#define bitcount __builtin_popcount
#define gcd __gcd
#define all(v) v.begin(),v.end()
#define mem(n,m) memset(n,m,sizeof(n))
#define pii pair<int,int>
#define pll pair<long long,long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define mii map<int,int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define ford(container, it) for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for(__typeof(container.begin()) it = a; it != b; it++)

#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define EPSILON 1e-9
#define PI 3.14159265358979323846
#define inf 999999999999999999
#define siz 100000
#define SIZ 1000000
#define SIZE 200000
typedef long long int  ll;
typedef unsigned long long ull;
typedef long double ldo;
typedef double db ;
using namespace std;
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


