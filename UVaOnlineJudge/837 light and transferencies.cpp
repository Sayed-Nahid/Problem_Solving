#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(3);
    cout.setf(ios::fixed);
    int t, lno, size, i;
    cin >> t;
    while(t--){
        cin >> lno;
        size=lno*2;
        double coef[lno], dummy;
        pair<double, int> line[size];
        for(i=0; i<lno; i++){
            cin >> line[2*i].first >> dummy >> line[2*i+1].first >> dummy >>  coef[i];
            line[i*2].second=i;
            line[i*2+1].second=i;
        }
        set<int> load;
        sort(line, line+size);
        cout << size+1 << endl;
        for(i=0; i<=size; i++){
            if(i==0) cout << "-inf ";
            else cout << line[i-1].first << " ";
            if(i==size) cout << "+inf ";
            else cout << line[i].first << " ";
            double percentege=1.0;
            if(i>0 && i<size){
                for(set<int>::iterator it=load.begin(); it!=load.end(); it++) percentege *= coef[*it];
            }
            cout << percentege << "\n";
            if(load.count(line[i].second)==0) load.insert(line[i].second);
            else load.erase(line[i].second);
        }
        if(t) cout << "\n";
    }
    return 0;
}
