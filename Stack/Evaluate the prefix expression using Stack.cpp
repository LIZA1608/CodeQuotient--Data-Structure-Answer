int evalPrefix(char* exp)
{
	int i,op1,op2;
  	int len = strlen(exp);
	for ( i = len-1; i>=0 ; i--)
    {
      char c = exp[i];
      if (isdigit(c))
        push(c-'0');
      else
      {
        op1 = pop();
        op2 = pop();
        switch(c)
        {
          case '+': push(op1 + op2); break;
          case '-': push(op1 - op2); break;
          case '*': push(op1 * op2); break;
          case '/': push(op1 / op2); break;
          case '^':push(pow(op1,op2)); break;
        }
      }
    }
 	return pop();
}
