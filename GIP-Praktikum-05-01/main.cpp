#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int sudoku_groesse = 9;
const int eingabe_groesse = 11;

void konvertiere(string input_arr[], int output_arr[][sudoku_groesse])
{
    // das nächste mal einfach vektoren nehmen .-.
    int zero = int('0');
    uint16_t row = 0;
    uint16_t column = 1;

    // size(), bzw. ssize() wären richtig anstatt 9, aber ich habe einen pointer wegen der funktion. hier kann ich auch die globale konstante nehmen
    for (uint16_t i = 0; i < sudoku_groesse; i++)
    {
        if (i == 3 || i == 6)
            row += 1;
        for (uint16_t n = 0; n < sudoku_groesse; n++)
        {
            output_arr[i][n] = int(input_arr[row].at(column)) - zero;
            // cout << output_arr[i][n] << endl;
            if (n == 2 || n == 5)
            {
                column += 4;
            }
            else
            {
                column += 2;
            }
        }
        column = 1;
        row += 1;
    }
}

bool pruefe_spalten(int sudoku[][sudoku_groesse])
{
    bool return_val = true;
    bool invalid_column[sudoku_groesse] = {false};
    uint16_t check_arr[sudoku_groesse][sudoku_groesse] = {0};
    for (uint16_t i = 0; i < sudoku_groesse; i++)
    {
        for (uint16_t n = 0; n < sudoku_groesse; n++)
        {
            check_arr[i][sudoku[n][i] - 1] += 1;
            if (check_arr[i][sudoku[n][i] - 1] > 1)
            {
                invalid_column[i] = true;
                return_val = false;
            }
        }
    }

    for (uint16_t i = 0; i < sudoku_groesse; i++)
    {
        if (invalid_column[i])
        {
            for (uint16_t n = 0; n < sudoku_groesse; n++)
            {
                if (check_arr[i][n] == 0)
                {
                    cout << "Spalte " << i << ": Zahl " << n + 1 << " kommt nicht vor." << endl;
                }
                else if (check_arr[i][n] != 1)
                {
                    cout << "Spalte " << i << ": Zahl " << n + 1 << " kommt mehrfach vor." << endl;
                }
            }
        }
    }
    return return_val;
}

bool pruefe_zeilen(int sudoku[][sudoku_groesse])
{
    bool return_val = true;
    bool invalid_line[sudoku_groesse] = {false};
    uint16_t check_arr[sudoku_groesse][sudoku_groesse] = {0};
    for (uint16_t i = 0; i < sudoku_groesse; i++)
    {
        for (uint16_t n = 0; n < sudoku_groesse; n++)
        {
            check_arr[i][sudoku[i][n] - 1] += 1;
            if (check_arr[i][sudoku[i][n] - 1] > 1)
            {
                invalid_line[i] = true;
                return_val = false;
            }
        }
    }

    for (uint16_t i = 0; i < sudoku_groesse; i++)
    {
        if (invalid_line[i])
        {
            for (uint16_t n = 0; n < sudoku_groesse; n++)
            {
                if (check_arr[i][n] == 0)
                {
                    cout << "Zeile " << i << ": Zahl " << n + 1 << " kommt nicht vor." << endl;
                }
                else if (check_arr[i][n] != 1)
                {
                    cout << "Zeile " << i << ": Zahl " << n + 1 << " kommt mehrfach vor." << endl;
                }
            }
        }
    }
    return return_val;
}

bool pruefe_bloecke(int sudoku[][sudoku_groesse])
{
    bool return_val = true;
    bool invalid_block[sudoku_groesse] = {false};
    uint16_t check_arr[sudoku_groesse][sudoku_groesse] = {0};
    uint16_t block = 0;
    for (uint16_t i = 0; i < sudoku_groesse; i++)
    {
        for (uint16_t n = 0; n < sudoku_groesse; n++)
        {
            block = (i / 3) * 3 + (n / 3);
            check_arr[block][sudoku[i][n] - 1] += 1;
            if (check_arr[block][sudoku[i][n] - 1] > 1)
            {
                invalid_block[block] = true;
                return_val = false;
            }
        }
    }

    for (uint16_t i = 0; i < sudoku_groesse; i++)
    {
        if (invalid_block[i])
        {
            for (uint16_t n = 0; n < sudoku_groesse; n++)
            {
                if (check_arr[i][n] == 0)
                {
                    cout << "Block " << i << ": Zahl " << n + 1 << " kommt nicht vor." << endl;
                }
                else if (check_arr[i][n] != 1)
                {
                    cout << "Block " << i << ": Zahl " << n + 1 << " kommt mehrfach vor." << endl;
                }
            }
        }
    }

    return return_val;
}

int main()
{
    // sudoku 1
    int sudoku1[sudoku_groesse][sudoku_groesse] = {0};
    string eingabe[eingabe_groesse];
    cout << endl
         << "Bitte geben Sie das Sudoku ein:" << endl;
    ifstream file1;
    file1.open("sudoku1");
    for (int i = 0; i < eingabe_groesse; i++)
        getline(file1, eingabe[i]);
    konvertiere(eingabe, sudoku1);
    bool ps = pruefe_spalten(sudoku1);
    bool pz = pruefe_zeilen(sudoku1);
    bool pb = pruefe_bloecke(sudoku1);
    if (ps && pz && pb)
        cout << "Das Sudoku ist gueltig." << endl;

    // sudoku 2
    int sudoku2[sudoku_groesse][sudoku_groesse] = {0};
    cout << "Bitte geben Sie das Sudoku ein:" << endl;
    ifstream file2;
    file2.open("sudoku2");
    for (int i = 0; i < eingabe_groesse; i++)
        getline(file2, eingabe[i]);
    konvertiere(eingabe, sudoku2);
    ps = pruefe_spalten(sudoku2);
    pz = pruefe_zeilen(sudoku2);
    pb = pruefe_bloecke(sudoku2);
    if (ps && pz && pb)
        cout << "Das Sudoku ist gueltig." << endl;

    system("PAUSE");
    return 0;
}