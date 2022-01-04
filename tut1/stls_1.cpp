
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//#include <stdafx.h>

using namespace std;

int main(){
    cout << "Hii\n";
    vector<int> A ;//= { 2,1,3,4 };
    A.push_back(2);
    A.push_back(1);
    A.push_back(3);
    A.push_back(4);
    int arr[] = { 10, 20, 30 };
    int n = sizeof(arr) / sizeof(arr[0]);
    //vector<int> vect1a{ 10, 20, 30 };
    vector<int> vect(arr, arr + n);
    vector<int> vect1(10);
    int value = 5;
    fill(vect1.begin(), vect1.end(), value);
    vector<int> vect2(vect1.begin(), vect1.end());
    vector<int> vecta(7, 10);
    // cout << A[1] << endl;
    cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << endl;
    sort(A.begin(), A.end()); // O(NlogN)
    bool present = binary_search(A.begin(), A.end(), 31); // O(logN)
    cout << present << endl;
    cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << endl;
    return 0;
}

