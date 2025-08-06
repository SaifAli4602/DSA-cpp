
// //  ***************  FIND THE SMALLEST VALUE*******


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


//  ************** FIND THE MAXIMUM VALUE PROGRAM ********


// #include <iostream>
// using namespace std;
// int main(){

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


// ************* FIND THE MISSING NUMBER ******



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




//   **********   convrt to all element 1  or 0 **********



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



//   ************* reverse of array **************



// #include<iostream>
// using namespace std ;

//  void reverseArray( int arr [], int size){
//  int start =0;
//  int end =size-1;

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



// **************count zero and one in array***********




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


// *************** GIVEN TWO ARRAY AND FIND THE INTERSECTION *******



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

//       for(int value:ans)
    
//       {
//         cout<<value<<" ";
//       }
  
//       return 0;

// }



//  ******** FIND SUM OF TWO PAIR *******


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



//********************** */ FIND SUM OF THREE PAIR ***********


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


//  *********************SORT ARRAY  0 AND 1 ****************

 

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




// ****************** marge two sorted arrray ***********

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


// ******************* move to zero on the last position***********


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




//  ***********************this is palindrom number**********


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




//  **************this is fibonacci series;****************



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

