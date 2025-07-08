

//  this is a bubble sort code 

// #include<iostream>
// using namespace std;

//  void  bubleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//  }

//  void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }
// int main(){
//     int n=5;
//     int arr[]={4,1,5,2,3};
//     bubleSort(arr,n);
//     print(arr,n);
//     return 0;
   
// } 



// selection sort



// #include<iostream>
// using namespace std;

//  void  selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
 
//         int smallestIdx=i;

//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[smallestIdx]){
//                 smallestIdx = j;
//             }
//         }
//         swap (arr[i], arr[smallestIdx]); 
//     }
//  }

//  void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }
// int main(){
//     int n=5;
//     int arr[]={4,1,5,2,3};
//     selectionSort(arr,n);
//     print(arr,n);
//     return 0;
   
// }

// #include<iostream>
// using namespace std;

//  void  insertionsort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int curr=arr[i];
//         int prev = i-1;
//         while(prev >= 0 && arr[prev] > curr){
//            arr[prev+1]= arr[prev];
//            prev--;
//         }
//         arr[prev+1]= curr;

//     }
  
// }

//  void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }
// int main(){
//     int n=5;
//     int arr[]={4,1,5,2,3};
//     insertionsort(arr,n);
//     print(arr,n);
//     return 0;
   
// }

#include<iostream>
#include<vector>
using namespace std;

void  sort(vector<int>& arr){
    int i;
    int n=arr.size();
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else{
            count2++;
        }
        int idx = 0;
        for(int i=0;i<count0; i++){
            arr[idx++] = 0;
        }
        for(int i=0;i<count1; i++){
            arr[idx++] = 1;
        }
        for(int i=0;i<count2; i++){
            arr[idx++] = 2;
        }
        cout<<arr[i];
    }
    
}
int main(){
    vector<int>arr{1,0,0,1,2,0,2};
    sort(arr);
    return 0;
}