//  divide 2 num  

 
#include<iostream>
#include<vector>
using namespace std;

int solve(int devident,int divisor){
    int s=0;
    int e=abs(devident);
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(abs(mid*divisor)==abs(devident)){
            return mid;
        }
        else if(abs(mid*divisor)>abs(devident)){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
         int mid=s+(e-s)/2;
    }
    
    return -ans;
}
int main(){
  int devident =21;
  int divisor=7;
  int ans=solve(devident,divisor);
  cout<<"ans is"<<ans<<endl;
  return 0;  
}
