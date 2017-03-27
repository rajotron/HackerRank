#include <iostream>
#include <deque> 
using namespace std;
void printKMax(int arr[], int n, int k){
   //Write your code here.
    int i ,j ,max;
    deque<int> mydeque;
    while(mydeque.empty()!=1){
    mydeque.pop_front();
    }
   for(i=0;i<n-k+1;i++){
       
       max=arr[i];int l=0;
       int m=i;
       while(l<(k-1)){
           l++;
           ++i;
           if(max<arr[m])
               max=arr[m];
       }
       mydeque.push_back(max);
   }
    for(j=0;j<mydeque.size();j++){
        
    
    cout<<mydeque[j]<<" ";
    }
    cout<<endl;
    
}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}

