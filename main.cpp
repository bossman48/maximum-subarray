

#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int findMaximum(vector<int>& nums)
{
    int max =nums.at(0);
    for (int i =0; i < nums.size(); i++)
    {
        if (nums.at(i) > max)
            max = nums.at(i);
    }
    return max;
}

//kadane's algotihms
int maxSubArray(vector<int>& nums) {
    int total=0;
    int max= findMaximum(nums);
    for(int i=0;i<nums.size();i++){
        total+=nums.at(i);
        if(total>max){
            max=total;
        }
        if(total<0){
            total=0;
        }

    }
    return max;
}


 // Driver code
 int main()
 {
    vector<int> nums2{-2,1,-3,4,-1,2,1,-5,4};
    cout<<endl<<maxSubArray(nums2);

     vector<int> nums3{5,4,-1,7,8};
     cout<<endl<<maxSubArray(nums3);

     vector<int> nums4{1};
     cout<<endl<<maxSubArray(nums4);


    return 0;
 }


