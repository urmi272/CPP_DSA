#include <iostream>
using namespace std;

//****Containers****

//pairs
#include <utility> // for std::pair
void pairs() {
    pair<int, int> p1(1, 2);
    pair<int, pair<int, int>> p2(1, p1);
    pair<int , int> arr[3] = { {1, 2}, {3, 4}, {5, 6} }; //arr[3] is for size
	cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    cout << arr[1].first << " " << arr[1].second << endl; //arr[1] is for index
}

//vectors
#include <vector> 
void explainVector(){
    vector<int> v; // vector of integers
    v.push_back(1);
    v.emplace_back(2);
    v.pop_back();
    vector<int> v1 = {1, 2, 3, 4, 5}; // vector with initializer list
    vector<pair<int, int>> v2 = {{1, 2}, {3, 4}, {5, 6}}; // vector of pairs
    v2.push_back({7, 8});
    v2.emplace_back(9, 10);
    vector<int> v3(5, 10); // 5 elements, each initialized to 10

    cout<< v[0] << " " << v[1] << endl; // accessing elements
    // Iterating through vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    //iteator
    vector<int>::iterator it = v1.begin();
    it++; // increment iterator
    cout << *it << endl; // accessing element through iterator
    it = it +2;
    cout << *it << endl; 
    vector<int>::iterator it2 = v1.end(); // iterator to the end of the vector (after the last element)
    
    for (auto it3 = v1.begin(); it3 != v1.end(); ++it3) {
        cout << *it3 << " ";
    }
    for (auto it : v1){
        cout << it << " "; // range-based for loop
    }

    v.erase(v.begin() + 1); // erase element at index 1
    v.insert(v.begin() + 1, 3); // insert 3 at index 1
}

//list
#include <list>
void explainList(){
    list<int> ls;
    
    ls.push_back(2); //{2} //pushing element is cheaper than inserting them (in vectors)
    ls.emplace_back(4); //{2,4}
    ls.push_front(5); //{5,2,4}
    ls.emplace_front(); //{2,4}
    //rest of the fuction is same as vectors
}

//deque
#include <deque>
void explainDeque(){
    deque<int> dq;
    
    dq.push_back(2); //{2} //pushing element is cheaper than inserting them (in vectors)
    dq.emplace_back(4); //{2,4}
    dq.push_front(5); //{5,2,4}
    dq.emplace_front(3); //{3,5,2,4}

    dq.pop_back();
    dq.pop_front();
    //rest of the fuction is same as vectors
}

//Stack ----> LIFO
#include <stack>
void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(6);
    st.emplace(3); //{3,6,4,2,1}

    cout<< st.top(); //print 3 (top of the element)
    st.pop();
    cout<< st.top(); //print 6 (top of the element)
    cout<<st.size();
    cout<<st.empty(); //false

    stack<int> s1, s2;
    s1.swap(s2);
}

//Queue ----> FIFO
#include<queue>
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(5);
    q.emplace(7); //{1,2,5,7}

    q.back() += 1; //{1,2,5,8}

    cout<< q.back(); // 8

    q.pop(); //{1,2,5}

    cout<< q.front();
    //rest same as stack
}

//Priority Queue (heap)
void explainPQ(){
//***** Max heap ******/
    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(2);
    pq.emplace(7); //{7,5,2,1} //decending order

    cout<< pq.top(); //7
    pq.pop();
    cout<< pq.top(); //5

//***** Min heap ******/
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(5);
    p.push(1);
    p.push(2);
    p.emplace(7); //{1,2,5,7} //ascending order

    cout<< pq.top(); //1
}

//Set -----> stores sorted n unique ele
#include <set>
void explainSet(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(2);
    st.insert(4);
    st.emplace(5); //{1,2,3,4,5}

    int cnt = st.count(1);
    auto it = st.find(3);
    st.erase(it); 
}
//Multi set ---> sorted not unique
void multiSet(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); //{1,1,1,1}

    ms.erase(1); //all 1's erased
    ms.erase(ms.find(1)); //single one erased

    int cnt = ms.count(1);
}
//Unordered set ----> Unique not sorted
#include <unordered_set>
void Uset(){
    unordered_set<int> st;
}

//Map<Key, value> ----> unique keys that has a value
#include <map>
void explainMap(){
    map<int,int> m;
    map<int, pair<int,int>> m;
    map<pair<int,int>, int> m2;

    m[1]= 2;
    m.emplace(3, 1);
    m.insert(2,4);

    m2[{2,3}]=10;

    cout<< m[1]; //2
    cout<< m[5]; //0 null

    auto it = m.find(3);
    cout << it->second; //1
}

//****Algorithms****

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //they are equal
    if(p1.first>p2.first) return true;
    return false;
}

#include <algorithm>
void Explain(){
    int n; cin>>n;
    int a[n] = {2,25,63, 34, 6, 4,7};
    sort(a, a+n); //for array
    vector <int> v;
    sort(v.begin(), v.end()); //for vector
    sort(a, a+n, greater<int>()); //in decending order
    sort(a, a+n, comp); //my way sorting

    cout << *max_element(a, a+n);
}