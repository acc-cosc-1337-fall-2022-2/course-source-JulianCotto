//cpp
#include "tic_tac_toe.h"
#include <iostream>


using
    std::count,
    std::cout;

bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(string first_player)
{
    if (first_player == "X" || first_player == "O")
    {
        player = first_player;
    }
    else
    {
        cout << "Invalid Entry. Defaulting Player 1 to 'X'\n";
        first_player = "X";
        player = first_player;
    }

    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::display_board() const
{

    for(int i = 0; i < pegs.size(); i++)
    {
        cout << pegs[i];
        if(i == 2 || i == 5 || i == 8)
        {
            cout << '\n';
        }
        else
        {
            cout << "|";
        }
    }
    cout << '\n';
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    bool isover;
    if(std::count(pegs.begin(), pegs.end(), " "))
    {
        isover = false;
    }
    else
    {
        isover = true;
    }
    return isover;
}

void TicTacToe::clear_board()
{
    for(auto & peg : pegs)
    {
        peg = " ";
    }
}

bool TicTacToe::check_column_win()
{
    bool truth;

    if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        truth = true;
    }
    else if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        truth = true;
    }
    else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        truth = true;
    }
    else if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        truth = true;
    }
    else if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        truth = true;
    }
    else if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        truth = true;
    }
    else
        truth = false;

    return truth;
}

bool TicTacToe::check_row_win()
{
    bool truth;

    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        truth = true;
    }
    else if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        truth = true;
    }
    else if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        truth = true;
    }
    else if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        truth = true;
    }
    else if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        truth = true;
    }
    else if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        truth = true;
    }
    else
        truth = false;

    return truth;
}

bool TicTacToe::check_diagonal_win()
{
    bool truth;

    if(pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ")
    {
        truth = true;
    }
    else if(pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ")
    {
        truth = true;
    }
    else
    {
        truth = false;
    }

    return truth;
}

void TicTacToe::set_winner()
{
    if(TicTacToe::get_player() == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}


//////////////////EXTRA FUNCTIONS//////////////////////////

void display_board_instructions()
{
    cout << "\nValid Board Positions->|\n";
    cout << "1|2|3 <---------------<|\n";
    cout << "4|5|6\n7|8|9\n";
}

