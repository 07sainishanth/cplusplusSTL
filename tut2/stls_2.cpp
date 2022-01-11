
#include <iostream>
#include <string>
#include <vector>
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
// Internally uses binary tree , AVL/red black tree, (self-balance)

#include <functional>
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
    return 0;
}

