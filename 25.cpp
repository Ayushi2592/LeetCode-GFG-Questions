#include <bits/stdc++.h>
using namespace std;
bool search( int nums[],int n, int target) {
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return true;
            }
        }
        return false;
        
    }
int main(){
    int nums[] = {1,2,3,4,5,6};
    int n;
    cin>>n;
    int target;
    cin>>target;

}    