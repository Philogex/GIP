#include <iostream>

struct w_haeufigkeit
{
    char *wort;
    unsigned int haeufigkeit;
};

unsigned int my_strlen(const char *const str);
bool empty_check(const char *const str);
int my_strcmp(const char *str1, const char *str2);
char *naechstes_wort(const char *const zeile, unsigned int &pos);
void zaehle_wort(char *wort, struct w_haeufigkeit w_haeufigkeiten[], unsigned int &w_count);

unsigned int my_strlen(const char *const ptr)
{
    int str_len = 0;
    for (uint16_t i = 0; i < 79; i++)
    {
        if (ptr[i] != 0)
        {
            str_len++;
        }
    }
    return str_len;
}

bool empty_check(const char *const str)
{
    bool check = false;
    uint16_t null_chars = 0;
    uint16_t len = my_strlen(str);
    for (uint16_t i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            null_chars++;
        }
    }
    if (null_chars == len)
    {
        check = true;
    }
    return check;
}

int my_strcmp(const char *ptr1, const char *ptr2)
{
    uint16_t len_one = my_strlen(ptr1);
    uint16_t len_two = my_strlen(ptr2);

    for (uint16_t i = 0; i < len_one; i++)
    {
        if (ptr1[i] == ptr2[i])
        {
            continue;
        }
        else if (ptr1[i] > ptr2[i])
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }

    if (len_one > len_two)
    {
        return 1;
    }
    else if (len_one < len_two)
    {
        return -1;
    }

    return 0;
}

char *naechstes_wort(const char *const zeile, unsigned int &pos)
{
    char *output_word = new char[80]{0};
    uint16_t zeile_len = my_strlen(zeile);
    bool is_word = false;
    char cur_char = 0;
    uint16_t cur_index = 0;

    for (uint16_t i = pos; i < zeile_len; i++)
    {
        cur_char = zeile[i];
        if (cur_char != ',' && cur_char != ' ' && cur_char != '.' && cur_char != 0)
        {
            is_word = true;
            output_word[cur_index++] = cur_char;
        }
        else if (is_word)
        {
            pos = i;
            return output_word;
        }
    }

    pos = zeile_len;
    return output_word;
}

void zaehle_wort(char *wort, struct w_haeufigkeit w_haeufigkeiten[], unsigned int &w_count)
{
    bool added = false;
    for (uint16_t i = 0; i < w_count; i++)
    {
        if (my_strcmp(w_haeufigkeiten[i].wort, wort) == 0)
        {
            w_haeufigkeiten[i].haeufigkeit += 1;
            added = true;
        }
    }
    if (!added)
    {
        w_haeufigkeit new_word = {wort, 1};
        w_haeufigkeiten[w_count] = new_word;
        w_count++;
    }
}

int main()
{
    // init variables
    const unsigned int eingabezeilen_max = 5;
    const unsigned int wort_max = 210;
    const unsigned int max_line_length = 80;
    char *line_arr[eingabezeilen_max]{0};
    w_haeufigkeit word_arr[wort_max];
    unsigned int pos = 0;
    unsigned int w_count = 0;

    for (uint16_t i = 0; i < eingabezeilen_max; i++)
    {
        // init vairables
        char str_buffer[max_line_length] = "";
        pos = 0;

        // read line
        std::cout << "Eingabezeile = ? ";
        std::cin.getline(str_buffer, max_line_length - 1);

        // fill array
        line_arr[i] = str_buffer;

        // check if line is empty
        if (empty_check(str_buffer))
        {
            break;
        }

        // get words and exit if eol
        while (true)
        {
            char *word = naechstes_wort(line_arr[i], pos);
            if (word[0] == 0)
            {
                break;
            }
            // zaehlt wort und fügt evtl dem array hinzu
            zaehle_wort(word, word_arr, w_count);
        }
    }

    for (unsigned int k = 0; k < w_count; k++)
        std::cout << word_arr[k].wort << ": "
                  << word_arr[k].haeufigkeit << std::endl;

    system("pause");
}