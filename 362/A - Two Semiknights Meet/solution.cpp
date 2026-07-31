#include <bits/stdc++.h>
using namespace std;
 
const int N = 8;
int dx[] = {2, 2, -2, -2};
int dy[] = {2, -2, 2, -2};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        vector<string> a(N);
        pair<int,int> k1, k2;
 
        for (int i = 0; i < N; i++) {
            cin >> a[i];
            for (int j = 0; j < N; j++) {
                if (a[i][j] == 'K') {
                    if (k1 == pair<int,int>{0,0} && !(i==0 && j==0 && k2==pair<int,int>{0,0}))
                        k1 = {i,j};
                }
            }
        }
 
        // Find both knights
        vector<pair<int,int>> knights;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                if (a[i][j] == 'K')
                    knights.push_back({i,j});
 
        k1 = knights[0];
        k2 = knights[1];
 
        // Build graph
        vector<vector<int>> g(64);
 
        auto id = [&](int x,int y){
            return x*8+y;
        };
 
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                for(int k=0;k<4;k++){
                    int ni=i+dx[k];
                    int nj=j+dy[k];
                    if(ni>=0&&ni<8&&nj>=0&&nj<8){
                        g[id(i,j)].push_back(id(ni,nj));
                    }
                }
            }
        }
 
        vector<int> comp(64,-1), color(64,-1);
        bool bip[64];
        int cc=0;
 
        for(int s=0;s<64;s++){
            if(comp[s]!=-1) continue;
 
            queue<int> q;
            q.push(s);
            comp[s]=cc;
            color[s]=0;
            bip[cc]=true;
 
            while(!q.empty()){
                int v=q.front(); q.pop();
 
                for(int to:g[v]){
                    if(comp[to]==-1){
                        comp[to]=cc;
                        color[to]=color[v]^1;
                        q.push(to);
                    }
                    else if(color[to]==color[v]){
                        bip[cc]=false;
                    }
                }
            }
            cc++;
        }
 
        auto bfs=[&](pair<int,int> st){
            vector<int> d(64,-1);
            queue<int> q;
            int s=id(st.first,st.second);
            d[s]=0;
            q.push(s);
 
            while(!q.empty()){
                int v=q.front(); q.pop();
                int x=v/8,y=v%8;
 
                for(int k=0;k<4;k++){
                    int nx=x+dx[k];
                    int ny=y+dy[k];
                    if(nx>=0&&nx<8&&ny>=0&&ny<8){
                        int u=id(nx,ny);
                        if(d[u]==-1){
                            d[u]=d[v]+1;
                            q.push(u);
                        }
                    }
                }
            }
            return d;
        };
 
        vector<int> d1=bfs(k1);
        vector<int> d2=bfs(k2);
 
        bool ok=false;
 
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
 
                if(a[i][j]=='#') continue;
 
                int v=id(i,j);
 
                if(d1[v]==-1||d2[v]==-1) continue;
 
                if(comp[id(k1.first,k1.second)]!=comp[v]) continue;
                if(comp[id(k2.first,k2.second)]!=comp[v]) continue;
 
                if(!bip[comp[v]] || (d1[v]%2==d2[v]%2)){
                    ok=true;
                }
            }
        }
 
        cout<<(ok?"YES":"NO")<<"
";
    }
 
    return 0;
}