#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

# define pi 3.14159265358979323846
int main(){
    int n;
    float r = 6371047;
    float lat, lon, lat2, lon2;
    float delta1, delta2, angle;
    float vonkom, vnutrom;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin.precision(10);
        cin >> lat >> lon >>lat2 >>lon2;
        delta1 =abs( lat - lat2);
        delta2 = abs(lon-lon2);

        angle =  sqrt(delta1*delta1+delta2*delta2);
        cout << "angle " << angle <<endl;
        vonkom = abs(angle/180*pi*r);

        vnutrom = abs(sqrt(2*r*r-2*r*r*cos(angle/180*pi)));
        cout.precision(10);
        cout << vnutrom << "vnutrom-vonkom " << vonkom <<endl;
        cout << vonkom-vnutrom << endl;

    }
    cout.precision(10);
    cout << cos(2*pi)<< endl;
    cout << abs(sqrt(2*r*r-2*r*r*cos(8))) << endl;

    
}