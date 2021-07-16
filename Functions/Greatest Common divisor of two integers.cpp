int gcd(int i, int j){
  if(i==0)
    return j;
  if(j==0)
    return i;
  if(i==j)
    return i;
  if(i>j)
    return gcd(i-j,j);
  return gcd(i,j-i);
}
