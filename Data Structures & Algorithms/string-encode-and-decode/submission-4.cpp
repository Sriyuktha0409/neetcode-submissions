class Solution {
public:

    string encode(vector<string>& strs) {
        string str="";
        for(int i=0;i<strs.size();i++){
            int x = strs[i].size();
            str += to_string(x) + "#" + strs[i];
        }
        return str;
    }

    vector<string> decode(string s) {
        string s1 = "";
        vector<string> vec;
        int i=0;
        while(i<s.size()){
            int j = i;
            while(s[j] != '#') {
                j++;
            }
            int x = stoi(s.substr(i, j-i));
            s1= s.substr(j+1,x);
            vec.push_back(s1);
            i=j+x+1;
        }
        return vec;
    }
};
