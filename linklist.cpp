#include<iostream>
using namespace std;


  //  PUSH_FRONT IN LINK LIST



// class node{
//     public:
//     int data;
//      node* next;


//      node(int val){
//         data = val;
//         next = NULL;

//      }

// };
// class list {
//     node* head;
//     node* tail;

//     public:

//     list(){
//         head = tail=NULL;
//     } 

//     void push_front(int val){
//         node* newnode= new node(val);
//         if(head ==NULL){
//             head =tail=newnode;
//             return ;
//         }
//         else{
//             newnode->next = head;
//             head = newnode;
//         }
//     }

//     void print (){
//         node* temp = head;

//         while(temp != NULL){
//             cout<<temp -> data<<" ";
//           temp=temp->next;
//         }
//         cout<<endl;
//     }

// };

// int main(){
//     list ll;

//     ll.push_front(1);
//     ll.push_front(1);
//     ll.push_front(1); 
//     ll.push_front(1);
//     ll.push_front(5);
//     ll.print();
//     return 0;
   
// }




//    PUSH_BACK IN LINK LIST


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data ;
//     node* next;

//     node(int val){
//         data=val;
//        next=NULL;
//     }

// };
// class list{
//     node*head;
//     node*tail;

//     public:
//     list(){
//         head=tail=NULL;
//     }
//   void push_back(int val){
//     node* newnode=new node(val);
  
//   if(head ==NULL){
//     head =tail=newnode;
     
//     return ;
//    }
//    else{
//     tail ->next=newnode;
//     tail=newnode;
//    }
// }

   
//    void print(){
//     node* temp=head;
//      temp = head;

//             while(temp != NULL){
//                 cout<<temp -> data<<" ";
//                 temp = temp -> next;
//             }
//             cout<<endl;

//    }

// };
// int main(){
//     list ll;

//     ll.push_back(1);
//     ll.push_back(12);
//     ll.push_back(1);
//     ll.push_back(5);
//     ll.print();

//         return 0;
// }



//   POP FRONT 

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data ;
//     node* next;

//     node(int val){
//         data=val;
//        next=NULL;
//     }

// };
// class list{
//     node*head;
//     node*tail;

//     public:
//     list(){
//         head=tail=NULL;
//     }
//   void push_back(int val){
//     node* newnode=new node(val);
  
//   if(head ==NULL){
//     head =tail=newnode;
     
//     return ;
//    }
//    else{
//     tail ->next=newnode;
//     tail=newnode;
//    }
// }
// void  pop_front(){
//     if(head==NULL){
//         cout<<"ll is empty";
//          return ;
//     }
//     node*temp=head;
//     head= head->next;
//     temp->next= NULL;

//     delete temp;
// }

//    void print(){
//     node* temp=head;
//      temp = head;

//             while(temp != NULL){
//                 cout<<temp -> data<<" ";
//                 temp = temp -> next;
//             }
//             cout<<endl;

//    }

// };
// int main(){
//     list ll;

//     ll.push_back(1);
//     ll.push_back(12);
//     ll.push_back(1);
//     ll.push_back(5);
//     ll.print();
//     ll.pop_front();
//         ll.print();
//         return 0;
// }

//     pop back

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data ;
//     node* next;

//     node(int val){
//         data=val;
//        next=NULL;
//     }

// };
// class list{
//     node*head;
//     node*tail;

//     public:
//     list(){
//         head=tail=NULL;
//     }
//   void push_back(int val){
//     node* newnode=new node(val);
  
//   if(head ==NULL){
//     head =tail=newnode;
     
//     return ;
//    }
//    else{
//     tail ->next=newnode;
//     tail=newnode;
//    }
// }
// void pop_back(){
//     if(head == NULL){
//         cout<<"link list is empty";
//         return ;

//     }

//     node* temp = head;
//    while(temp->next !=tail){
//     temp=temp->next;
//    }

//    temp->next = NULL;
//    delete tail;
//    tail = temp;
// }

//    void print(){
//     node* temp=head;
//      temp = head;

//             while(temp != NULL){
//                 cout<<temp -> data<<" ";
//                 temp = temp -> next;
//             }
//             cout<<endl;

//    }

// };
// int main(){
//     list ll;

//     ll.push_back(1);
//     ll.push_back(12);
//     ll.push_back(1);
//     ll.push_back(5);
//  ll.print();
//     ll.pop_back()
//         ll.print();
//         return 0;
// }



//  insert element or meddle element

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data ;
//     node* next;

//     node(int val){
//         data=val;
//        next=NULL;
//     }

// };
// class list{
//     node*head;
//     node*tail;

//     public:
//     list(){
//         head=tail=NULL;
//     }
//   void push_back(int val){
//     node* newnode=new node(val);
  
//   if(head ==NULL){
//     head =tail=newnode;
     
//     return ; 
//    }
//    else{
//     tail ->next=newnode;
//     tail=newnode;
//    }
// }
// void insert(int val, int pos){
//     if(pos < 0){
//         cout<<"in vailid position";
//         return ;

//     }
//     if(pos==0){
//         // push_front(val);
//         return ;
//     }
//     node* temp =head;
//     for(int i=0;i<pos-1;i++){
//         temp = temp->next;
//     }
//     node* newnode = new node(val);
//     newnode->next= temp->next;
//     temp->next = newnode;
// }
//    void print(){
//     node* temp=head;
//      temp = head;

//             while(temp != NULL){
//                 cout<<temp -> data<<" ";
//                 temp = temp -> next;
//             }
//             cout<<endl;

//    }

// };
// int main(){
//     list ll;

//     ll.push_back(1);
//     ll.push_back(12);
//     ll.push_back(1);
//     ll.push_back(5);
//     ll.insert(4, 1);
//         ll.print();
//         return 0;
// }
 


//   search key


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data ;
//     node* next;

//     node(int val){
//         data=val;
//        next=NULL;
//     }

// };
// class list{
//     node*head;
//     node*tail;

//     public:
//     list(){
//         head=tail=NULL;
//     }
//   void push_back(int val){
//     node* newnode=new node(val);
  
//   if(head ==NULL){
//     head =tail=newnode;
     
//     return ;
//    }
//    else{
//     tail ->next=newnode;
//     tail=newnode;
//    }
// }

//    void print(){
//     node* temp=head;
//      temp = head;

//             while(temp != NULL){
//                 cout<<temp -> data<<" ";
//                 temp = temp -> next;
//             }
//             cout<<endl;

//    }

//    int search (int key){
//      node*temp=head;
//      int idx=0;

//      while(temp != NULL){
//       if(temp ->data==key){
//         return idx;
//       }
//       temp=temp->next;
//       idx++;
//      }
//      return -1;

//    }

// };
// int main(){
//     list ll;

//     ll.push_back(1);
//     ll.push_back(12);
//     ll.push_back(1);
//     ll.push_back(5);
//  ll.print();

//  cout<<ll.search (12);
   
//         return 0;
// }




// revrse of linklist milana hai


// #include<iostream>
// using namespace std;
// class node{ 
//     public:
//     int data ;
//     node* next;

//     node(int val){
//         data=val;
//        next=NULL;
//     }

// };
// class list{
//     node*head;
//     node*tail;

//     public:
//     list(){
//         head=tail=NULL;
//     }
//   void push_back(int val){
//     node* newnode=new node(val);
  
//   if(head ==NULL){
//     head =tail=newnode;
     
//     return ;
//    }
//    else{
//     tail ->next=newnode;
//     tail=newnode;
//    }
// }

// void reversell(node* head){
//   node* prev = NULL;
//    node* curr = head;
//     node* next = NULL;

//     while(curr != NULL){
//         next = curr->next;
//         curr->next= prev;

//         prev = curr;
//         curr = next;

//     }
   
//     return prev;
//   }




   
//    void print(){
//     node* temp=head;
//      temp = head;

//             while(temp != NULL){
//                 cout<<temp -> data<<" -> ";
//                 temp = temp -> next;
//             }
//             cout<<endl;

//    }

// };
// int main(){
//     list ll;

//     ll.push_back(1);
//     ll.push_back(12);
//     ll.push_back(1);
//     ll.push_back(5);
//     ll.print();
   
//       return 0;
  
//     }



  // find the meddel element  milana hai


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data ;
//     node* next;

//     node(int val){
//         data=val;
//        next=NULL;
//     }

// };
// class list{
//     node*head;
//     node*tail;

//     public:
//     list(){
//         head=tail=NULL;
//     }
//   void push_back(int val){
//     node* newnode=new node(val);
  
//   if(head ==NULL){
//     head =tail=newnode;
     
//     return ;
//    }
//    else{
//     tail ->next=newnode;
//     tail=newnode;
//    }
// }

// int  middelnode(node* &head){
//     node* slow = head;
//     node* fast= head;

//     while(fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//   cout<<slow;

// }

//    void print(){
//     node* temp=head;
//      temp = head;

//             while(temp != NULL){
//                 cout<<temp -> data<<" -> ";
//                 temp = temp -> next;
//             }
//             cout<<endl;

//    }

// };
// int main(){
//     list ll;

//     ll.push_back(1);
//     ll.push_back(12);
//     ll.push_back(1);
//     ll.push_back(5);
//     ll.print();
   

//         return 0;
// }

     


// **************   DOUBLY LINKLIST *********

//   push_front doubly linked list


// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;

//     node(int val){
//         data=val;
//         next=prev=NULL;

//     }
// };
// class doublylist{
//     node* head;
//     node* tail;

//     public:
//     doublylist(){
//         head=tail=NULL;
//     }
//     void push_font(int val){
//         node* newnode=new node(val);
//         if(head==NULL){
//             head=tail=newnode;
//             return ;
//         }
//         else{
//             newnode->next=head;
//             head->prev=newnode;
//             head=newnode;
//         }
//     }
//     void print(){
//         node* temp=head;
//         while(temp != NULL){
//             cout<<temp->data<<" <=> ";
//             temp=temp->next;

//         }
//         cout<<"NULL"<<endl;
//     }
// };
// int main(){
//     doublylist dll;
//     dll.push_font(1);
//      dll.push_font(2);
//       dll.push_font(3);
//       dll.print();
//       return 0;

// }


// push_back doubly linked list 

// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;

//     node(int val){
//         data=val;
//         next=prev=NULL;

//     }
// };
// class doublylist{
//     node* head;
//     node* tail;

//     public:
//     doublylist(){
//         head=tail=NULL;
//     }
//     void push_back(int val){
//         node* newnode=new node(val);
//         if(head==NULL){
//             head=tail=newnode;
//             return ;
//         }
//         else{
//             newnode->prev=tail;
//            tail->next=newnode;
//             tail=newnode;
//         }
//     }
//     void print(){
//         node* temp=head;
//         while(temp != NULL){
//             cout<<temp->data<<" <=> ";
//             temp=temp->next;

//         }
//         cout<<"NULL"<<endl;
//     }
// };
// int main(){
//     doublylist dll;
//     dll.push_back(1);
//      dll.push_back(2);
//       dll.push_back(3);
//       dll.print();
//       return 0;

// }



//pop front


// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;

//     node(int val){
//         data=val;
//         next=prev=NULL;

//     }
// };
// class doublylist{
//     node* head;
//     node* tail;

//     public:
//     doublylist(){
//         head=tail=NULL;
//     }
//     void push_back(int val){
//         node* newnode=new node(val);
//         if(head==NULL){
//             head=tail=newnode;
//             return ;
//         }
//         else{
//             newnode->prev=tail;
//            tail->next=newnode;
//             tail=newnode;
//         }
//     }

//     void pop_font(){
//         if(head == NULL){
//             cout<<" doubly link list is empty";
//             return ;
//         }
//         node* temp= head;
//         head=head->next;
//         if(head != NULL){
//             head->prev=NULL;
//         }
//         temp->next=NULL;
//         delete temp;
//     }



//     void print(){
//         node* temp=head;
//         while(temp != NULL){
//             cout<<temp->data<<" <=> ";
//             temp=temp->next;

//         }
//         cout<<"NULL"<<endl;
//     }
// };
// int main(){
//     doublylist dll;
//     dll.push_back(1);
//      dll.push_back(2);
//       dll.push_back(3);

//       dll.pop_font();
//       dll.print();
//       return 0;

// }


//   pop_back


// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;

//     node(int val){
//         data=val;
//         next=prev=NULL;

//     }
// };
// class doublylist{
//     node* head;
//     node* tail;

//     public:
//     doublylist(){
//         head=tail=NULL;
//     }
//     void push_back(int val){
//         node* newnode=new node(val);
//         if(head==NULL){
//             head=tail=newnode;
//             return ;
//         }
//         else{
//             newnode->prev=tail;
//            tail->next=newnode;
//             tail=newnode;
//         }
//     }

//     void pop_back(){
//         if(tail== NULL){
//             cout<<" doubly link list is empty";
//             return ;
//         }
//         node* temp= tail;
//         tail=tail->prev;
//         if(tail != NULL){
//             tail->next=NULL;
//         }
//         temp->prev=NULL;
//         delete temp;
//     }



//     void print(){
//         node* temp=head;
//         while(temp != NULL){
//             cout<<temp->data<<" <=> ";
//             temp=temp->next;

//         }
//         cout<<"NULL"<<endl;
//     }
// };
// int main(){
//     doublylist dll;
//     dll.push_back(1);
//      dll.push_back(2);
//       dll.push_back(3);

//       dll.pop_back();
//       dll.print();
//       return 0;

// }

