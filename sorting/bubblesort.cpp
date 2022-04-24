#include<iostream>

using namespace std;

void BubbleSort(int arr[],int n) {
    int temp;
    for(int i=0;i<n-1;i++) {

        for(int j=0;j<n-1-i;j++) {
            if(arr[j+1]<arr[j]) {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

}

int main() {

    int arr[5] = {4,5,10,1,2};

    cout<<"Before sorting: ";

    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"After sorting: ";
    BubbleSort(arr,5);

    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}