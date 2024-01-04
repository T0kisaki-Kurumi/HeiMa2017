#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    static bool cmp(int a, int b){
        return a>b;
    }

    void solve(){
        vector<int> v{1,2,3,4,5};
        sort(v.begin(), v.end(), cmp);
        for(int i: v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
};
 
int main(){
    Solution s;
    s.solve();

    system("pause");
    return 0;
}