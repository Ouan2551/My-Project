#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //INPUT ax^2 + bx + c OUTPUT value of x
    string formula; getline(cin, formula); int m = formula.size();
    vector<char> txt;
    for (int i = 0; i < m; i++)
    {
        txt.push_back(formula[i]);
    }

    //find a
    for (int i = 0; i < m; i++)
    {
        if (txt[i] == 'x' && txt[i+1] == '^' && txt[i+2] == '2')
        {
            char a = txt[1];
            cout << "a" << endl;
        }
    }

    //find b
    for (int i = 0; i < m; i++)
    {
        if (txt[i] == 'x' && txt[i+1] != '^' && txt[i+2] != '2')
        {
            char b = txt[i-1];
            cout << "b" << endl;
        }
        
    }

    //find c
    for (int i = 0; i < m; i++)
    {
        
    }
    
    return 0;
}

//idea
//have mode select real number and complex numbers