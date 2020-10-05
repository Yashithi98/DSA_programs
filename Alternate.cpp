
//Name: P Satwik Chowdary

//github ID: satwik-chowdary


#include <iostream>
#include <bits/stdc++.h> 
#include<algorithm>
#include <vector>
#include <map>
#define ll long long

using namespace std;




// Time Complexity of this program in O(n) if the given array is sorted or it is O(nlogn)



int main(int argc, char const *argv[])
{
       
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    //Taking the inputs array.

    sort(a,a+n); // In case the array is not sorted.
    
    // Creating a new array to store the values,

    ll b[n];

    // Using two pointer method to store the elements alternatively
    ll i=0;
    ll j=n-1;
    ll k=0;

    bool flag=false;
    while(k<n){
        if(!flag){
            b[k]=a[j];
            j--;
            k++;
            flag=true;
        }
        else{
            b[k]=a[i];
            i++;
            k++;
            flag=false;
        }
        
    }

    //Printing the elements of array b.

    for(ll i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    return 0;
}
