

 /// find the first occurence 


#include<iostream>
#include<vector>
using namespace std;

int  FirstOcc(vector<int >v,int target){
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
     vector<int >v{1,3,3,3,4,4,4,4,6,7};
     int target =2;
     int ans=FirstOcc(v,target);
      cout<<"ans is "<<ans<<endl;

      return 0;
}




   




