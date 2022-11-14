#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i;
    cout<<"Enter the n value: ";
    cin>>n;

    cout<<"Enter the array value: "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<endl;
    cout<<"The array values are: "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    
    cout<<endl;
    int min;
    min = a[0];
    for(i=1;i<n;i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    cout<< "The minium value in array is: "<<min;
}