#include<iostream>

using namespace std;

void InsertionSort(int arr[],int n) {
    int temp;
    for(int i=1;i<n;i++) {
        temp = arr[i];

        int j = i-1;

        while(j>=0&&arr[j]>temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main() {

    int arr[] = {5,3,1,8,2};

    cout<<"Before sorting: ";

    for(int i=0;i<5;i++) {
       cout<<arr[i]<<" "; 
    }

    cout<<endl;

    InsertionSort(arr,5);

    cout<<"After sorting: ";

    for(int i=0;i<5;i++) {
       cout<<arr[i]<<" "; 
    }

    return 0;
}