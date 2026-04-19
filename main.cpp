// 1-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={1,2,3,4,5};
    int target=6;

    int l=0,r=v.size()-1;
    while(l<r){
        int s=v[l]+v[r];
        if(s==target){ cout<<v[l]<<" "<<v[r]; break;}
        else if(s<target) l++;
        else r--;
    }
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={1,2,3,4,5};
    int target=6;

    int l=0,r=v.size()-1;
    while(l<r){
        int s=v[l]+v[r];
        if(s==target){ cout<<v[l]<<" "<<v[r]; break;}
        else if(s<target) l++;
        else r--;
    }
}
