#include<bits/stdc++.h>
using namespace std;

vector<int> subArrReverse(vector<int>& arr, int L, int R)
{
    int no_of_element = R-L + 1;

    if (no_of_element == 1){
        return arr;
    }

    else if (no_of_element == 2){
        swap(arr[L], arr[R]);
        return arr;
    }

    else{

    }

    int i = 0;

    while (i < no_of_element/2)
    {
        swap(arr[L+i], arr[R-i]);
    }
    
}