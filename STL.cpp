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
int main(){
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

