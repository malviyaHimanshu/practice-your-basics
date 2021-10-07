// Name : Himanshu Malviya
// Roll No. : CS20B1097

/*
Question 26.
Given an array and an integer K, find the maximum for each and every contiguous subarray of size k.
*/

#include<iostream>
using namespace std;

void maxOfSubarray(int arr[], int n, int k) {
    int max;
    for(int start = 0; start <= n-k; ++start) {
        max = arr[start];
        // subarray of size k
        // start <= subarray <= start+k-1 (i.e. end of subarray)
        for(int current = start; current <= start+k-1; ++current) {
            if(max < arr[current]) {
                max = arr[current];
            }
            cout<<arr[current]<<" ";
        }
        cout<<"| Max --> "<<max<<endl;
    }
}

int main() {
    int k;
    cout<<"k : ";
    cin>>k;

    // example array
    int arr[5] = {2, 7, 4, 8, 9};
    maxOfSubarray(arr, 5, k);

    return 0;
}
