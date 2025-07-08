
// #include<iostream>
// using namespace std;
// int main(){
//     char name[20];
    
//     // cout<<"enter your name"<<endl;
//     cin>>name; 
//     // cin.getline(name,50);
//     cout<<"apka name "<<name<<endl;
//     return 0;
// }

// ****  reverse of string 

// #include<iostream>
// using namespace std;
// int reversString(char name[],int n){
//     int s=0;
    
//     int e= n - 1;
//     while(s<=e){
//         swap(name[s],name[e]);
//         s++;
//         e--;
//     }
  
// }
// int charLengh(char name[]){
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     return count; 
// }

// int main(){ 
//     char name[20];
//     cin>>name;
//     int len=charLengh(name);
//     // cout<<len<<endl;
//     reversString(name, len);
    
//     cout<<"hour name"<<name<<endl;
// }


//   lenth of string 


// #include<iostream>
// #include<string.h>
// using namespace std;

// int getLenght(char name[]){
//     int lenght=0;
//     int i=0;
//     while(name[i] != '\0'){
//         lenght ++;
//         i++;
//     }
//     return lenght;
// }

// int main(){
//     char name[100];
//     cout<<"enter your value"<<endl;
//     cin>>name;
//     cout<<getLenght(name);
//     return 0;

// }


//    check the  palindrom


// #include<iostream>
// using namespace std;


// bool palindrom(char name[],char len){
//     int s=0;
//     int e=len-1;

//     while(s<=e){
//         if(name[s] != name[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
        
//     }
//     return 1;
// }

// int  lenth(char name[]){
//     int count=0;
//     for(int i=0;name[i] !='\0';i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     char name[20];
//     cout<<"enter your name"<<endl;
//     cin>>name;
//     int  len=lenth(name);
//     cout<<palindrom(name,len);
// }


// ******   using function lenght find 



// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char name[100];
//     cout<<" enter your name";
//     cin>>name;
//     cout<<strlen(name);
// }



 
// *********   KHALI SPACE JAGAH PAR KOI ELEMENT PUT KARTA HAI

// #include<iostream>
// #include<string.h>
// using namespace std;

// void  replacesentance(char sentance[]){
//     int i=0;
//     int n=strlen(sentance);
//     for(i=0;i<n;i++){
//     while(sentance[i]==' '){
//         sentance[i]='@';
//     }
// }
// }

// int main(){
//     char sentance[1000];
//     cout<<"enter the sentsnce"<<endl;
//     cin.getline(sentance,100);
//     replacesentance(sentance);
//     cout<<sentance<<endl;
// }



// find  the maximum charector by frequency  not using map


// #include<iostream>
// #include<string>
// using namespace std;

// char getmaxcharecter(string s){
//     int arr[26]={0};
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];

//         int number = 0;
//         number = ch-'a';
//         arr[number]++;
//     }

//     int maxi = -1,ans=0;
//     for(int i=0;i<26;i++){
//         if(maxi < arr[i]){
//         ans=i;
//         maxi = arr[i];
//         }
//     }
//     char finalans = 'a'+ans;
//     return finalans;

// }
// int main(){
//     string s ;
//     cin>>s;
//     cout<< getmaxcharecter(s);

// }


// find  the maximum charector by frequency  using map



// #include<iostream>
// #include<string>
// #include<map>
// using namespace std;

// char getmaxcharecter(string s){
//     map<char,int>p;
//     for(int i=0;i<s.length();i++){
//        p [s[i]]++;

//     }
//     int max=0,ans;
//     for(auto it :p){
//         if(it.second>max){
//             ans=it.first;
//             max=it.second;
//         }
//     }
//     return ans;



// }
// int main(){
//     string s ;
//     cin>>s;
//     cout<< getmaxcharecter(s);

// }

// Replace space put on the @40


// #include<iostream>
// #include<string>
// using namespace std;

// string Replce(string & str){
//     string temp="";
//     for(int i=0;i<str.length();i++){
//         if(str[i]==' '){
//            temp.push_back('@');
//            temp.push_back('4');
//            temp.push_back('0');
//         }
//         else{
//            temp.push_back(str[i]);
//         }
//     }
//     return temp;

// }
// int main(){
//     string str="my name is khan";
//     cout<<Replce(str);
// }


// Valid palindrom

//   #include<iostream>
//   #include<string >
//   using namespace std;
//   bool isAlphanum(char ch){
//     if((ch>='0'&& ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
//         return true;
//     }
//     return false;
//   }
//   bool ispalindrom(string str){
       
//     int s=0;
//     int e=str.length()-1;
//     while(s<=e){
//         if(isAlphanum(str[s])){
//             s++;continue;
//         }
//         if(isAlphanum(str[e])){
//             e--;continue;
//         }
//         if(tolower(str[s]) != tolower(str[e])){
//             return true;
//         }
//         s++;
//         e--;
//     }
//     return false;
//   }
//   int main(){
//     string str="race is a car ";

//     cout<<ispalindrom( str);
//   }



// Remove all occurrence of a string 



// #include<iostream>
// #include<string>
// using namespace std;

// string removeOccurrence(string str,string part){

//     while(str.length() != 0 && str.find(part)<str.length()){

//         str.erase(str.find(part),part.length());
//     }
//     return str;
// }
// int main(){
//     string str="daabcbaabcbc";
//     string part="abc";

//     cout<<removeOccurrence(str,part);
// }


// *********  palindrom of string   example --read to right to left and left to right element is same is called palindrom means NOON
// bahut important hai

// #include<iostream>
// #include<string.h>
// using namespace std;

// bool checkPalindrom(char word []){
   
//   int i=0;
//   int n=strlen(word);
//   int j=n-1;
//   while(i<=j){
//     if(word[i]!=word[j]){
//         return false;
//     }
//     else{
//         i++;
//         j--;
//     }
//   }
//   return true;

// }

// int main(){
   
//     char word[1000];
//     cin>>word;
//     cout<<"palindrom check "<<checkPalindrom(word)<<endl;
// }


// ******   basic function used

// #include<iostream>
// #include<string.h>
// using namespace std;

// int main (){
    // string str;
//     // cin>>p;
//     getline(cin,str);


//     cout<<str;
//     cout<<"length "<<str.length()<<endl;
//     cout<<"is_empty "<<str.empty()<<endl;
//     str.push_back('A');
//     cout<<str<<endl;
//     str.pop_back();
//     cout<<str<<endl;

//     cout<<"need to common charecter   "<<str.substr(1,3);
// }

//  *******   string sort method

// #include<iostream>
// // #include<string.h>
// #include<algorithm>
// using namespace std;
// int main() {
//     string s="babbar";
//     // sort(s.begin(),s.end());
//  atoi(s.c_str()) ;// this function used  convert string to integer mens "45"into 45
//     cout<<s<<endl;

// }

//    remove addjecent element 

// #include<iostream>
// #include<algorithm>
// #include<stack>
// #include<string>
// using namespace std ;

// string removeadjecent(string str){
//     int n=str.size();
//     int i=0;
//     stack<char>st;
    
//     while(i<n){
//         if(st.empty() && st.top()!=str[i]){
//             st.push(str[i]);
//         }
//         else{
//             st.pop();
//             i++;
//         }

//         string ans="";
//         while(!st.empty()){
//             char ele = st.top();
//             st.top();
         
//             ans += ele;
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
   
// }

// int main(){
//    string str="abbababc";
//    cout<<removeadjecent(str);
  
// }

// fint the ASCII value to charector

// #include<iostream>
// #include<string >
// using namespace std;

// int main(){
//     char n;
//     cout<<"enter the charector"<<endl;
//     cin>>n;
//     cout<<"A = "<<int(n)<<endl;
//     return 0;
// }


// count vowel , consonent ,space

// #include<iostream>
// #include<string >
// using namespace std ;

// int countvowel(string str){
//     int vowel=0;
//     int consonent =0;
//     int space=0;
//     for(int i=0;i<str.length();i++){
//       if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'||str[i]=='o'|| str[i]=='u'|| str[i]=='A'||
//           str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U' ){
//             vowel++;
//           }
//           if(str[i]>='a'&& str[i]<='z'){
//             consonent++;
//           }
//           else if(str[i]=' '){
//             space++;
//           }

// }
//   cout<<" vowel = "<<vowel<<endl;
//   cout<<" consonent = "<<consonent<<endl;
//   cout<<" space = "<<space<<endl;
// }
// int main(){
//     string str="enter the number ";
//     cout<<countvowel(str);
// }

// remove the vowel


// #include<iostream>
// #include<string >

// using namespace std;
// string removevowel(string str){
//     string rew="";
//     for(int i=0;i<str.length();i++){
//          if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'||str[i]=='o'|| str[i]=='u'||str[i]=='A'||
//                       str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'){
//                continue;
            
//         }
//         rew +=str[i];
         
//     }
//     return rew;
// }

// int main(){
//     string str="Aenter the nOumber ";
//     cout<<removevowel(str);

// }
 

// revmove the space 


// #include<iostream>
// #include<string >

// using namespace std;
// string removevowel(string str){
//     string rew="";
//     for(int i=0;i<str.length();i++){
//         if(str[i]!=' '){
//             rew= rew+str[i];
//         }
//    }
//    return rew;
// }
// int main(){
//     string str="Aenter the nOumber ";
//     cout<<removevowel(str);

// }


// remove brackets from algebric expression 

// #include<iostream>
// #include<string >
// using namespace std;
// int main(){
//     string str;
//     cout<<"enter the input "<<endl;
//     cin>>str;
//     string ans;
//     for(int i=0;i<str.length();i++){
//         if(str[i]!='(' && str[i]!=')'){
//             ans.push_back(str[i]);
//         }
//     }
//     cout<<ans;
// }


// sum of number of string 


// #include <iostream> 
// #include<string >
// using namespace std;

// int sumofnum( string str){
//     int sum=0;
//     int num=0;
//     for(int i=0;i<str.length();i++){
//         if(str[i]>'0' && str[i]<'9'){
//             num=num*10+str[i]-'0';

//         }
//         else{
//             sum +=num;
//             num=0;
//         }
//     }
//     return sum+num;
// }
// int main() {
//     string str="1absdh24";

//     cout<<sumofnum(str);
// }

// capitlize first and last in string 

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// void capitlize(string str,int n){

//     for(int i=0;i<n;i++){
//         if(i==0 || i==(n-1)){
//             str[i]=toupper(str[i]);
//         }
//         else if(str[i]==' '){
//             str[i-1]=toupper(str[i-1]);
//             str[i+1]=toupper(str[i+1]);
//         }
        
//     }
//     cout<<str<<endl;
// }
// int main(){
//     string str="hi I am saif Ali";
//     int n=str.length();
//     capitlize(str,n);
// }



//*****   */ THIS IS FIND THE VALID ANAGRAM ELEMENT

//  #include<iostream>
//  #include<algorithm>
//  using namespace std;
//  bool checkAnagram(string s,string t){
//     sort(s.begin(),s.end());
//      sort(t.begin(),t.end());
    
//     if(s==t){
//         return true;

//     }
//     else{
//         return false;
//     }
//  }
//  int main(){
//     string s="listen";
//     string t="silent";

//   cout<<checkAnagram(s,t)<<endl;
//   return 0;

//  }


// ******  REVERSE ONLY LETTAR WITH SOME RULE LECTURE no..71

// #include<iostream>
// #include<string>
// using namespace std;
// string  reverseLatter(string s){
//     int l=0;
//    int h=s.size()-1;
// //    int i=0;
// while(l<=h){
//     if(isalpha(s[l])&&isalpha(s[h])){
//       swap(s[l],s[h]);
//       l++;
//       h--;
//     }
//     else if (!isalpha(s[l])){
//         l++;
//     }
//     else{
//         h--;
//     }
   
// }
//  return s;


// }
// int main(){
//     string s="Test1ng-Leet=code-q!";
//     cout<<reverseLatter(s)<<endl;
    
//     return 0;
// }


// *******  REVERSE VOWEL OF A STRING ONLY SMALL LATTER

// #include<iostream>
// #include<string>
// using namespace std;

// bool isvowel(char ch){
//     ch=tolower(ch);
//     return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
// }
//  string reverseVowel(string s){
//     int l=0;
//     int h=s.size()-1;
//     // int i=0;

//     while(l<h){

//         if(isvowel(s[l]) && isvowel(s[h])){

//             swap(s[l],s[h]);
//             l++;
//             h--;
//         }
//         else if(isvowel(s[l])==0){
//            l++;
//         }
//         else{
//             h--;
//         }
//     }
//     return s;
//  }
// int main(){
//     string s="hello";
//     cout<<reverseVowel(s)<<endl;
//     return  0;

// }

//  *********  FIND THE INDEX OF FIRST ACCURENCE

// #include<iostream>
// #include<string>
// using namespace std;

// int firstIndex(string haystack,string needle){
//     int n=haystack.size();
//     int m=needle.size();
//     int i, j;
//     for(i=0;i<n-m;i++){
//         for(j=0;j<m;j++){
//             if(needle[j]!=haystack[i+j]){
//                 break;
//             }
//             if( j==m-1){
//                 return i;
//             }
//         }
//     }return -1;
// }

// int main(){
//      string haystack="abbutsadyugsad";
//      string needle ="sad";
//      cout<<"index starting  number =  "<<firstIndex(haystack,needle)<<endl;
//      return 0;
// }
 
//  ******* convert string to integer using function

// #include<iostream>
// #include<string>0
// using namespace std;
//  int myAtoi(string s){
   
//    int integer=atoi(s.c_str());
//    return integer;

//  }

// int main (){
//     string s="42";
//     cout<<myAtoi(s)<<endl;
//     return 0;
//     } 


