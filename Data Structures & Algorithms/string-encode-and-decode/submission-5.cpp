class Solution {
public:
    // (string_length)#(string)
    string encode(vector<string>& strs) {
        string ans = "";
        for(string&s : strs){
            ans += to_string(s.size());
            ans += "#";
            ans += s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        string temp = "" , temp2 = "";
        int i = 0;

        while(i < s.size()){
            while(s[i] != '#'){
                temp += s[i];
                i++;
            }

            int len = stoi(temp);
            i++;

            for(int j = 0 ; j < len ; j++){
                temp2 += s[i];
                i++;
            }

            ans.push_back(temp2);
            temp2 = "";
            temp = "";
        }
        return ans;

    }
};
