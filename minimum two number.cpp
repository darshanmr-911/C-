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

    int T ,A,B;
    
    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        cin >> A >> B;
        
        if (A < B)
        {
            cout << "Case # " << i << ":" << A <<endl;
        }
        else
        {
            cout << "case # " << i << ":" << B << endl;
        }
    }

    return 0;
}