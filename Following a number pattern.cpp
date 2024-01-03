class Solution{   
public:
    string printMinNumberForPattern(string s){
        // code here 
        string str = "";
        int n = s.length();
        int num = 1;
        stack<int>st;
        for(int i=0;i<=n;i++) {
            st.push(i+1);
            if(i == n || s[i] == 'I') {
                while(!st.empty()){
                    str += to_string(st.top());
                    st.pop();
                }
            }
        }
        return str;
    }
};
