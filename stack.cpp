// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int >s;
//     //creation of the stack

//     s.push(2);
//     s.push(3);

//     s.pop();
    
//     cout<<"stack is size "<<s.size()<<endl;
//     cout<<"printing the element "<<s.top()<<endl;

//     if(s.empty()){
//         cout<<"stack is empty"<<endl;
//     }
//     else{
//         cout<<"stack is not empty"<<endl;
//     }


// }






// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack{

//     // property
//   public:
//   int *arr;
//   int top;
//   int size;

// //   behaviour

//  Stack(int size){
//     this->size = size;
//     arr = new int[size];
//     top = -1;
// }

// void push(int element){
//     if(size - top >1){
//         top++;
//         arr[top] = element;
//     }
//     else{
//         cout<<"stack overflow"<<endl;

//     }
// }

// void pop(){
//     if(top >= 0){
//         top--;
//     }
//     else{
//         cout<<"stack underflow"<<endl;
//     }
    
// }
// int peek(){
//     if(top>=0){
//         return arr[top];
//     }
//     else{
//         cout<<"stack is empty"<<endl;
//         return -1;
//     }
// }
// bool isEmpty(){
//     if(top== -1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }


// };
// int main(){
//    stack<int>st;
//     int size=5;
  
//     st.push(22);
//     st.push(43);
//     st.push(44);

//     cout<<st.top()<<endl;
//     st.pop();

//     cout<<st.top()<<endl;
//   return 0;

// }

//milana hai 

// #include<iostream>
// #include<stack>
// using namespace std;

// class TwoStack{

//     // property
//   public:
//   int *arr;
//   int top1;
//   int top2;
//   int size;
   
//   public:

//   TwoStack(int s){
//     this->size = s;
//     arr = new int[s];
//         top1 = -1;
//         top2 = s;

//   }
//   void push1(int num){
//     //atlest a empty space present 
//     if(top2 - top1>1){
//         top1++;
//         arr[top1] = num;

//     }
//     else{
//         cout<<"stack overflow";
//     }
//   }


//   void push2(int num){
//     if(top2 - top1>1){
//         top2--;;
//         arr[top2] = num;

//     }
//     else{
//         cout<<"stack overflow";
//     }
//   }

//   int  pop1(){
//     if(top1>=0){
//         int ans=arr[top1];
//         top1--;
//         return ans ;
//     }
//     else{
//         return -1;
//     }
//   }


//   int  pop2(){
//     if(top2< size){
//         int ans=arr[top2];
//         top2++;
//         return ans ;
//     }
//     else{
//         return -1;
//     }
//   }

// };

// int mani(){
//     stack<int >st;
//     // stack<int>st;

//     st.push1(32);
//     st.push1(42);
//     st.push2(45);
//     st.push2(39); 

//     cout<<st.top1();
//     cout<<st.top2();

//     return 0;
// }



//reverse of string using stack;


// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//   string str = "love";

//   stack<char>s;
//   int i;

//   for(i=0;i<str.length();i++){
//     char ch=str[i];
//     s.push(ch);
//   }
//   string ans = "";
//   while(!s.empty()){
//     char ch=s.top();
//     ans.push_back(ch);

//     s.pop(); 
//   }

//   cout<<"answer is "<<ans <<endl;

//   return 0;
// }


//converted temperature

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the temperature (e.g., 98.6 F or 37C)";
//     int  temperature,unit;
//     cin>>temperature>>unit;

//     if(unit=='F'|| unit=='f'){
//         temperature=(temperature-32)*5/9;
//         cout<<"converted temperature"<<temperature<<"C"<<endl;
//     }
//     else if(unit=='C'||unit=='c'){
//         temperature=( temperature * 9/5 ) +32;
//         cout<<"converted  temperature"<< temperature<<'F'<<endl;
//     }
//     else{
//         cout<<"invalid unit.please use 'F' or 'C' "<<endl;
//     }
//     return 0;
// }