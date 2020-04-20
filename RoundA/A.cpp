#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,b;
    cin >> t;
    int x=0;
    while(x<t)
    {
        cin >> n >> b;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        int ct=-1;
        while(b)
        {
            if(arr[++ct]<=b&&ct<n)
            {
                b-=arr[ct];
            }
            else    {ct--; break;}
        }
        cout << "Case #" << (x+1) << ": " << (ct+1) << "\n";
        x++;
    }
    return 0;
}
