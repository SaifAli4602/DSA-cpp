// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={{1,2,3},{2,3,5}};
//     int i,j;
//     for(i=0;i<2;i++){
//         for(j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }
// int i,j;
// int arr[2][2];
// // int row=3;
// // int col=4;

// for(i=0;i<2;i++){
//     for(j=0;j<2;j++){
//         cin>>arr[i][j];
//     }

// }
// cout<<" enter the nu,mber";

// cout<<" print ";
// for(i=0;i<2;i++){
//     for(j=0;j<2;j++){
//         cout<<arr[i][j]<<" ";
//     }cout<<endl;


// }
// // }
// #include<iostream>
// using namespace std;

//  void sumArray( int arr[2][2],int row,int col){

// int i,j;
// for( i=0;i<row;i++){
//      int sum=0;
//     for(j=0;j<col;j++){
//         sum=sum+arr[i][j];
       
//     }
//       cout<<sum<<endl;
// }
   
//  }

// int main(){
    
// int arr[2][2];
// int i,j;
// int row=2;
// int col=2;

// for(i=0;i<2;i++){
//     for(j=0;j<2;j++){
//         cin>>arr[i][j];
//     }
  
// }
//  cout<<"print ";
// for(i=0;i<row;i++){
//     for(j=0;j<col;j++){
//         cout<<arr[i][j];
//     }
// }
// sumArray(arr,row,col);

// return 0;
// }




// NEGATIVE LEFT SIZE AND POSITIVE RIGHR without function



// #include<iostream>
// using namespace std;
// int main(){ 
//     int i,j;
//    int arr[]={1,2,-2,-5,4};
   
   
//     int size=5;
//     int low=0;
//     int high=size-1;
//     while(low<high){
//         if(arr[low]<0){
//             low++;

//         }
//         else if(arr[high]>0){
//             high--;

//         }
//         else{
//             swap(arr[low],arr[high]);
//         }
//         for(i=0;i<size;i++){
//         cout<<arr[i];
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// NEGATIVE LEFT SIZE AND POSITIVE RIGHR using function



//  void Sortnum( int arr [], int size){
//   int l=0;
//   int h=size-1;
//   while(l<h){
//     if (arr[l]<0){
//         l++;
//     }
//     else if (arr[h]>0){
//         h--;
//     }
//     else{
//         swap(arr[l],arr[h]);

//     }
//   }
//  }

// int main(){
//     int i,j;
//     int arr[]={1,2,-2,-8,6};
//     int size=5;
//     Sortnum(arr,size);
//     for(i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }



               //ERROR EXAMPLE      



// #include<iostream>
// #include<vector >
// using namespace std;
//  void commonElement(vector<vector<int >> arr[],vector<vector<int >> brr[],vector<vector<int >> crr[] int n1,int n2,int n3){
//   int i, j , k,element1 ,element2 ,element3; 
//   int ans =0;
//  for(  i=0;i<arr.n1();i++){
//         element1 = arr[i];
      
//         for( j=0;j<brr.n2();j++){
//             element2 = brr[j]
//         }
//         for(k=0;k<crr.n3();k++){
//             element3=crr[k]);
//         }
//         if(element1== element2==element3);
//         {
//             ans.push_back(element1, element2,element3);
//         }
//         cout<<ans;
      
//       }
//  }
// int main()
// {
  
//     vector<int > arr{1,5,10,20,40,80};
//     vector<int > brr {6,7,20,80,100};
//      vector<int > crr {3,4,15,20,30,70,80};


//     commonElement(arr,brr,crr);
//     cout<<ans;
      

// }
 

    //  wave matrix ka example hai
    //bhi tak run nhi huaa hai 
    //isko online compiler par run karana hai


// #include<iostream>
// #include<vector >
//  using namespace std;

//   void wavePrint( vector<vector<int>>v){
//      int i,startcol;
//      int m=v.size();// this is a creat th colum size

//       int n=v[0].size(); //this is a creat th row  size
//       for( startcol=0;startcol<n;startcol++){
//         //even number to print  cvolum  top to bottum
//         if( (stratcol & 1)==0){
//           for(i=0;i<m;i++){
//             cout<<v[i][startcol]<<" ";
//           }
//         }
//         else{
//            //even number to print   bottum  top to colum
//            for(i=m-1;i>=0;i--){
//             cout<<v[i][startcol]<<" ";
//            }
//         }
//       }

//    }

//  int main(){
//   vector<int > v{
   
//     {2, 5, 6 },
//     {8, 5, 2 },
//     {7, 4, 1 }
//   };
//   wavePrint(v);
//   return 0;
//  }

// this is example of spiral matrix 
////bhi tak run nhi huaa hai 
    //isko online compiler par run karana hai



// #include<iostream>
// #include<vector >
//  using namespace std;

//   void spiralMatrix( vector<vector<int>>arr[]){ 
//       int i;
//      vector<int >ans ;
//      int m=arr.size();
//       int n=arr[0].size();
//       int totalelement=m*n;

//       int startingrow = 0;
//       int endingcol = n-1;
//       int endingrow = m-1;
//        int startingcol = 0;

//        int count = 0;
//        while(count < totalelement ){

//          //print starting row
//          for(i=startingcol;i<=endingcol  && count < totalelement ;i++){
//           ans.push_back(arr[startingrow ][i]);
//           count++;
//          }
//          startingrow++;

//          //print ending colum
//           for(i=startingrow;i<=endingrow  && count < totalelement ;i++){
//           ans.push_back(arr[endingcol][i]);
//           count++;
//          }
//          endingcol--;


//          //printing ending row 
//            for(i=endingcol;i>=startingcol  && count < totalelement ;i--){
//           ans.push_back(arr[endingrow][i]);
//           count++;
//          }
//          endingrow--;

//          //print starting colum
//            for(i=endingrow;i>=startingrow  && count < totalelement ;i--){
//           ans.push_back(arr[startingcol][i]);
//           count++;
//          }
//          startingcol++;

//        }
//        return ans ;


//   }
//  int main(){
//   vector<int >arr{
//     {2,5,8,3},
//     {7,4,1,0},
//     {9,6,3,1}
//   };
//   spiralMatrix(arr);
//  }


        //   BINARY SEARCH STARTING IN ARRAY    


// #include<iostream>

//  using namespace std;


//    int binarySearch(int arr[],int size,int target){
//      int start=0;
//      int end=size-1;
//      int mid=(start + end)/2;
//      while(start<=end){
//         int element =arr[mid];
//         if(element == target){
//             return element;
//         }
//       if (target < element){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//         mid=(start + end)/2;
//      }
//      return -1;
//    }


//  int main(){
//     int arr[]={2,4,7,10,15,19,21};
//     int size=7;
//     int target=1;
//    int indexOFtarget=binarySearch(arr,size,target);
//    if(indexOFtarget==-1){
//    cout<<"target is not found"<<endl;
//    }
//    else{
//   cout<<"target found = "<<indexOFtarget<<endl;
//    }
//   return 0;
  
//  }

//   OR 
// USIND LIBRARY FUNCTION

// #include<iostream>
// #include<algorithm>
// #include<vector>
//  using namespace std;


//  int main(){
//     vector<int > arr{2,4,7,10,15,19,21};

//      //this is using library function of binary search

//     if(binary_search(arr.begin(),arr.end(),4)){ 

//         cout<<"found"<<endl;

//     }
//     else{
//         cout<<"not found"<<endl;
//     }

//   return 0;
  
//  }

// // FIND THE FIRST OCCURANCE 

// #include<iostream>
// #include<vector>
// using namespace std;

//     fistOccurance(vector<int>arr,int target){
//     int start= 0;
//     int end=arr.size()-1;
//     int mid = start+(end-start)/2;
//     int ans=mid;

//     while(start<=end){
//         if(arr[mid]==target){
//            ans=mid;
//           end=mid-1;
//         }
//         if(arr[mid]<target){
//             start=mid+1;
//         }
//         else {
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
//    }


// int main(){
//     vector<int >arr{1,1,2,2,2,4,4,4,5,8};
//     int target=4;
//      int ans=fistOccurance(arr,target);
//     cout<<ans<<endl;
//     return 0;
// }

//  FIND THE LAST OCCURANCE

 
// #include<iostream>
// #include<vector>
// using namespace std;

    // fistOccurance(vector<int>arr,int target){
//     int start= 0;
//     int end=arr.size()-1;
//     int mid = start+(end-start)/2;
//     int ans=mid;

//     while(start<=end){
//         if(arr[mid]==target){
//            ans=mid;
//           start=mid+1;
//         }
//         if(arr[mid]<target){
//             start=mid+1;
//         }
//         else {
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
//    }


// int main(){
//     vector<int >arr{1,1,2,2,2,4,4,4,5,8};
//     int target=4;
//      int ans=fistOccurance(arr,target);
//     cout<<ans<<endl;
//     return 0;
// }

// FIND THE PEAK INDEX IN MOUNTAIN ARRAY peak means large element 

// #include<iostream>
// #include<vector>
// using namespace std; 
 
// int main(){
//     vector<int >arr{1,2,5,4,8,6,12,5};
//     int start=0;
//     int end = arr.size()-1;
//     int mid = start+(end-start)/2;

//     while(start<end ){
//         if (arr[mid]<arr[mid+1]){
//             start=mid+1;
//         }
//         else{
//             end = mid;

//         }
//         mid = start+(end-start)/2;
      
//     }
//       cout<<"this is peak index = "<<start;

// }

//  FNDS THE findSquarroot USING BINARY SEARCH ONLY INT VALUE


// #include<iostream>
// using namespace std;
 
//    int  findSquarroot(int n){

//      int start = 0;
//      int end = n;
//      int target = n;
//      int mid = start+(end-start)/2;
//      int ans = -1;

//      while(start<=end){
//         if (mid*mid==target){
//             return mid;
//         }

//         if(mid*mid>target){
//             end=mid-1;
//         }
//         else{
//             ans = mid;

//             start=mid+1;
//         }
//         mid = start+(end-start)/2;

//      }
//      return ans;

//    }

// int main(){
//     int n;
//     cout<<" enter the numcber = ";
//     cin>>n;
//     int ans = findSquarroot(n);
//     cout<< ans ;
// } 


// BINARY SEARCH IS A NEARLY SORTED ARRAY

// #include<iostream>
// #include<vector>
// using namespace std;

//  int binarySearch(vector<int>arr, int target){
//     int start =0;
//      int end=arr.size()-1;
//      int mid = start+(end-start)/2;
//      while(start<=end){
//         if(arr[mid]==target){
//             return mid ;
//         }
//         if(arr[mid -1]==target  && mid-1>=0){
//             return mid-1;
//         }
//           if(arr[mid +1]==target){
//             return mid+1;
//         }
//         if(arr[mid]>target){
//             end=end-2;
//         }
//         else{
//             end=end+2;
//         }
//         mid = start+(end-start)/2;
//      }  
//      return -1;
//  }
// int main(){
//     vector<int >arr{10,3,40,20,60,8};
//      int target =10;
//      int ans = binarySearch(arr,target);
//      cout<<"index of  = "<<target<<endl<<"ans = "<<ans;
    
     
// }

// DIVIDE TWO NUMBER + OR - USING BINARY SEARCH

// #include<iostream>
// using namespace std;
  
//   int divideTwonum(int divident,int divisor){
//     int start=0;
//     int end=divident;
//     int mid= start+(end-start)/2;
//     int ans ;

//     while(start<=end){
//         if(mid*divisor==divident){
//             return mid;
//         }
//         if(mid*divisor>divident){
          

//             end=mid-1;
//         }
//         else{
//             ans=mid;
//             start=mid+1;
          
//         }
//         start+(end-start)/2;
//         if((divident<0 && divisor<0) || (divisor>0 && divident>0)){
//             return ans;
//         }
//         else{
//             return -ans;
//         }
//     }
//   }

// int main (){
//     int divident=20;
//     int divisor=2;
//     int ans = divideTwonum(divident,divisor);
//     cout<<ans<<endl;
//     return 0;
// }

// this sorted funcion

// #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//     int arr[]= {5,12,6,1,4};
//     int size=5;
    
//     int n=sizeof(arr) / sizeof(arr[0]);
//     sort(arr,arr+n);
   

//     for(i=0;i<n;i++)
//         cout<<arr[i]<<" ";
//         return 0;

    
//  }

// QUESTION--given an array of integerarr,ans an integer k,return the number of unique
//           k-diff pair in the array


// #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//     int arr[]= {9,2,5,4,6};
//     int size=5;
//     int i=0,j=1;
//     int k=1;
//     int ans,diff;
//     int n=sizeof(arr) / sizeof(arr[0]);
//     sort(arr,arr+n);
   

//   while(j<5){
//   diff= arr[j]-arr[i];
//     if(diff==k){
      
//       cout<<arr[i]<<" "<<arr[j]<<endl;
//         ++i;
//         ++j;
//     }
//     else if(diff>k){
//         i++;
//     }
//     else{
//         j++;
//     }


//   }
//    return 0;
//  }


// lecture no 61---- exponential search
//  syntax==
// { 
//     if (arr[0]==target){
//         return 0;

//     }
//     int i=0;
//     while(i<n && arr[i]<=target){
//         i=i*2;
//     }
//     return binarySearch(arr,i/2,min(i,n-1),target)

// where n is number of array
// i/2 means starting index
//min(i,n-i) means end position

// }
// ?eample of exponential serach


// phir se milana hai mubile me se

// #include<iostream>
// using namespace std ;
//  int binarySearch( int arr [],int target ,int start,int end){
//         // int start=0;
//         // int end =size-1;
//         // int mid=start+(end-start)/2;
        
//         while(start<=end){
//              int mid=start+(end-start)/2;
//             if(arr[mid]==target){
//                 return mid;
//             }
//             else if(arr[mid]>target){
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
//             mid=start+(end-start)/2;
//         }
//         return 0;
//     }
//     int exponentialSearch(int arr[],int size,int target){
//       int start=0;
//        int end =size-1;
//         if(arr[0]==target)
//             return 0;
        
//         int i=1;
//         while(i<size && arr[i]<=target){
            
//                 i=i*2;
//             }
//             return binarySearch(arr,start, end,target);
//         }

    
// int main(){


//     int arr[]={3,4,5,6,11,13,14,15,56,70};
//     int size=10;
//      int target=13;
//     int ans =exponentialSearch(arr,size,target);
//     cout<<ans<<" hello siaf";
//     return 0;
// }
    



//  this is using in vector

//  this is a books allocation problem



//   #include<iostream>
//   #include<vector>
//   using namespace std;

//  bool isVailid(vector<int >arr ,int n,int m,  int maxallow) //mid is a maxallow
//   {
//     int i;
//     int student =1;
//     int page=0;
//     for(i=0;i<n;i++){
//         if(arr[i]> maxallow){
//           return false;
//         }
//         if(arr[i]+page > maxallow){
//             student++;
//             page =arr[i];

//         }
//             if (student > m){
//             return false;

//         }
//         else{
//           page +=arr[i];
//         }
//     }
//     return  true;
//   }

   
//  int allocateBooks(vector<int >arr,int n,int m){
//     int i;
//     if(m>n){
//         return -1;
//     }
//     int sum=0;
//     for(i=0;i<n;i++){
//           sum  = sum+arr[i];
//     }
//      int start = 0;
//      int end=sum;
//     //  int mid=start+(end-start)/2;
//      int ans=-1;
//      while(start<=end){
//           int mid=start+(end-start)/2;
//         if(isVailid( arr,n,m,mid)){
//             ans= mid ;
//             end=mid-1;

//         }
     
//         else{
//             start=mid+1;
//         }
//         // mid=start+(end-start)/2;
//      }
//      return ans;
//  }

//   int main(){
//   vector<int > arr {2,1,3,4};
//     int n=4;
  
//     int m=2;
  
    
//     cout<<allocateBooks(arr,n,m);
//    return 0;

//   }



// important question hai

// ********   this is using in array  ********
// ********   this is a books allocation problem*********

// #include<iostream>
//    using namespace std;

//   bool isVailid(int arr[],int n,int m,  int maxallow) //mid is a maxallow
//   {
//     int i;
//     int student =1;
//     int page=0;
//     for(i=0;i<n;i++){
//         if(arr[i]> maxallow){
//           return false;
//         }
//         if(arr[i]+page >  maxallow){
//            student++;
//             page =arr[i];

//         }
//         if (student > m){
//             return false;

//         }
//         else{
            
//             page += arr[i];
//         }
//     }
//     return  true;
//   }
// int allocateBooks(int arr[],int n,int m){
//     int i;
//     if(m>n){
//         return -1;
//     }
//     int sum=0;
//     for(i=0;i<n;i++){
//           sum  = sum+arr[i];
//     }
//      int start = 0;
//      int end=sum;
//     //  int mid=start+(end-start)/2;
//      int ans=-1;
//      while(start<=end){ 
//           int mid=start+(end-start)/2;
//         if(isVailid( arr,n,m,mid)){
//             ans= mid ;
//             end=mid-1;

//         }
//         else{
//             start=mid+1;
//         }
//         // mid=start+(end-start)/2;
//      }
//      return ans;
//  }



 
//    int main(){ 
//     int   arr[]={12,34,67,90};
//     int n=4;
  
//     int m=2;
  
    
//     cout<<allocateBooks(arr,n,m);
//    return 0;

//   }



//    //this example panter partition run karana hai 

//    #include<iostream>
//    #include<vector>
//    using namespace std;


//   bool isvailid(vector<int >arr,int n,int m,int maxtime){
//     int panter=1;
//     int time=0;
//     for(int i=0;i<n;i++){
//     if(time+arr[i]<=maxtime){
//         time+=arr[i];
//     }
    
//     else{
//         panter++;
//         time=arr[i];
//     }
//     }
//     return panter<=m;

//   }

//   int minmumtime(vector<int >arr,int m,int n){
//     // int INT_MIN;
//     int sum=0,maxval=0;
    
    
//     for(int i=0;i<n;i++){
//     sum=sum+arr[i];
//     maxval=max(maxval,arr[i]);
//     }
//     int i;
//    int  start=maxval;
//    int  end=sum;
//     int mid=start+(end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(isvailid(arr,n,m,mid)){

//             ans=mid;
//             end=mid-1;
      
//         }
//         else{
//             start=mid+1;
//         }

//     }
//     return ans;
//   }

//    int main(){
//    vector<int >arr={40,30,10,20};
//     int n=4;
//     int m=2;

//      cout<<minmumtime(arr,m,n)<<endl;
//      return 0;
//    } 


// Aggressive caws problem

#include <iostream>
#include<vector>
using namespace std;

bool isposible(vector<int>arr,int n,int c,int minallowdist){

    int cow=1,laststallpos=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-laststallpos>=minallowdist){
            cow++;
            laststallpos=arr[i];
        }
         if(cow==c){
            return true;
         }
    }
    return false;
}
  
  int getDistance(vector<int >arr,int n,int c){
    sort{arr.begin(), arr.end()};


    int start=1,end=arr[n-1]-arr[0],ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isposible(arr,n,c,mid)){
            ans=mid;
            start=mid+1;

        }
        else{
            end=mid-1;
        }
    }
    return ans;
  }

int msin(){
    int n=5,c=3;
    vector<int >arr={1,2,8,4,9};
    cout<<getDistance(arr,n,c)<<endl;
}
