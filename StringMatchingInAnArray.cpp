class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
      int n = words.size();
      vector<string> cor;
      for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && words[j].find(words[i]) != string::npos) {
             cor.push_back(words[i]);
             break;
            }
        }
      }
      return cor;
    }
};