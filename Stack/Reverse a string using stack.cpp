string reverseString(CQStack *stack,string s){
  string str = "";
  for(int i=s.length()-1; i>=0; i--){
    str+=s[i];
  }
  return str;
}
