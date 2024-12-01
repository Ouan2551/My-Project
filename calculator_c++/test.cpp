#include <bits/stdc++.h>
using namespace std;
string input_operator(void)
{
    string op; cin >> op; return op;
}
string check_operator(string op)
{
    int ck = 0;
    string a[7] = {"+","-","*","/","^","sqr"};
    for (int i = 0; i < 7; i++)
    {
        if (op != a[i])
        {
            ck++;
        }
    }
    if (ck == 7)
    {
        cout << "please correct operator" << endl;
        op = input_operator();
        op = check_operator(op);
    }
    return op;
}
int main()
{
    //+ - * / % ^ square-root
    double n1 = 0 ,n2 = 0; string op = "";
    cin >> n1; cin >> n2;
    op = input_operator();
    op = check_operator(op);
    
    //output
    cout << "Result : " << (op == "+" ? n1 + n2 : op == "-" ? n1 - n2 : op == "*" ? n1 * n2 :
    op == "/" ? n1/n2 : op == "^" ? pow(n1,n2) : op == "sqr" ? pow(n1, 1/n2);
    return 0;
}
// cout << "Result: " << (op == '+' ? a + b : op == '-' ? a - b : op == '*' ? a * b : op == '/' ? a / b : 0) << endl;