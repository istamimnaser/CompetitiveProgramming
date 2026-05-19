#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<vector<int>> blocks(n);
    for(int i = 0; i < n; i++){
        blocks[i].push_back(i);
    }
    
    auto find_position = [&](int block) -> pair<int, int> {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < blocks[i].size(); j++){
                if(blocks[i][j] == block) return {i, j};
            }
        }
        return {-1, -1};
    };
    
    auto clear_above = [&](int pos, int idx){
        for(int i = idx + 1; i < blocks[pos].size(); i++){
            int blk = blocks[pos][i];
            blocks[blk].clear();
            blocks[blk].push_back(blk);
        }
        blocks[pos].erase(blocks[pos].begin() + idx + 1, blocks[pos].end());
    };
    
    string cmd;
    while(cin >> cmd && cmd != "quit"){
        int a, b;
        string prep;
        cin >> a >> prep >> b;
        
        auto [pos_a, idx_a] = find_position(a);
        auto [pos_b, idx_b] = find_position(b);
        
        if(pos_a == pos_b) continue;
        
        if(cmd == "move"){
            clear_above(pos_a, idx_a);
            if(prep == "onto"){
                clear_above(pos_b, idx_b);
            }
            int block = blocks[pos_a].back();
            blocks[pos_a].pop_back();
            blocks[pos_b].push_back(block);
        }
        else if(cmd == "pile"){
            if(prep == "onto"){
                clear_above(pos_b, idx_b);
            }
            vector<int> pile(blocks[pos_a].begin() + idx_a, blocks[pos_a].end());
            blocks[pos_a].erase(blocks[pos_a].begin() + idx_a, blocks[pos_a].end());
            for(int block : pile){
                blocks[pos_b].push_back(block);
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << i << ":";
        for(int block : blocks[i]){
            cout << " " << block;
        }
        cout << "\n";
    }
    
    return 0;
}