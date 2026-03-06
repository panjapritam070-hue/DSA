// #include<iostream>
// using namespace std;
// #include<vector>

// void merge(int arr[],int start,int mid,int end)
// {
//     vector<int>temp(end-start+1);
//     int left=start,right=mid+1,index=0;
//     while (left<=mid && right<=end)
//     {
//         if(arr[left]<=arr[right])
//         {
//             temp[index]=arr[left];
//             index++,left++;
//         }
//         else
//         {
//             temp[index]=arr[right];
//             index++,right++;
//         }

//     }

//     while (left<=mid)
//     {
//         temp[index]=arr[left];
//             index++,left++;
//     }
//     while (right<=end)
//     {
//         temp[index]=arr[right];
//             index++,right++;
//     }

//     index=0;

//     while (start<=end)
//     {
//         arr[start]=temp[index];
//         start++,index++;
//     }

// }

// void margesort(int arr[],int start,int end)
// {
//     if(start==end)
//     return;

//     int mid=start+(end-start)/2;
//     margesort(arr,start,mid);
//     margesort(arr,mid+1,end);

//     merge(arr,start,mid,end);
// }

// int main()
// {
//     int arr[]={2,1,3,4,5,8};
//     margesort(arr,0,5);

//     for (int i = 0; i<=5; i++)
//     {
//         cout<<arr[i];
//     }

// }

// #include<iostream>
// using namespace std;
// void print(int arr[],int index,int n,int sum)
// {
//     if(index==n)
//     {
//         if(sum==12)
//         cout<<"yes";
//         return;
//     }
//     print(arr,index+1,n,sum);
//     print(arr,index+1,n,sum+arr[index]);

// }
// int main(){

//     int arr[4]={3,6,4,5};
//     int index=0;
//     print(arr,index,3,0);
// }
#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <algorithm>
int main()
{
    // int arr[]={-1,0,1,2,-1,-4};
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>>ans;
    for (int i = 0; i < n; i++)
    {
        if(i>0&& nums[i]==nums[i+1])
        {
            continue;
        }
        int j=i+1,k=n-1;
        while (j<k)
        {
           int sum=nums[i]+nums[j]+nums[k];
           if(sum<0)
           {
            j++;
           }
           else if(sum>0)
           {
            k--;
           }
           else
           {
            ans.push_back({nums[i],nums[j],nums[k]});
            j++,k--;
            while (j<k&&nums[j]==nums[j-1])
            {
                j++;
            }
            
           }
           
        }
        
    }
    
}