string encode(string s)
{     
  //Your code here 
  string str = "";
  int n = s.length();
  for(int i=0;i<n;i++) {
      int c = 1;
      while(s[i] == s[i+1]) {
          c++;
          i++;
      }
      str += s[i] + to_string(c);
  }
  return str;
}  
