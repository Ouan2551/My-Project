#include <bits/stdc++.h>
using namespace std;
int input_index(void)
{
    int index;
    cin >> index;
    return index;
}

string output_tic_tac_toe(int index, char a[], char used)
{
    a[index - 1] = used;

    for (int i = 1; i <= 9; i = i + 3)
    {
        cout << a[i] << "|" << a[i+1] << "|" << a[i+2] << endl;
    }
    
    return 0;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    // use interface section
    cout << "TIC-TAC-TOE Game 2 player" << endl;
    cout << "number showing on screen use for location you want to place x or o" << endl;
    cout << "Example    " ;
    cout << "1  |  2  |  3" << endl;
    cout << "           4  |  5  |  6" << endl;
    cout << "           7  |  8  |  9" << endl; cout << endl;
    cout << "**************************************************************" << endl;

    // section input from user
    int index = 0; vector<int> index_used; char a[9] = {'1','2','3','4','5','6','7','8','9'};
    char used;
    for (int i = 1; i <= 9; i++)
    {
        // for user interface
        if (i % 2 == 0)
        {
            cout << "Player 1" << endl;
            used = 'x';
        }
        else
        {
            cout << "Player 2" << endl;
            used = 'o';
        }
        cout << "Select location you want to place : ";
        
        // index can not replacement
        cin >> index;
        for (int i = 0; i < 9; i++)
        {
            if (index == index_used[i])
            {
                cout << "You can not use same location" << endl;
                break;
            }
            else
            {
                index_used.push_back(index);
            }
        }
        
        cout << output_tic_tac_toe(index, a, used) << endl;
    }
    
    return 0;
}

//this version start from player 1 only