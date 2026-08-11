class Solution {
public:

    string encode(vector<string>& strs) {
        string str="";
        int n=strs.size();
        for(int i=0;i<n;i++){
            str+=(strs[i]+"~");
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> str;
        int n=s.size();
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=i;j<n;j++){
                if(s[j]=='~'){i=j;break;}
                else temp+=s[j];
            }
            str.push_back(temp);
            
        }
        return str;
    }
};
