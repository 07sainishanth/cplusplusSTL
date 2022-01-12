
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <set>
#include <map>
//#include <bits/stdc++.h>
//#include "/Users/sainishanthvaka/stdc++.h"
#include <forward_list>
#include <list>
#include <algorithm>
//#include <stdafx.h>
#include <array>


#include <map>
#include <unordered_map>
// Internally uses binary tree , AVL/red black tree, (self-balance)

#include <queue>
#include <deque>
#include <stack>

#include <functional>
#include <numeric>
#include <execution>
/*
 Youtube tutorial
 link : https://www.youtube.com/watch?v=ZqfoG5w36Qw
 */


using namespace std;

void arrayDemo(){
    std::array<int, 5> myarray2;
    myarray2.fill(10);

    
    std::array<int, 5> myarray = {1,2,3,4,5};
//    std::array<int, 5> myarray2 {1,2,3,4,5};

}

void vetcorDemo(){
    
    std::vector<int> arr1;
    std::vector<int> arr2(5, 30);
//    std::vector<int> arr3 = {1,2,3,4,5};
//    std::vector<int> arr4{1,2,3,4,5};
    
    arr2[3] = 10; // not exection safe
    arr2.at(3) = 12; // Exception safe
    
    std::vector<int> vec1;
    for (int i = 0; i< 8; i++) {
        vec1.push_back(i);
        cout << "Size = " << vec1.size() << "   ; Capacity = " << vec1.capacity() << endl;
    }

}

void containerInContainer(){
    std::vector<vector <int> > Tree;
    int edge, n1, n2;
    cin >> edge;
    Tree.resize(edge);
    
    for(int i = 0; i < edge; i++){
        cin >> n1 >> n2;
        Tree[n1].push_back(n2);
    }
    
    for(int i = 0; i < Tree.size(); i++){
        cout << i << " : ";
        for(int j = 0; j < Tree[i].size(); j++){
            cout << Tree[i][j];
        }
        cout << endl;
    }
}

class Am{
public:
    int x;
    Am(int x = 0){cout << "Construct" << endl; x = x;};
//    Am(const Am& rhs) { x = rhs.x; cout << "Copy" << endl;}
};

class MyClass {     // The class
  public:           // Access specifier
    int x;
    MyClass(int a) {     // Constructor
      cout << "Hello World!";
        x = a;
    }
    MyClass(const MyClass& rhs) { x = rhs.x; cout << "Copy" << endl;}

};

void emplace_(){
    set<MyClass> Set;
    MyClass a(10);
//    Set.insert(MyClass(10));
//    Set.emplace(10);
}

void forward_listDemo(){
    forward_list<int> list1;
//    list1.assign(1);
    //{1, 3, 2, 9};
    forward_list<int> list2 ;//= {11, 31, 21, -19};
    list1.sort();
    list2.sort();
    list1.merge(list2);
//    for (int i = 0; i< list1.size(); i++) {
//
//        cout << list1[i] <<  << "   ," ;
//    }
//    cout << endl;
}

void listDemo(){
    list<int> list1;
//    list1.assign(1);
    //{1, 3, 2, 9};
    list<int> list2 ;//= {11, 31, 21, -19};
    list1.sort();
    list2.sort();
    list1.merge(list2);
//    for (int i = 0; i< list1.size(); i++) {
//
//        cout << list1[i] <<  << "   ," ;
//    }
//    cout << endl;
}

void mapDemo(){
    map<string, int, less<string> > map1;
//    map<string, int, greater<string> > map1;
    map1.insert(make_pair( "Sai", 76));
    map1["Oasis"] = 906;
    map1["Love"] = 143;
    cout << map1["Love"] << endl;
    
    map<string, int>::iterator it;
    map1["Love"] = -143;
    for (it = map1.begin(); it != map1.end(); it++)
    {
        std::cout << it->first    // string (key)
                  << " : "
                  << it->second   // string's value
                  << std::endl;
    }
    
    map<string, vector<int>, greater<string> >map2;
    map2["Sai"].push_back(23);
    map2["Sai"].push_back(37);
    
    map<string, vector<int> >::iterator it2;
    for (it2 = map2.begin(); it2 != map2.end(); it2++)
    {
        cout << it2->first  << endl;  // string (key)
        vector<int>::iterator it2_temp;
        for (it2_temp = it2->second.begin(); it2_temp != it2->second.end(); it2_temp++){
            cout << *it2_temp << " ,";
        }
        cout << endl;
    }
}

void multimapDemo(){
    multimap<string, int> mmap1;
    mmap1.insert(make_pair("Sai" , 19));
    mmap1.insert(make_pair("Sai" , 17));
    mmap1.insert(make_pair("Nishanth" , 19));
    multimap<string, int>::iterator it;
    for (it = mmap1.begin(); it != mmap1.end(); it++)
    {
        std::cout << it->first    // string (key)
                  << " : "
                  << it->second   // string's value
                  << std::endl;
    }
    cout << "equal range" << endl;
    pair< multimap<string, int>::iterator, multimap<string, int>::iterator > it2 =  mmap1.equal_range("Sai");
    for (it = it2.first; it != it2.second; it++)
    {
        std::cout << it->first    // string (key)
                  << " : "
                  << it->second   // string's value
                  << std::endl;
    }
    
    cout << mmap1.count("Sai") << endl;
//    pair<string, int> aa1 = mmap1.find("sai");
//    cout << aa1->first << " : " << aa1->second << endl;
//    cout << mmap1.contains("Sai") << endl;
}

void unorderedMapDemo(){
    // data stored using hashing & bucets where as map stores data using
    // red black tree.
    // Stored data in buckets
    // search, removal, insertion occurs in average c-nstant-time complexity;
    // allows dublicate {key:value} pairs
    unordered_multimap<int, string> umm;
    unordered_multimap<string, int> umm_;
    umm.insert(make_pair(17, "Sai"));
//    umm[17] = "SaiNishanth";
    umm_.insert(make_pair("Sai", 17));
//    cout << umm[17] << " : " << umm_["Sai"] << endl;
}

void setDemo(){
    set<int> set_;
    set_.insert(1);
    set_.insert(2);
    set_.insert(1);
    set<int>::iterator it;
    for (it = set_.begin(); it != set_.end(); it++)
    {
        std::cout << *it   // string (key)
        << " ,";
    }
    cout << endl;
      
}

void multisetDemo(){
    // Uses red black tree
    // Allows duplicate values
    // stores data in ordered format.
    
    // Multiset needs opertors inside classes for it to accepts objects.
    multiset<int> multiset_;
    multiset_.insert(12);
    multiset_.insert(23);
    multiset_.insert(34);
}

void unordered_setDemo(){
    unordered_set<int> uset;
    uset.insert(12);
    uset.insert(32);
    uset.insert(42);
}

void unorderedMultiSetDemo(){
    // Using hashing to store data
    // average constant time to search, store and remove data
    // map uses red black tree so logarthmic time
    unordered_multiset<int> uset;
    uset.insert(12);
    uset.insert(32);
    uset.insert(42);
}

void queue_Demo(){
    queue<int> que;
    que.push(12);
    que.push(23);
    que.push(32);
    
    while(!que.empty()){
        cout << que.front() << " : ";
        que.pop();
    }
    cout << endl;
}

void priorityQueueDemo(){
    priority_queue<int> pq;
    pq.push(12);
    pq.push(-12);
    pq.push(123);
    pq.push(132);
    pq.push(-212);
    
    while(!pq.empty()){
        cout << pq.top() << " : ";
        pq.pop();
    }
    cout << endl;
    
}

void stackDemo(){
    
    // All operations in constant time : push, pop, size, empty
    // Container adapter can use specified adapter : like vecor, map, set, multi set e.t.c.
    stack<int> stk;
    stk.push(12);
    stk.push(-12);
    stk.push(123);
    stk.push(132);
    stk.push(-212);
    
    while(!stk.empty()){
        cout << stk.top() << " : ";
        stk.pop();
    }
    cout << endl;
}

void print_vec(vector<int>& vec){
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, "  "));
    cout << endl;
}

void copyDeom(){
    vector<int> vec_src(10, 6);
    iota(vec_src.begin(), vec_src.end(), 0);
    vector<int> vec_des(vec_src.size());
    copy(vec_src.begin()+1, vec_src.end()-1, vec_des.begin());
    print_vec(vec_des);
    
    vector<int> vec_des2;
    copy(vec_src.begin(), vec_src.end(), back_inserter(vec_des2));
    print_vec(vec_des2);
    
    // copy_n
    vector<int> vec_des3;
    copy_n(vec_src.begin()+3, 4, back_inserter(vec_des3));
    print_vec(vec_des3);
    
    // copy_backward
    vector<int> vec_des4(15);
    copy_backward(vec_src.begin(), vec_src.end(), vec_des4.end());
    print_vec(vec_des4);

}

void dequeDemo(){
    //Deque
    // Index container
    // random access O(1)
    // insertion & removal from both sides O(1)
    deque<int> dqu;
    dqu.push_front(1);
    dqu.push_front(0);
    dqu.push_back(2);
    dqu.push_back(3);
    dqu.push_back(4);
    dqu.push_back(5);
    
    dqu.pop_front();
    dqu.pop_back();
    cout << dqu[0] << " : " <<  dqu[-1]<< endl;
}

void sortDemo(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    print_vec(vec);
    sort(vec.begin(), vec.end(), greater<int>());
//    sort(std::execution::par, vec.begin(), vec.end(), greater<int>());
//    sort(vec.begin(), vec.end(), [](int a, int b){ return a < b;});
    
    // is_sorted
    print_vec(vec);
    cout << is_sorted(vec.begin(), vec.end(), greater<int>()) << endl;
    cout << is_sorted(vec.begin(), vec.end()) << endl;
    vec.push_back(2);
    
    // sorted unitl
//    vector<int>::iterator it  =  is_sorted_until(vec.begin(), vec.end());
    vector<int>::iterator it  =  is_sorted_until(vec.begin(), vec.end(), greater<int>());
    int diff = distance(vec.begin()+2, it);
    cout << endl << diff << endl;
    
    // kth largest element
}

int main(){
    cout << "Hii->\n";
//    arrayDemo();
//    vetcorDemo();
//    containerInContainer();
//    forward_listDemo();
//    list();
//    emplace_();
//    mapDemo();
//    multimapDemo();
//    unorderedMapDemo();
//    setDemo();
//    multisetDemo();
//    unordered_setDemo();
//    unorderedMultiSetDemo();
//    queue_Demo();
//    priorityQueueDemo();
//    stackDemo();
//    copyDeom();
//    dequeDemo();
    sortDemo();
    return 0;
}

