

 /// find the first occurence 


// #include<iostream>
// #include<vector>
// using namespace std;

// int  FirstOcc(vector<int >v,int target){
//     int start = 0;
//     int end=v.size()-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(v[mid]==target){
//             ans=mid;
//             start=mid +1;
//         }
//         else if (target <v[mid]){
//             end=mid-1;

//         }
//         else if(target>v[mid]){
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//         }
//         return ans;
//     }


// int main(){
//      vector<int >v{1,3,3,3,4,4,4,4,6,7};
//      int target =2;
//      int ans=FirstOcc(v,target);
//       cout<<"ans is "<<ans<<endl;

//       return 0;
// }



// find the last occurence 

// #include<iostream>
// #include<vector>
// using namespace std;

// int  lastOcc(vector<int >v,int target){
//     int start = 0;
//     int end=v.size()-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(v[mid]==target){
//             ans=mid;
//           start=mid +1;
//         }
//         else if (target <v[mid]){
//             end=mid-1;

//         }
//         else if(target>v[mid]){
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//         }
//         return ans;
//     }


// int main(){
//      vector<int >v{1,7,7,7,7,7,7,7};
//      int target =7;
//      int ans=lastOcc(v,target);
//       cout<<"ans is "<<ans<<endl;

//       return 0;
// }



// this code is square root find



//  #include<iostream>
//  using namespace std;

//  int findSqer(int n){
//     int s=0;
//     int e=n;
//     int target=n;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//        if(mid*mid==target){
//         return mid;
//        }
//        else if(mid*mid>target){
//         e=mid-1;
//        }
//        else{
//         ans=mid;

//         s=mid+1;
//        }
//        mid=s+(e-s)/2;
//     }
//     return ans;

//  }
//  int main(){
//     cout<<"enter the number"<<endl;
//     int n; 
//     cin>>n;
//     int ans=findSqer(n);
//     cout<<"ans is "<<ans<<endl;
//     return 0;

//  }\
   

//  divide 2 num  

 
// #include<iostream>
// // #include<vector>
// using namespace std;

// int solve(int devident,int divisor){
//     int s=0;
//     int e=abs(devident);
//     int mid=s+(e-s)/2;
//     int ans=0;
//     while(s<=e){
//         if(abs(mid*divisor)==abs(devident)){
//             return mid;
//         }
//         else if(abs(mid*divisor)>abs(devident)){
//             e=mid-1;
//         }
//         else{
//             ans=mid;
//             s=mid+1;
//         }
//          int mid=s+(e-s)/2;
//     }
    
//     return -ans;
// }
// int main(){
//   int devident =21;
//   int divisor=7;
//   int ans=solve(devident,divisor);
//   cout<<"ans is"<<ans<<endl;
//   return 0;  
// }



// find pivot element


#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
   int s=0;
   int e=(n-1);
   int mid=s+(e-s)/2;

   while(s<e){
    if(arr[mid]>= arr[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
       mid=s+(e-s)/2;
   }
   return s;

}
int main(){
    int arr[5]={3,8,10,17,1};
    cout<<"Pivot is"<<getPivot(arr,5)<<endl;
}