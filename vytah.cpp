#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, p, tmp;
    cin >> n >> p;
    vector<int> arr;
    vector<int> usor;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    usor.push_back(arr[0]);
    int last = 0;
    for (int i = 1; i < n; i++)
    {
        if(usor[last]!=arr[i]){
            usor.push_back(arr[i]);
            last++;
        }
    }
    int pocet = usor.size();
    if(usor[0]>=p){
        for(auto u: usor){
            cout << u << endl;
        }
    }else if(usor[usor.size()-1]<=p){
        for (int i = usor.size()-1; i >= 0; i--)
        {
            cout << usor[i] << endl;
        }
        
    }else{
        if(usor[pocet-1]-p<p-usor[0] ){
            for (int i = 0; i < pocet; i++)
            {
                if(usor[i]>= p){
                    cout << usor[i]<< endl;
                }
            }
            for (int i = pocet-1; i >= 0; i--)
            {
                if(usor[i]< p){
                    cout << usor[i]<< endl;
                }
            }
        }
        else{
            for (int i = pocet-1; i >= 0; i--)
            {
                if(usor[i]<= p){
                    cout << usor[i]<< endl;
                }
            }
            for (int i = 0; i < pocet; i++)
            {
                if(usor[i]> p){
                    cout << usor[i]<< endl;
                }
            }

        }
    }
    
    
}