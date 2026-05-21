class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         vector<int> checked(nums.size(),0);
    sort(nums.begin(), nums.end());
    vector<vector<int>> arr;
    for(int i =0;i<nums.size();i++){
        int count=0;
        if(checked[i]!=1){
            checked[i]=1;
            for(int j=i;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                    checked[j]=1;
                }else{
                    break;
                }
            }
        vector<int> new_arr={nums[i],count};
        arr.push_back(new_arr);
        }
    }
    sort(arr.begin(),arr.end(),[](vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    });
    vector<int> value;
        for(int i =0 ;i<k;i++){
            value.push_back(arr[i][0]);
        }
    return value;
    }
};
