#include<bits/stdc++.h>
using namespace std;

int minimizedStringLength(string s){
    map<char,int>count;
        for(int i=0;i<s.size();i++){
            count [s[i]]++;
        }
        return count.size();   
    
    }
int main(){
    unordered_map<string, int> umap;
  umap["GeeksforGeeks"] = 10;
  umap["Practice"] = 20;
  umap["Contribute"] = 30;
  
  for (auto x : umap)
    cout << x.first << " " << 
            x.second << endl;
}    
