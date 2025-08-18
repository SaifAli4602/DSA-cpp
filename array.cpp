// #include <iostream>
// using namespace std;
// int main (){
//  int i;
//  int arr[]={5,3,1 ,8,6};
//  int size=5;
//  int smallest=24;
//  for(i=0;i<size;i++){
//     if (smallest>arr[i]){ 
//         smallest=arr[i];
//     }
   
//  }
//   cout<<"smallest value = "<<smallest<<endl;
//  return 0;
// }

// int main(){

// //FIND THE MAXIMUM VALUE PROGRAM



//   int i;
//     int array[5] = {24,6,4,2,-2};
   
  
 
//     int large = 0;
//       for(i=0;i<5;i++){
//     if ( large<array[i]){
//        large=array[i];
//     }
//     }
//       cout<<large; 
//   return 0;
// }

 



// #include<iostream>
// using namespace std;
// int main()
// {



// int arr[] = {0,1,2,3,4,5,6,7};
// int n=8;
// int sum=0;

// for(int i=0;i<n;i++){
//     sum = sum + arr[i];
// }

// int total = (n*(n+1))/2;
// int miss = total-sum;

// cout<<miss;

// return 0;

// }




//   convrt to all element 1  or 0



// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[] = {1,2,3,5,4,9};
//     int n=6;
//     for(int i=0;i<n;i++){
//         // arr[i]=1;
//         arr[i]=0;
//     }
//     for(int i=0;i<n;i++){
//        cout<<arr[i];
//     }
// }


//EXAMPLE OF PASS BY REFERNCE

 //int main(){

//  void  change(int array [],int size){
//     for(int i=0;i<size;i++)
//     {
//         array[0] = array[1]+10;
//     }
//  }



// int main()
//  {
//     int array[5] ={2,3,4,6,8};

//     change(array,5);
//     for( int i=0;i<5;i++){
//         cout<<array[0];
//     }
    
// }


// this example a liner search


//  int linearSearch( int arr[],int target, int size)
// {  int i;
//     for(int i=0;i<size;i++){
//     if (arr[i]==target)
//     {
//         return i;
//     }
//     }
//     return -1;
// }


// int main()
// {    
//      int target=4;
//     int arr[]={2,5,6,4,8};
//     int size = 5;
   
//      cout<<linearSearch( arr, target, size)<<endl;

 
//    return 0;
//  }
        


// reverse of array


//  void reverseArray( int arr [], int size){
//  int start =0;
//  int end =size-1;
// // for ( int i=0;i<size;i++)
// {
//     while(start<=end)
//        {
//         swap(arr[start], arr[end]);
       
//         start++;
//         end--;

//        }
     

// }
//  }



// int main()
// {

// int arr[]={2,3,5,4};
// int size=4;
//  reverseArray( arr,  size);
// for(int i=0;i<size;i++){
//     cout<<arr[i];
// }
//  cout<<endl;
//   return 0;
 
// }

//count zero and one in array

// #include <iostream> 
// using namespace std;
// int main()
// {

// int arr[]={1,0,0,1,0,1,0};
// int size=8;
// int i;
// int numone =0;
// int numzero =0;
// for(int i=0;i<8;i++)
// {
//     if (arr[i]==0)
//     {
//         numzero++;
      
//     }
//      if (arr[i]==1)
//     {
//         numone++;
        
//     }

// }
// cout<<"count one "<<numone<<endl;
//  cout<<"count zero "<<numzero;
// }



    
// starting to vrctor

// #include <iostream>
// #include<vector>
// using namespace std;

// int main(){
    //create vector 
    //vector<int >arr (10);
    
     //vector<int>brr{10,30,50,60};

    // int ans =( sizeof(arr)/sizeof(int ));
    // cout<<ans<<endl;


// cout<<arr.size()<<endl;

// cout<<arr.capacity()<<endl;

// cout<<brr.size()<<endl;


// }

//insert
// arr.push_back(5);
// arr.push_back(6);
// arr.push_back(8);


// //delete
// arr.pop_back();
//print vector same array ki tarh 

// for(int i=0;i<arr.size();i++){
//     cout <<arr[i]<<" ";

// }

// for(int i=0;i<brr.size();i++){
//     cout <<brr[i]<<" ";
// cout <<endl;

// }
//     }


//find the unique element in vector 

 
// // GIVEN TWO ARRAY AND FIND THE INTERSECTION IN VECTOR


// #include<iostream>
// #include<vector >
// using namespace std;

// int main()
// {
//     vector<int > arr{1,2,3,5,6,8};
//      vector<int > brr{1,2,3,5};

//       vector<int> ans;
//       for( int i=0;i<arr.size();i++){
//         int element = arr[i];
      
//         for( int j=0;j<brr.size();j++){
//            if ( element== brr[j])
//            {
//             ans.push_back(element);
//            }
//         }
//       }

//       for(int value:ans){
//         cout<<value<<" ";
//       }
  
//       return 0;

// }

// GIVEN TWO ARRAY AND FIND THE INTERSECTION

 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={5,3,6,2,4,8};
//     int size=6;
//      int  brr[] = {8,6};
//      int s= 2;
//       //int ans;
//       for( int i=0;i<6;i++){
//         int element = arr[i];
      
//         for( int j=0;j<2;j++){
//            if ( element== brr[j])
//            {
//             cout<<element;
//            }
//         }
//       }

      

// }


// FIND SUM OF TWO PAIR 


 

// #include <iostream>
// #include<vector>
// using namespace std;
// int main(){

// int i,j;
// vector<int >arr{10,30,50,80,40};


// int sum=90;
// for(i=0;i<arr.size();i++)
// {
// int element = arr[i];

// for(j=i+1;j<arr.size();j++){
//    if ( element+arr[j]==sum)
//    {

//     cout<<element<<" ";
//     cout<<arr[j]<<" ";

//     cout<<endl;
//    }
 

// }
// }
     
// }

// FIND SUM OF THREE PAIR 


// #include <iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int i,j,k,a1,a2,a3;
//     vector <int >arr{10,50,60,80,30};
//     int sum=120;
//     for(i=0;i<arr.size();i++){
//         a1=arr[i];
//         for(j=i+1;j<arr.size();j++){
//             a2=arr[j];
//             for(k=i+1;k<arr.size();k++){
//                 a3=arr[k];
//                 if(a1+a2+a3==sum){
//                     cout<<a1<<" ";
//                      cout<<a2<<" ";
//                       cout<<a3<<" ";
//                        cout<<endl;
//                 }
//             }
//         }
//         return 0;
//     }

// }

//SORT ARRAY  0 AND 1

 

// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
   
//    vector <int >arr{0,1,0,1,0,0,1};
//    int start=0;
//    int end =arr.size()-1;
//    int i=0;

//    while (i !=end)
//    {
//     if(arr[i]==0){
//         swap(arr[start],arr[i]);
//         i++;
//         start++;
//     }
   
    
//     if(arr[i]==1){
//         swap(arr[end],arr[i]);
        
//         end--;
//     }
//    }
//     for(i=0;i<arr.size();i++){
//         cout<<arr[i];
//     }
   
//        return 0;

//    }


//SIMPLE ARRAY SORTING 

// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
   
//   int  arr[10]={0,1,0,0,1,1,0,0,0,1};
//   int size=10;
//   int i=0;
//   int start=0;
//   int end=size-1;
//   while(i!=end){
//     if(arr[i]==0){
//         swap(arr[start],arr[i]);
//         i++;
//         start++;
//     }
//     if(arr[i]==1)
//     {
//         swap(arr[i],arr[end]);
//         end--;
   
//     }
//     for(auto value:arr)
//         cout<<value;
    
//   }
//   return 0;
// }


//  ************** find the missing element *********


// #include<iostream>

// using namespace std;

// int print(int arr[],int n){ 
//     int sum=0;
//     int i;
//     for(i=0;i<n;i++){
//         sum +=arr[i];

//     }
//     int total= (n*(n+1))/2;
//     int miss= total-sum;
//  cout<<miss;
// }
// int main(){
// int arr[]={0,1,3,4,5};
// int n= 5;
 
// print (arr,n);

// }


// same code but without using function



// #include<iostream>

// using namespace std;

// int main(){
// int arr[]={0,1,3,4,5};
// int n= 5;
// int sum=0;
// int i;
// for(i=0;i<n;i++){
//     sum +=arr[i];

// }
// int total= (n*(n+1))/2;
// int miss= total-sum;
// cout<<miss;


// }


// merge two sorted 
// array


// #include<iostream>
// #include<vector>
// using namespace std;

// void  merge(vector<int>&a,vector<int >&b,int m,int n){
//     int idx = m+n-1 , i = m-1 , j= n-1;
//     while(i>=0 && j>= 0){
//         if(a[i] >= b[j]){
//             a[idx--] = b[j--];
//         }
//     }
//     while(j >=0){
//         a[idx--] = b[j--];
//     }
   
//  return ;
// // for(int i=0;i<a.size()-1;i++){
// //     cout<<a[i];

// // }

// }
// int main(){
//     int i;
//     vector<int >a{3,2,5,0,0,0};
//     int m=3;
//     vector<int>b{3,5,6};
//     int n=3;
//     merge(a,b,m,n);
//     for(int i=0;i<a.size()-1;i++){
//             cout<<a[i];
        
//         }
        
    
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// print(vector<int>& arr){
//     int n=arr.size();
//     int count0= 0, count1=0, count2=0;
//     for(int i=0; i<n ;i++){
//          if(arr[i]==0){
//          count0++;
//          }
//          else if( arr[i]==1){
//             count1++;
//          }
//          else{
//             count2++;
//          }

//     }
//     int idx=0;

//     for(int i=0; i<count0;i++){
//         arr[idx++] = 0;
//     }
//     for(int i=0; i<count1;i++){
//         arr[idx++] = 1;
//     }
//     for(int i=0; i<count2;i++){
//         arr[idx++] = 2;
//     }
// }
// int main(){
    
//     vector<int>arr{0,0,1,0,2,1,2,0};
//     int i;

//     print(arr);
//     for(i=0;i<8;i++){
//         cout<<arr[i];
//     }
 
  
//     return 0;
// }




// #include<iostream>
// using namespace std ;
// int main(){
//     int nums[6]={2,2,0,1,0,1};
//     int i;
//     int n=6;
//     int low=0;
//     int  mid=0 ;
//     int  high=n-1;
//     while(mid<=high){
//         if(nums[mid]==0){
//             swap(nums[mid],nums[low]);
//             mid++;
//             low++;
//         }
//         else if(nums[mid]==1){
//             mid++;
//         }
//         else{
//             swap(nums[mid],nums[high]);
//             high--;
//         }
//     }
//     for(i=0;i<n;i++)
//       cout<<nums[i];
    
   
//     return 0;
// }

//   Remove  duplicate element 

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int i;
   
//     vector<int> arr {1,1,2,2,3,3,4};
// for(int i=0;i<arr.size();i++){
    
//     for(int j=i+1;j<arr.size();j++){
//      if(arr[i] != arr[j]){
//         i++;
//         arr[i]= arr[j];
//      }
//      else{
//         j++;
//      }
//     }
// }
// for(i=0;i<3;i++){
// cout<<arr[i];
// }
// }
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int arr[]={1,2,5,6,2,8,1};
//     int n=7;
//     int ans=0;
//     for(int i=0;i<=n;i++){
//         ans = ans^arr[i];
//     }
//     cout<<ans;
// }



//  contain duplicate element


// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std ;

// int main(){
//     int i=0;
//     int j=1;
//    vector<int>  arr {1,2,6,4,3,1};
    
//     sort(arr.begin(), arr.end());
//     while(i<arr.size()-1 && j<arr.size()){
//         if(arr[i]==arr[j]){
//             cout<<true;
          
//         }
//         i++;
//         j++;
        
//     } 
//   cout<<false; 
// }




// marge two sorted arrray

// #include<iostream>
// #include<vector>

// using namespace std;

// void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
//     int i=0;
//     int j=0;
//     int k=0;

//     while( i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k]=arr1[i];
//             i++;
//             k++;
//         }
//         else{
//             arr3[k]=arr2[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<n){
//         arr3[k]=arr1[i];
//         k++;
//         i++;
//     }
//     while(j<m){
//         arr3[k]=arr2[j];
//         k++;
//         j++;
//     }
// }
// void print(int arr3[],int p){
//     for(int i=0;i<p;i++){
//         cout<<arr3[i];
//     }


// }

// int main(){

//     int arr1[]={1,5,3,8,5};
//     int n=5;
//     int arr2[]={9,5,8};
//     int m=3;
//     int arr3[]={0};
//     int p=8;
    
//     merge(arr1,n,arr2,m,arr3);
//     print(arr3,p);
//     return 0;
// } 



// move to zero on the last position


// #include<iostream>
// #include <vector>
// using namespace std;

// void  movezero(vector<int >& arr){
//     int i=0;
//     for(int j=0;j<arr.size();j++){
//         if(arr[j] !=0){
//             swap(arr[j],arr[i]);
//             i++;
//         }
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i];
//     }
// }

// int main(){
//     vector<int >arr{0,1,0,2,3,0};
//     movezero(arr);
//     return 0;
// }



//  this is palindrom number


// #include<iostream>
// using namespace std;


// int palindrom(int n){
//     if(n<0){
//         return false;
//     }
//     int rev=0;
//     int digit=0;
//     int temp=n;
//     while( n !=0){
//         digit = n%10;
//         rev = rev*10+digit;
//         n=n/10;
//     }
//     if(rev==temp){
//         cout<< true;
//     }
//     else{
//       cout<< false;
//     }
// }
// int main(){
//     cout<<"enter the number";
//     int n;
//     cin>>n;
//     palindrom(n);
// }


//this is fibonacci series;



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     int a=0;
//     int b=1;
//     int c;
//     for(int i=0;i<n;i++){
//         if(i<=1){
//             c=i;
//     }
//     else{
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     cout<<c<<" ";

// }
// }

// #include<iostream>
// #include<vector>

// using namespace std ;
// int main(){
//     vector<int>arr{0,1,2,2,3,0,4,2};
//     int val=2;
//     int k=0;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]!=val){
//             arr[k]=arr[i];
//             k++;
//         }
//     }
    
//     cout<<k;
// }

