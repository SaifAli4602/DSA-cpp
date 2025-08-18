// this code is square root find



 #include<iostream>
 using namespace std;

 int findSqer(int n){
    int s=0;
    int e=n;
    int target=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
       if(mid*mid==target){
        return mid;
       }
       else if(mid*mid>target){
        e=mid-1;
       }
       else{
        ans=mid;

        s=mid+1;
       }
       mid=s+(e-s)/2;
    }
    return ans;

 }
 int main(){
    cout<<"enter the number"<<endl;
    int n; 
    cin>>n;
    int ans=findSqer(n);
    cout<<"ans is "<<ans<<endl;
    return 0;

 }
