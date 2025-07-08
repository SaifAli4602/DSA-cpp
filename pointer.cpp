// #include<iostream>
// using namespace std;
// int main()
// { 
    // int a=5;
    // int *prt=&a;
    // cout<<*prt<<endl;
    //  cout<<&*prt<<endl;
    // cout<<a<<endl;
    // cout<<&a<<endl;

//  int arr[4]={12,44,66,18};
//  cout<<*arr<<endl;
//  cout<<*arr+1<<endl;
//   cout<<*(arr)+1<<endl;
//    cout<<*(arr+1)<<endl;
//     cout<<arr[1]<<endl;



//  int arr[4]={12,44,66,18};
//  int *p=arr;
//  int *q=arr+1;
// //  cout<<*q<<endl;
//  cout<<arr;
// 


// char name[9]="saifAli";
// char *c= &name[0];

// cout<<name<<endl;
// cout<<&name<<endl;
// cout<<*(name+1)<<endl;
// cout<<c<<endl;
// cout<<&c<<endl;
// cout<<*(c+3)<<endl;
// cout<<c+2<<endl;
// cout<<*c<<endl;
// cout<<c+8<<endl;
// }

// #include<iostream>
// using namespace std;

// void solve(int arr[]){
//     cout<<"size inside solve function"<<endl;

//     arr[0]=50;
//  }

// int main()
// { 
// int arr[10]={1,2,3,4};
// int i;
// cout<<"size insize of main function"<<sizeof(arr)<<endl;

// cout<<arr<<endl;
// cout<<&arr<<endl;

// for(int i=0;i<10;i++){
//     cout<<arr[i]<<" ";

// }
// cout<<endl;

// solve(arr);

// cout<<"wapash main function me ayenge"<<endl;

// for(int i=0;i<10;i++){
//     cout<<arr[i]<<" ";

// }
// cout<<endl;

// }

// ****** double pointer 

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int *p = &a;
//     int **q=&p;
//     cout<<a<<endl;
//     cout<<&a<<endl;
//     cout<<p<<endl;
//     cout<<&p<<endl;
//     cout<<*p<<endl;
//     cout<<q<<endl;
//     cout<<&q<<endl;
//     cout<<*q<<endl;

//  cout<<**q<<endl;
// }


//  using function


// #include<iostream>
// using namespace std;

//  void doublPointer(int* p){
//     // p=p+1;  //pass by value in not change
//     *p=*p+1;    //pass by reference in  change
//  }
// int main(){
// int a=5;
// int *p=&a;


// cout<<"before"<<endl;
// cout<<a<<endl;
// cout<<p<<endl;
// cout<<*p<<endl;


// doublPointer(p);

// cout<<"After"<<endl;
// cout<<a<<endl;
// cout<<p<<endl;
// cout<<*p<<endl;



// }


// #include<iostream>
// using namespace std;

// void solve(int **p){
//     // p=p+1;

//     // *p=*p+1;

//     **p=**p+1;
// }
// int main(){
//     int a=12;
//     int *p=&a;
//     int **q=&p;
  
//   solve(q);
//     cout<<a<<endl;
// }


// reference variable
// reference --same memory location different name

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;

//     //creating a reference variable 

//     int &b=a;
//     cout<<a<<endl;
//     cout<<b<<endl;

//     a++;
//     cout<<a<<endl;
//     cout<<b<<endl;

//     b++;
//     cout<<a<<endl;
//     cout<<b<<endl;

// // }
//  #include<iostream>

// using namespace std;
// int main(){
//     char arr[20];
//     int i;
//     for(i=0;i<10;i++){
//         *(arr+i)=65+i;

//     }
//     *(arr+i)='\0';
//     cout<<arr;
//     return 0;
    
// }