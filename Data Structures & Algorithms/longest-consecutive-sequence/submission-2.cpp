class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int maxi=1;
        int count =1;
        sort(arr.begin(),arr.end());
       if(arr.size()==0){
        return 0;
       }
       for(int i=1;i<arr.size();i++){
        if(arr[i]==arr[i-1]){
            continue;
        }
        else if(arr[i]-arr[i-1]==1){
              count++; 
        }
        else{
            count=1;
        }
         maxi=max(maxi,count); 
       }
       return maxi;
    }
};
