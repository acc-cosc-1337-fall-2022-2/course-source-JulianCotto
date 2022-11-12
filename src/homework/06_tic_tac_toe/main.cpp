#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using
    std::cout,
    std::count,
    std::stoi,
    std::cin;

int main() 
{
    TicTacToe game;
    TicTacToeManager manager;

    string first_player;
    int
        position = 0,
        selx = 0;
    vector<int> pos{1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Tic Tac Toe\n";
    cout << "Player 1: Choose X or O\n";
    cin >> first_player;
    game.start_game(first_player);


    while(selx == 0)
    {
        do
        {
            cout << game;
            cin >> game;
        }
        while(!game.game_over());
        game.game_over();
        cout << game;
        manager.save_game(game);

        int x, o, t;
        manager.get_winner_totals(x, o, t);
        cout << "\nX Wins: " << x << '\n';
        cout << "\nO Wins: " << o << '\n';
        cout << "\nTies: " << t << '\n';


        if (game.get_winner() == "X")
        {
            cout << "\nPlayer " << game.get_winner() << " wins the game!\n";
        }
        else if (game.get_winner() == "O")
        {
            cout << "\nPlayer " << game.get_winner() << " wins the game!\n";
        }
        else if(game.get_winner() == "C")
        {
            cout << "\nThe Game ended in a tie!";
        }

        cout << "\nWould you like to play again?\nPress 0: Yes\nPress 1: No\n";
        cin >> selx;
        if(selx == 0)
        {
           game.start_game(first_player);
        }

    }
    cout << manager;

    return 0;
}
