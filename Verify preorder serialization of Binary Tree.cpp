class Solution {
public:
    bool isValidSerialization(string preorder) {
        int a = 1;
        int n = preorder.size();
        int i = 0;
        preorder += ',';
        while(i<n) {
            string res ="";
            while(preorder[i]!=',') {
                res += preorder[i];
                i++;
            }
            a--;
            if(a<0) return false;
            if(res!="#") a += 2;
            i++;
        }
        return a == 0;
    }
};
