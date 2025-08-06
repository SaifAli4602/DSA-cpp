

//queue  implemtation using linklist  and push,pop ,empty,front function


// #include<iostream>

// #include<vector>
// using namespace std;

// class node{
//    public:
//     int data;
//     node* next;

//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// class queue{
//     node* head;
//     node* tail;

//     public:
    
//     queue(){
//         head=tail=NULL;
//     }

//     void push(int data){
//         node* newnode=new node(data);
//         if(empty()){
//             head=tail=newnode;
//         }
//         else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//     }
//     void pop(){
//         if(empty()){
//             cout<<"ll is empty";
//             return ;
//         }
//         node* temp=head;
//         head=head->next;
//         delete temp;
//     }
//     int front(){
//         if(empty()){
//             cout<<"ll is empty";
//             return -1;
//         }
//         return head->data;
//     }
//     bool empty(){
//         return head==NULL;
//     }
// };


// int main(){
//      queue q;
//      q.push(1);
//       q.push(2);
//        q.push(3);
//        while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//        }
//        cout<<endl;
//        return 0;

// }





#include<iostream>
#include<string>
#include<unordered_map>
#include<queue>
// #include<vector>     
using namespace std;
int  FirstUnique(string s){
    unordered_map<char,int >m;
    queue<int> Q;

    for(int i=0;i<s.size();i++){
        if(m.find(s[i])==m.end()){
            Q.push(i);
        }
        m[s[i]]++;

        while(Q.size() > 0 && m[s[Q.front()]] >1){
            Q.pop();
        }
    }
    return Q.empty() ? -1:Q.front();
}
int main(){
 string s="loveleetcode";
 cout<<FirstUnique(s);
}
