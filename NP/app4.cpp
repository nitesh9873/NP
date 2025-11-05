#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>

using namespace std ;
int main (){
    //vector illuistration 
    // loop uses with the help of iiterators .
vector<int>vec={1,2,3,4,5,6,7,8,9} ;
vector<int> ::iterator it;
cout<< " the member are :";
for( it=vec.begin(); it!=vec.end(); it++){
    
    cout<<*(it)<<" ";
}
cout<<endl;
cout<< " the  reverse member are :";
for(
   auto it=vec.rbegin(); it!= vec.rend(); it++
){
    cout<<*(it)<<" ";
}

cout<<endl;
//list making 
list<int>l={1,2,3};
l.push_back(1);
l.push_back(2);
l.push_back(3);
l.push_back(4);
cout<<"the member of list:"<<" ";
//displaying the list member
for ( int val:vec){
    cout<< val<< " ";
}
cout<<endl;
//normal pair 
pair<int,int> p= {5,20};
cout<<"the first member of pair is :"<<p.first<<" "<<endl;
//pair inside pair
pair<pair<int,int>,pair<int,int >> q={{4,7},{2,3}};
cout<<"the second member of first pair is :"<<q.first.second<<endl;
stack<int > s;
s.push(1);
s.push(2);
s.push(3);
stack<int > s2;
s2.swap(s);
/*for ( int val:stack){
    cout<< val<< " ";//some mistake is there.
}*/
cout<<s.size()<<endl;//0
cout<<s2.size()<<endl;//3
//queue
queue<int> q;
q.push(1);
q.push(2);
q.push(3);
while (!q.empty())
{
    cout<<q.front() <<" ";
    q.pop() <<" ";
}
cout<<endl;
    return 0 ;
}