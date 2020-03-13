#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k, tmp;
    cin >> n >> k;
    vector<int> arr;
    vector<int> rozdiel;
    set<int> que;
    
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n-k+1; i++)
    {
        rozdiel.push_back(arr[i+k-1]-arr[i]);
    }
    int minimal = 0;
    int localmin;
    // for (int i = 0; i < k-1; i++)
    // {
    //     que.insert(rozdiel[i]);
    // }
    
    // for(auto u: rozdiel){
    //     cout << u << " ";
    // }
    // cout << endl;
    for (int i = 0; i < n-k-1; i++)
    {
        localmin = rozdiel[i];
        for (int j = 0; j < k; j++)
        {
            // cout << rozdiel[i+j] << ' ';
            if (rozdiel[i+j]< localmin){
                localmin = rozdiel[i+j];
            }   
        }
        if (localmin> minimal)
        {
            minimal = localmin;
        }
        // cout << endl;
        
        
    }
    minimal = max(rozdiel[0], minimal);
    minimal = max(rozdiel[n-1], minimal);
    
    cout << minimal << endl;
    


    

}