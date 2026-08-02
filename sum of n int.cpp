#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, T;

    cin >> T;
    
    for (int i = 1; i <= T; i++)
    {
        cin >> N;
        
        int sum = N * (N + 1) / 2;
        
        cout << "case # " << i << " : " << sum <<"\n";
    }

    return 0;
}