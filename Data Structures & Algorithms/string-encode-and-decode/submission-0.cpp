#include <string>

using std::stoi;

class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for (string str: strs)
        {
            result += std::to_string(str.size());
            result += '#';
            for (char ch: str)
                result += ch;
        }
        return result;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> result;
        while (i < s.size())
        {
            string temp = "";
            string stepper = "";
            int j = i;
            while (s[j] != '#')
            {
                stepper += s[j];
                j++;
            }
            int char_count = stoi(stepper);
            for (int k = j + 1; k < j + 1 + char_count; k++)
            {
                temp += s[k];
            }
            result.push_back(temp);
            i = j + 1 + char_count;
        }
        return result;
    }
};
