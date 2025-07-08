// #include<iostream>
// using namespace std;


//  factorial number wala program hai in recursion 


// int factorial(int n){
 
//  //  first always used Base condition

//     if(n==1){
//         return 1;
//     }
// //   recursive call

//     int ans=n*factorial(n-1);
//     return ans;
// }
// int main()
// {
//     cout<<"enter the number"<<endl;
//     int n;
//     cin>>n;
//     int ans= factorial(n);
//     cout<<"this is a ans ="<<ans<<endl;
//     return 0;
// }


// uper wala same code hai 


// #include<iostream>
// using namespace std;

// int factorial(int n){
 
//  //  first always used Base condition

//     if(n==1){
//         return 1;
//     }
// //   recursive call

//     int chotiProblem=factorial(n-1);
//     int badiProblem=n*chotiProblem;

//     return (badiProblem);
// }
// int main()
// {
//     cout<<"enter the number"<<endl;
//     int n;
//     cin>>n;
//     int ans= factorial(n);
//     cout<<"this is a ans ="<<ans<<endl;
//     return 0;
// }


//  this is program a print counting in reverse 


// #include<iostream>
// using namespace std;

//  void printCounting(int n){

// //  base condition

//     if(n==0){
//         return ;
//     }
// //proceccing 

//     cout<<n;
// //recursive call
//      printCounting(n-1);
//  }
// int main(){
//     cout<<"enter the number "<<endl;
//     int n;
    
//    cin>>n;
//    printCounting(n);
//     cout<<endl;
//     return 0;
// }


// //  fibonacci series program


// //  #include<iostream>
// // using namespace std;

// // int fib(int n){
// //     if(n==0||n==1){               //base condition
// //         return n;
// //     }
   
// //     int ans=fib(n-1) +fib(n-2);
// //     return ans;
// // }

// // int main(){
// //     cout<<"enter the number "<<endl;
// //     int n;
// //     cin>>n;
// //     int ans=fib(n);
// //     cout<<ans<<endl;
// //     return 0;
// // // }



// //   climbing strais 

// // #include<iostream>
// // using namespace std;

// // int climbingStrais(int n){
// //     // base condition 
// //     if(n==0||n==1){
// //         return 1;
// //     }
// //     // recursive call

// //     int ans=climbingStrais(n-1)+climbingStrais(n-2);
// //     return ans;
// // }

// // int main(){
// //     cout<<"enter the number "<<endl;
// //     int n;
// //     cin>>n;

// //     int ans=climbingStrais(n);
// //     cout<<"this is a ans = "<<ans<<endl;
// //     return 0;
// // }


// // // basic print arrary
// // #include<iostream>
// // using namespace std;
// // int main(){

// // int arr[5]={1,2,3,4,5};
// // int size=5;
// // int i;
// // for(i=0;i<5;i++){
// //     cout<<arr[i];
// // }
// // }



//  //      // print array

// // #include<iostream>
// // using namespace std;

// // void   printArr(int arr[],int n,int i){
// //     // base case
// //     if(i>=n){
// //         return ;
// //     }
// //     // recursive call
// //     cout<<arr[i]<<" ";

// //       printArr(arr,n,i+1);
// // }
// // int main(){
// //     int arr[5]={10,20,50,60,32};
// //     int n=5;
// //     int i=0;
// //     printArr(arr,n,i);
// // }


// //  FIND THE MAXIMUM ELEMENT ARRAY USING RECURSION 

// // #include<iostream>
// // #include<limits.h>//  This header file used only INT_MIN
// // using namespace std;

// // void  maximumnum(int arr[],int n,int i,int& maxi){
// //     // base case
// //     if(i>=n){
// //         return ;
// //     }

// //   // ak case hm solve karenge 

// //     if(arr[i]>maxi){   
// //         maxi=arr[i];
// //     }

// //    // baki recursion sambhal lega

// //      maximumnum(arr,n,i+1,maxi);
// // }
// // int main(){
// //     int arr[]={10,50,60,30,4};
// //     int n=5;
// //     int i=0;
// //     int maxi=INT_MIN;    //OR  maxi=0
        
// //     maximumnum(arr,n,i,maxi);
// //     cout<<"this is maximum value "<<maxi;

// // }


//    //  //CHECK THE STRING IN PRESENT CHARECTOR 


// // #include<iostream>
// // using namespace std;

// // bool checkkey(string str,int n,int i,char key){
// //     // base case
// //     if(i>=n){
// //         return false;
// //     }
// //     if(str[i]==key){
// //         return true;
// //     }
// //      return checkkey(str,n,i+1,key);
  
// // }
// // int main(){
// //     string str="arbajkhan";
// //     int n=str.length();
// //     int i=0;
// //     char key='r';
// //     bool ans =checkkey(str,n,i,key);
// //     cout<<ans;
// // }



//    //  //    THE GIVEN ARRAY IS CHECK SORTED OR NOT SORTED

// // #include<iostream>
// // #include<vector>
// // using namespace std;

// // bool checkSorted(vector<int>arr,int n,int i){
// //   // base case
// //     if(i==n-1){
// //         return true;
// //     }
//  //  // ak case hm solve karenge 
// //     if(arr[i+1]>arr[i]){
// //         i++;
// //         return true;
// //     }
// //     else{
// //         return false;
// //     }
// //  //   baaki recursion smabhal lega
// //     return checkSorted(arr,n,i+1);
// // }
// // int main(){
// //     vector<int>arr={1,20,30,40,50};
// //     int n=arr.size();
// //     int i=0;
// //   bool isSorted=checkSorted(arr,n,i);
// //   if(isSorted){
// //     cout<<"Array is sorted"<<endl;
// //   }
// //   else{
// //     cout<<"Array is not sorted"<<endl; 
// //   }
// //   return 0;
// // }



// //      FIND THE TARGET IN BINARY SEARCH USING RECURSION

// #include<iostream>
// #include<vector>
// using namespace std ;

// int binarySearch(vector<int>&arr,int start,int end,int& target){
//     //base case
//     if(start>end){
//         return -1;

//     }
//     // ak case hm solve karenge 
//     int mid=(start+end)/2;
//     if(arr[mid]==target){
//         return mid;
//     }
//     //  baaki recursion smabhal lega
//     if(arr[mid]<target){
//         return binarySearch(arr,start=mid+1,end,target);
//     }
//     else{
//        return  binarySearch(arr,start,end=mid-1,target);
//     }
// }
// int main(){
//     vector<int >arr{10,20,30,40,500,99};
//     int n=arr.size();
//     int target=500;
//     int start=0;
//     int end=n-1;
//     int ans = binarySearch(arr,start,end,target);
//     cout<<"Answer is "<<ans<<endl;
//     return 0;

// }

//   //THIS IS MOST IMPORTAIN QUESTION   IN RECURSION

//   //the given the array and  target and find the minimum target to each element in array 



   //  #include<iostream>
   //  #include<vector>
   // //  #include<limits.h>
   //  using namespace std;


   //  int solve(vector<int>& arr,int target){
   //    //  base case
   //    if(target==0){
   //       return 0;
   //    }
   //    if(target<0){
   //       return -1;
   //    }
   //    int mini=-1;
   //    for(int i=0;i<arr.size();i++){

   //       int ans=solve(arr,target-arr[i]);

   //       if(ans!=-1){
         
   //       mini=ans+1;
   //       }
   //    }
   //    return mini;

   //  }
   //  int main(){
   //    vector<int >arr{1,2,3};
   //    int target=7;
   //    int ans=solve(arr,target);
   //    cout<<"Answer is "<<ans<<endl;
   //    return 0;
   //  }

    
// THIS IS MOST IMPORTAIN QUESTION   IN RECURSION 

         //             CUT   INTO  SEGMENTS IN RECURSION


//   #include<iostream>
  
//     #include<limits.h>
//     using namespace std;

//     int solve(int n,int x,int y,int z){
//       if(n==0){
//          return 0;
//       }
//       if(n<0){
//          return INT_MIN;
//       }

//       int ans1=solve(n-x,x,y,z)+1;
//        int ans2=solve(n-y,x,y,z)+1;
//         int ans3=solve(n-z,x,y,z)+1;

//         int ans = max(ans1,max(ans1,ans2));

//         return ans;

//     }
//     int main(){
//       int n=7;
//       int x=5;
//       int y=2;
//       int z=2;

//       int ans=solve(n,x,y,z);
//       if(ans<0){
//          ans=0;
//       }
//       cout<<"Answer is "<<ans<<endl;
//       return 0;
//     }



// SUM OF N NUMBER USING RECURSION


// #include<iostream>
// using namespace std;
// int sum(int n){
//    if(n==1){
//       return 1;
//    }
//    int ans=n+sum(n-1);
//    return ans;
// }
// int main(){
//    cout<<"enter the number "<<endl;
//    int n;
//    cin>>n;
//    int ans =sum(n);
//    cout<<ans<<endl;
//    return 0;

// }
// TIME COMPLEXCITY=  O(n)
// SPACE COMPLEXCITY=  O(n)


//        PRINT ALL THE SUBSET


// #include<iostream>
// #include<vector>
// using namespace std;
// void subSets(vector<int >arr,int i,vector<int>&ans){
//    if(i==arr.size()){
//       for(int val:ans){
//          cout<<val;
//       }
     
//       cout<<endl;
//       return ;
//    }
//     //include
//     ans.push_back(arr[i]);
//     subSets(arr,i+1,ans);

//     //exclude

//     ans.pop_back();
//     subSets(arr,i+1,ans);

// }
// int main(){
//    vector<int >arr{1,2,3};
//   vector<int>ans;
//    int i=0;
//    subSets(arr,i,ans);
//    // cout<<"enter the number"<<ans;
  
   
// }


//  this program is parmutaion in recursion ak baar milana hai

// ak baar milan hai kyu kirun nhi kar raha hai 





// // #include<iostream>
// // #include<vector>
// // using namespace std;

// // void  getpermutaion(vector<int>& num, vector<vector<int>>& ans,int idx){
// //    int i;
// //    // for(i=0;i<num.size();i++){
// //    if(idx==num.size()){
// //       ans.push_back(num);
// //       return;
   

// //    }
// //    for(int i=idx;i<num.size();i++){
// //       swap(num[idx],num[i]);
// //       getpermutaion(num,ans,idx+1);


// //       swap(num[idx],num[i]);
// //    }
// // return; 

// // }
// // int main(){
// //    vector<int >num{1,2,3};
// //   vector<vector<int>>ans;
// //    int idx=0;
// //      getpermutaion(num,ans,idx);
// //    return ans;
// // }



// #include<iostream>
// using namespace std;

//  void getpermutaion(int &arr[],int& ans,int& idx,int n)
//  {
//    if(idx==n){
//       ans.push_back(arr[]);
//       return;

//    }
//    for(int i=idx;i<n;i++){
//       swap(arr[idx],arr[i]);
//       getpermutaion(arr,ans,idx+1);

//       swap(arr[idx],arr[i]);

//    }
//    return ;

//  }
// int main(){
//    int arr[]={1,2,3};
//    int n=3;
//    int ans=0;
//    int idx=0;
//    getpermutaion(arr,ans,n,idx);
//  return ans ;
   
// }
