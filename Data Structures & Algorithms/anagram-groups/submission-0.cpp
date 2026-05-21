class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> value;
    vector<int> visited(strs.size(),0);
    for(int i=0;i<strs.size();i++){
        vector<string> data;
        data.push_back(strs[i]);
        if(visited[i]==1)
            continue;
        string data_First = strs[i];
        visited[i]=1;
        for(int j=i+1;j<strs.size();j++){
            string data_Second = strs[j];
            sort(data_First.begin(),data_First.end());
            sort(data_Second.begin(),data_Second.end());
            if(data_First == data_Second){
                data.push_back(strs[j]);
                visited[j]=1;
            }
            visited[i]=1;
        }
        value.push_back(data);
    }
    if(value.size()>0)
        return value;
    else
        return {{}};
    }
};
