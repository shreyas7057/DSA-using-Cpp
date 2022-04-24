#include<iostream>
#include<vector>

using namespace std;

// void LinearSearch(int s[],int num) {

//     int temp = 0;
    
//     for(int i= 0;i<7;i++) {

//         if(s[i]==num) {
//             cout<<"Element found: "<<i<<endl;
//             temp = 1;
//         }
//     }

//     if(temp==0) {
//         cout<<"Element not found"<<endl;
//     }
// }


void LinearSearch(vector<int>s,int num) {
    int temp = 0;
    for(int i=0;i<s.size();i++) {
        if(s[i]==num) {
            cout<<"Element found at: "<<i<<endl;
            temp = 1;
        }
    }

    if(temp == 0) 
        cout<<"Element not found";      
}


int main() {

    // int s[] = {34,2,1,3,65,22,67};

    vector<int> s = {34,2,1,3,65,22,67};

    int search;

    cout<<"Enter element for searching: ";
    cin>>search;

    LinearSearch(s,search);

    return 0;
}