#include<iostream>

using namespace std;

int BinarySearch(int arr[],int left,int right,int num) {
    
    while(left<=right) {
        int mid = left+(right-left)/2;

        if(arr[mid]==num)
            return mid;

        else if(arr[mid]<num)
            left = mid+1;

        else 
            right = mid-1;
    }
    return -1;

}

int main() {

    int arr[] = {2,3,12,46,56,78};

    int num;

    cout<<"Enter number for search: ";
    cin>>num;
    cout<<endl;

    int output;
    output = BinarySearch(arr,0,5,num);
    cout<<output;

    return 0;
}