#include "func.h"
#include <iostream>

using   std::tolower,
        std::cout,
        std::cin;

//add include statements

double get_gc_content(const string& dna)
{
    double counter = 0;
    double gcContent;
    int divisor = dna.length();

    for(char i : dna)
    {
        if(i == 'g' || i == 'c')
        {
            counter++;
        }
    }

    gcContent = counter / divisor;

    return gcContent;
}

string get_dna_complement(string dna)
{
    for(char & i : dna)
    {
        if (i == 'c')
        {
            i = 'g';
        }
        else if (i == 'g')
        {
            i = 'c';
        }
        else if (i == 'a')
        {
            i = 't';
        }
        else if (i == 't')
        {
            i = 'a';
        }
    }
    return dna;
}

//

string get_reverse_string(string dna)
{
    string reverse_of_dna = dna;

    for (int i= 0; i < dna.length(); i++)
    {
        if (dna[i] == 'a' || dna[i] == 'A' || dna[i] == 't' || dna[i] == 'T' || dna[i] == 'g' || dna[i] == 'G' || dna[i] == 'c' || dna[i] == 'C')
        {
            dna[i] = reverse_of_dna[(dna.length()-1) - i];
        }
    }
return dna;
}

//add function code here

string to_lower(string dna)
{
    for(char & i : dna)
    {
        if (i == 'A')
        {
            i = 'a';
        }
        if (i == 'C')
        {
            i = 'c';
        }
        if (i == 'G')
        {
            i = 'g';
        }
        if (i == 'T')
        {
            i = 't';
        }
    }

    return dna;
}

string to_upper(string dna)
{
    for(char & i : dna)
    {
        if (i == 'a')
        {
            i = 'A';
        }
        if (i == 'c')
        {
            i = 'C';
        }
        if (i == 'g')
        {
            i = 'G';
        }
        if (i == 't')
        {
            i = 'T';
        }
    }

    return dna;
}

void menu()
{
    int i,
        selx;

    cout << "1- Get GC Content\n";
    cout << "2- Get DNA Complement\n";
    cout << "3- Exit\n";
    cin >> i;
    cout << '\n';

    switch(i)
    {
        case 1:
            exe_get_gc_content();
            cout << "Would you like to run another function?\n1-Yes\n2-No\n";
            cin >> selx;
            cout << '\n';
            if(selx == 1)
            {
                menu();
            }
            else
            {
                break;
            }

        case 2:
            exe_get_dna_complement();
            cout << "Would you like to run another function?\n1-Yes\n0-No\n\n";
            cin >> selx;
            cout << '\n';
            if(selx == 1)
            {
                menu();
            }
            else
            {
                break;
            }
    }
}
void exe_get_gc_content()
{
    string  dna,
            dnalow;

    cout << "Enter DNA String to calculate its \"GC Content\"\n";
    cin >> dna;
    dnalow = to_lower(dna);
    cout << "\nGC Content of DNA String \"" << to_upper(dna) << "\": " << get_gc_content(dnalow) << "\n\n";
}

void exe_get_dna_complement()
{
    string  dna,
            dnarev,
            dnalow,
            dnaupr,
            dnacom;

    cout << "Enter DNA String to calculate its \"DNA Complement\"\n";
    cin >> dna;
    dnarev = get_reverse_string(dna);
    dnalow = to_lower(dnarev);
    dnacom = get_dna_complement(dnalow);
    dnaupr = to_upper(dnacom);
    cout << "DNA Complement of DNA String \"" << to_upper(dna) << "\": " << dnaupr << "\n\n";
}
