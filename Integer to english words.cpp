class Solution {
public:
    string below10[10] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string below20[10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string below100[10] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string helper(int n) {
        string res = "";
        if(n < 10) res = below10[n];
        else if(n < 20) res = below20[n - 10];
        else if(n < 100) res = below100[n / 10] + (n % 10 == 0 ? "" : " ") + helper(n % 10);
        else if(n < 1000) res = below10[n / 100] + " Hundred" + (n % 100 == 0 ? "" : " ") + helper(n % 100);
        else if(n < 1000000) res = helper(n / 1000) + " Thousand" + (n % 1000 == 0 ? "" : " ") + helper(n % 1000);
        else if(n < 1000000000) res = helper(n / 1000000) + " Million" + (n % 1000000 == 0 ? "" : " ") + helper(n % 1000000);
        else res = helper(n / 1000000000) + " Billion" + (n % 1000000000 == 0 ? "" : " ") + helper(n % 1000000000);
        return res;
    }

    string numberToWords(int n) {
        if(n == 0) return "Zero";
        return helper(n);
    }
};
