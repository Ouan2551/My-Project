#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string txt[2] = {""};
    for (int i = 0; i < 2; i++)
    {
        cin >> txt[i];
    }
    int size_1 = txt[0].size(), size_2 = txt[1].size();
    int size[2] = {size_1, size_2}; vector <string> all_consonant;

    //add all consonant
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < size[i]; i++)
        {
            // all_consonant.push_back(txt[2][j]);
        }
    }
    
    //output
    cout << size[0] << " " << size[1] << endl;

    return 0;
}