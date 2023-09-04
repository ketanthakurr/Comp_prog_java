#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    int i,j;
    for (i = 0; i < n - 1 ; ++i)
    {
        for(int j = 0; j < n - i - 1; ++j){
            if(arr[j] > arr[j-1]){
                int temp = arr[i];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    
}

int main(){
    int arr[] = {3,2,1};
    bubbleSort(arr, sizeof)
}
