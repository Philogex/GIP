#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string sudoku_print(int **input_arr)
{
    string output_str;
    for (uint16_t i = 0; i < 9; i++)
    {
        if (i == 3 || i == 6)
        {
            output_str += "=======//=======//=======\n";
        }
        for (uint16_t n = 0; n < 9; n++)
        {
            if (n == 3 || n == 6)
            {
                output_str += ";//;";
            }
            else
            {
                output_str += ";";
            }
            output_str += to_string(input_arr[i][n]);
        }
        output_str += "\n";
    }
    return output_str;
}

int **sudoku_save(string *input_arr)
{
    // das nächste mal einfach vektoren nehmen .-.
    int zero = int('0');
    uint16_t row = 0;
    uint16_t column = 1;
    // static storage duration
    static int **array = new int *[9];

    // size(), bzw. ssize() wären richtig anstatt 9, aber ich habe einen pointer wegen der funktion
    for (uint16_t i = 0; i < 9; i++)
    {
        if (i == 3 || i == 6)
            row += 1;
        array[i] = new int[9];
        for (uint16_t n = 0; n < 9; n++)
        {
            array[i][n] = int(input_arr[row].at(column)) - zero;
            // cout << array[i][n] << endl;
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
    // static int array[9][9]; kann ich nicht returnen
    return array;
}

int main()
{
    string sudoku_arr_str[11];
    cout << "Bitte geben Sie das Sudoku ein: " << endl;
    // streambuf *file = sudoku_input();

    // sudoku aus datei einlesen
    ifstream file;
    file.open("sudoku");
    for (uint16_t i = 0; i < 11; i++)
    {
        getline(file, sudoku_arr_str[i], '\n');
        cout << sudoku_arr_str[i] << endl;
    }

    // sudoku speichern in array
    int **sudoku = sudoku_save(sudoku_arr_str);

    // sudoku ausgeben
    cout << endl
         << "Das Sudoku lautet:" << endl;
    cout << sudoku_print(sudoku);

    system("pause");
    return 0;
}