
// find the last occurence 

#include<iostream>
#include<vector>
using namespace std;

int  lastOcc(vector<int >v,int target){
    int start = 0;
    int end=v.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(v[mid]==target){
            ans=mid;
          start=mid +1;
        }
        else if (target <v[mid]){
            end=mid-1;

        }
        else if(target>v[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
        }
        return ans;
    }


int main(){
     vector<int >v{1,7,7,7,7,7,7,7};
     int target =7;
     int ans=lastOcc(v,target);
      cout<<"ans is "<<ans<<endl;

      return 0;
}

