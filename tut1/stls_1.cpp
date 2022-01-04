
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//#include <stdafx.h>

/*
 
 Youtube tutorial
 link : https://www.youtube.com/watch?v=g-1Cn3ccwXY
 
 */


using namespace std;

bool comparatorFunction(int x, int y){
    return x>y;
}

void vectorDemo(){
    // Input method 1
    vector<int> A ;//= { 2,1,3,4 };
    A.push_back(2);
    A.push_back(1);
    A.push_back(3);
    A.push_back(4);
    int arr[] = { 10, 20, 30 };
    
    
    int n = sizeof(arr) / sizeof(arr[0]);
    //vector<int> vect1a{ 10, 20, 30 };
    vector<int> vect(arr, arr + n); // Input method 2
    vector<int> vect1(10); // Input method 3
    int value = 5;
    fill(vect1.begin(), vect1.end(), value); // Input method 4
    vector<int> vect2(vect1.begin(), vect1.end()); // Input method 5
    vector<int> vecta(7, 10); // Input method 6
    
    cout << A[1] << endl;
    //cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << endl;
    sort(A.begin(), A.end()); // O(NlogN)
    bool present = binary_search(A.begin(), A.end(), 31); // O(logN)
    cout << present << endl;
    
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    
    vector<int>::iterator it  = lower_bound(A.begin(), A.end(), 100);
    vector<int>::iterator it2  = upper_bound(A.begin(), A.end(), 100);
//    auto it2  = upper_bound(A.begin(), A.end(), 100);
    cout << *it << " " << *it2 << endl;
    cout << it2-it << endl;
    
    sort(A.begin(), A.end(), comparatorFunction); // O(NlogN)
    
//    for(int x : A) {
//        x++;
//    }
    vector<int>::iterator it3;
    for(it3 = A.begin(); it3 != A.end(); it3++){
        cout << *it3 << " ";
    }
    cout << endl;
}

int main(){
    cout << "Hii\n";
//    vectorDemo();
    
    return 0;
}

