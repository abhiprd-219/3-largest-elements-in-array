#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
//class Solution{
 // public:
int largest(int arr[],int n) {
      int a=-1,b=-1,c=-1;
      
      for(int i=0;i<n;i++){
        if(arr[i]>a) {
          c=b;
          b=a;
          a=arr[i];
        }
        else if(arr[i]>b) {
          c=b;
          b=arr[i];
          
        }
        else if(arr[i]>c) {
          c=arr[i];
        }
      }
      return c; 
      
    }
    
  



int main()
{
  //int n; cin>>n; 
  int n=10;
  
  int arr[]={51,24,17,29,7,4,12,47,16,8};
  
    cout <<largest(arr,n);
}
