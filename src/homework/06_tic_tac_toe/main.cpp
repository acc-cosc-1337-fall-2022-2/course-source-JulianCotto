#include "tic_tac_toe.h"
#include <iostream>

using
    std::cout,
    std::count,
    std::stoi,
    std::cin;

int main() 
{
    TicTacToe game;

    string first_player;
    int
        position = 0,
        selx = 0;
    vector<int> pos{1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Tic Tac Toe\n";
    cout << "Player 1: Choose X or O\n";
    cin >> first_player;
    game.start_game(first_player);
    display_board_instructions();

    while(selx == 0)
    {
        do
        {
            cout << "Player \'" << game.get_player() << "\' take your turn (Choose position on board)\n";
            game.display_board();
            cin >> position;
            game.mark_board(position);
        }
        while(!game.game_over());

        game.game_over();
        game.display_board();
        if (game.get_winner() == "C")
        {
            cout << "\nThe game has ended in a tie! Settle the score and play again!\n";
        }
        else
        {
            cout << "\nPlayer " << game.get_winner() << " wins the game!\n";
        }

        cout << "\nWould you like to play again?\nPress 0: Yes\nPress 1: No\n";
        cin >> selx;
        if(selx == 0)
        {
           game.start_game(first_player);
        }
    }

    return 0;
}
