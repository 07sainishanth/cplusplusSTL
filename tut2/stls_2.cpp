
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
//#include <bits/stdc++.h>
#include "/Users/sainishanthvaka/stdc++.h"
#include <algorithm>
//#include <stdafx.h>
#include <array>
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

int main(){
    cout << "Hii\n";
    arrayDemo();
    vetcorDemo();
    containerInContainer();
    return 0;
}

