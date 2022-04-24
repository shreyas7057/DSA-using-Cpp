#include<iostream>

using namespace std;

void SelectionSort(int arr[],int n) {

    for(int i=0;i<n-1;i++) {

        int min = i;

        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[min]) {
                min = j;
            }
        }
        int temp;
        if(min!=i) {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {

    int arr[] = {4,2,5,1,3};

    cout<<"Before sorting: ";

    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    SelectionSort(arr,5);

    cout<<"After sorting: ";

    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}