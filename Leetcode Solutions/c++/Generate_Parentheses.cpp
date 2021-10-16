class Solution {
public:
         void help(int mx, int open, int close, string curr, vector<string>& res){
            if(open == mx && close == mx){
                res.push_back(curr);
                return;
            }
            if(open < mx){
                curr += '(';
                help(mx, open + 1, close, curr, res);
                curr.pop_back();
            }
            if(close < open){
                curr += ')';
                help(mx, open, close + 1, curr, res);
                curr.pop_back();
            }
            return;
         }
  vector<string> generateParenthesis(int A) {
            vector<string> res;
            help(A, 0, 0, "", res);
            return res;
        }
};
