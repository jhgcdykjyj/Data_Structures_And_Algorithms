#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;   

int main()
{//        VECTOR
cout<<"         VECTOR"<<endl;
    vector<int> v;

    vector<int> a(5, 1);
    vector<int> last(a);
    cout << "Print a ";
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;

    cout << "size-> " << v.size() << endl;

    cout << "Element at second index-> " << v.at(2) << endl;
    cout << "front " << v.front() << endl;
    cout << "front " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;


//          DEQUE
cout<<"         DEQUE"<<endl;

    deque<int> d;

    d.push_back(5);
    d.push_front(9);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout<<endl;

    // d.pop_back();
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    cout<<"print first index element "<<d.at(0);

    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;
    for(int i:d){
        cout<<i;
    }
    cout<<endl;


//          LIST
cout<<"         LIST"<<endl;

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list "<<l.size()<<endl;

    l.erase(l.begin());
    cout<<"after erase ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list "<<l.size()<<endl;

    
//          STACK
cout<<"         STACK"<<endl;

    stack<string> s;

    s.push("I");
    s.push("and");
    s.push("her");

    cout<<"Top Element-> "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element-> "<<s.top()<<endl;
    cout<<"size of stack is "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty()<<endl;


//          QUEUE
cout<<"         QUEUE"<<endl;

    queue<string> q;
    
    q.push("I");
    q.push("met");
    q.push("her");

    cout<<"size before pop "<<q.size()<<endl;
    cout<<"First Element "<<q.front()<<endl;
    q.pop();
    cout<<"First element after pop "<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;


//          PRIORITY QUEUE
cout<<"         PRIORITY QUEUE"<<endl;    


    // max heap
    priority_queue<int> maxi;
    // min heap
    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size->"<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0; i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;


    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    cout<<"size->"<<maxi.size()<<endl;

    int m = mini.size();
    for(int i=0; i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;


//          SET
cout<<"         SET"<<endl;


    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);
     
    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(s.begin());

    for(auto i:s){
       cout<<i<<" ";
    }
    cout<<endl;

    set<int>:: iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
       cout<<i<<" ";
    }
    cout<<endl;
    cout<<"5 is present "<<s.count(5)<<endl;

    set<int>::iterator itr = s.find(1);

    for(auto it=itr; it!= s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;


//          MAP
cout<<"         MAP"<<endl;


    map<int,string> m;
    m[1]="I";
    m[2]="am";
    m[3]="myself"; 

    m.insert({5,"not"});
    cout<<"before erase "<<endl;
    for(auto  i:m){
        cout<<i.second<<" "; 
    }
    cout<<endl;

    cout<<"finding 13 " <<m.count(13)<<endl;
    cout<<"after erase "<<endl;
    //m.erase(5);
    for(auto  i:m){
        cout<<i.first<<" "<<i.second<<endl; 
    }
    cout<<endl;

    auto it =m.find(1);

    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}