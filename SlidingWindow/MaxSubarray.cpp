#include<iostream>
using namespace std;

int getMaxSumFromSubArray(int arr[],int n,int k){
    int sum=0;
    int i=0;
    int j=0;
    int maxSum=0;
    
    while (j<n)
    {
        sum=sum+arr[j];
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){
            maxSum=max(maxSum,sum);
            // cout<<"maxSum :"<<maxSum<<endl;
            // cout<<"sum :"<<sum<<endl;
            // cout<<"arr[i] :"<<arr[i]<<endl;
            sum=sum-arr[i];
            i++;
            j++;
        }   
    }
    return maxSum;
    
}

int main(){
    int arr[]={1, 4, 2, 10, 2, 3, 1, 0, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"size: "<<n<<endl;
    int max_sum=0;
    int k=5;
    max_sum=getMaxSumFromSubArray(arr,n,k);
    cout<<"maximum sum of sub array is :"<<max_sum<<endl;
 
    return 0;

}