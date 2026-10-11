class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
      vector<int>left;
      vector<int>right;
      vector<int>ans;
      int prefix=1;
      int suffix=1;
      for(int i=0;i<arr.size();i++){
        left.push_back(prefix);
        prefix=prefix*arr[i];
      }
      for(int j=arr.size()-1;j>=0;j--){
        right.push_back(suffix);
        suffix=suffix*arr[j];
      }
      reverse(right.begin(),right.end());
      for(int k=0;k<arr.size();k++){
        ans.push_back(left[k]*right[k]);
      }
      return ans;
    }
};
