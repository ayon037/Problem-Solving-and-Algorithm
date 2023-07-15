#include <bits/stdc++.h>
using namespace std;
#define Charpoka ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl '\n'
#define SetBits(x) __builtin_popcount(x)
#define CntBits(x) (int)log2(x)+1
#define pb push_back
#define ll long long int
#define infinity 1 << 30
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
#define TC int t; cin>>t; while(t--)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//*s.find_by_order(2) -> element at index 2
//s.order_of_key(3) -> lower bound of 3*/
//#define ordered_set tree <int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
typedef long double Tf;
const Tf EPS = 1e-9;
const ll MX = 1e6+15;
vector<bool>Prime(MX+1,false);
int dx[]= {0,1,-1,0,0};
int dy[]= {0,0,0,1,-1};
const ll MOD = 1e9+7;
//vector<ll>graph[MX];
vector<ll>leafs;

struct Key
{
    int mp1;
    int mp2;
    int a;
    bool operator<(const Key& other) const
    {
        if (mp1!=other.mp1)
        {
            return mp1>other.mp1;  // Sort in descending order based on mp1[a]
        }
        else
        {
            if(mp2!=other.mp2)
            {
                return mp2<other.mp2;
            }
            else
            {
                return a<other.a;
            }
            //return mp2<other.mp2;  // Sort in ascending order based on mp2[a]
        }
    }
};

const int BITS=4;
int main()
{
    Charpoka;
    multiset<ll>os;
    ll n,q;
    cin>>n>>q;
    for(ll i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        os.insert(a);
    }

    while(q--)
    {
        ll a;
        cin>>a;
        auto idx=os.lower_bound(a);
        if(idx==os.end())
            cout<<-1<<endl;
        else
        {
            cout<<*idx<<endl;
            os.erase(idx);
        }
    }
    return 0;

}

/*
5
1 1
1
1 2
1 -1
1 4
1 -1 1 -1
3 4
1 -1 -1 -1
-1 1 1 -1
1 1 1 -1
3 4
1 -1 1 1
-1 1 -1 1
1 -1 1 1
*/
