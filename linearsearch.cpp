#include <iostream>
#include <climits>
using namespace std;

// int arr[7] = {35,45,12,8,7,6,24};
// int i = 6, search = 77;

// bool isPresent(){
//     if(i < 0) return false;

//     if(arr[i] == search) return true;

//     i--;
//     return isPresent();
// }

// int main(){

//     bool ans = isPresent();
//     cout<<(ans ? "Yes" : "No")<<endl;
// }

// Linear search using user input.

int findNum(int arr[], int i, int search){
    if (i == 0) { 
        return 0;
    }
   else if (arr[i-1] == search) {
    return i - 1;
   }
 	return findNum(arr, i-1, search);	
}

int main() {
    int n, search;
    cout<<"enter length of array: ";
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cout<<"enter array element of index "<<i<<": ";
        cin>>arr[i];
    }

	cout<<"Enter number to be found: ";
    cin>>search;

    int ans = findNum(arr, n, search);
    if (ans == 0)
    {
        cout<<"The element "<<search<<" is not found."<<endl;
    }
    else
    {
        cout<<"The element "<<search<<" is found at "<<ans<<" index of the array."<<endl;
    }
	return 0;
}