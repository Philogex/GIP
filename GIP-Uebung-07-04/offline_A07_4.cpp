#include <iostream>

struct Person
{
    std::string nachname, vorname;
    int alter;
    char geschlecht;
};

int pow(int base, int exponent)
{
    int output_int = 1;
    if (exponent == 0)
        return 1;
    for (uint16_t i = 0; i < exponent; i++)
    {
        output_int *= base;
    }
    return output_int;
}

int readAge(std::string age_str)
{
    int output_int = 0;
    int zero = int('0');
    int cur_int = 0;
    for (uint16_t i = 0; i < age_str.length(); i++)
    {
        cur_int = int(age_str.at(age_str.length() - 1 - i)) - zero;
        output_int += cur_int * pow(10, i);
    }
    return output_int;
}

void filter(Person *personen, int amount)
{
    bool age_select;
    char gender_select;
    uint16_t sum = 0;
    std::cout << "Ihre Auswahl:\n1 - Weibliche Erwachsene\n2 - Maennliche Erwachsene\n3 - Weibliche Kinder\n4 - Maennliche Kinder\n? ";
    switch (std::cin.get())
    {
    case '1':
        age_select = true;
        gender_select = 'w';
        break;
    case '2':
        age_select = true;
        gender_select = 'm';
        break;
    case '3':
        age_select = false;
        gender_select = 'w';
        break;
    case '4':
        age_select = false;
        gender_select = 'm';
        break;
    default:
        return;
    }

    for (uint16_t i = 0; i < amount; i++)
    {
        if ((personen[i].alter >= 18) == age_select && personen[i].geschlecht == gender_select)
        {
            sum++;
            std::cout << personen[i].nachname << ", " << personen[i].vorname << ", " << personen[i].geschlecht << ", " << personen[i].alter << std::endl;
        }
    }
    std::cout << "Summe: " << sum << std::endl;
}

int main()
{
    Person personen[100] = {
        {"Musterfrau1", "Petra1", 18, 'w'},
        {"Mustermann1", "Klaus1", 18, 'm'},
        {"Mustermaedchen1", "Lisa1", 1, 'w'},
        {"Musterjunge1", "Jan1", 1, 'm'},
        {"Musterfrau2", "Petra2", 19, 'w'},
        {"Mustermann2", "Klaus2", 19, 'm'},
        {"Mustermaedchen2", "Lisa2", 2, 'w'},
        {"Musterjunge2", "Jan2", 2, 'm'},
        {"Musterfrau3", "Petra3", 20, 'w'},
        {"Mustermann3", "Klaus3", 20, 'm'},
        {"Mustermaedchen3", "Lisa3", 3, 'w'},
        {"Musterjunge3", "Jan3", 3, 'm'},
        {"Musterfrau4", "Petra4", 21, 'w'},
        {"Mustermann4", "Klaus4", 21, 'm'},
        {"Mustermaedchen4", "Lisa4", 4, 'w'},
        {"Musterjunge4", "Jan4", 4, 'm'},
        {"Musterfrau5", "Petra5", 22, 'w'},
        {"Mustermann5", "Klaus5", 22, 'm'},
        {"Mustermaedchen5", "Lisa5", 5, 'w'},
        {"Musterjunge5", "Jan5", 5, 'm'},
        {"Musterfrau6", "Petra6", 23, 'w'},
        {"Mustermann6", "Klaus6", 23, 'm'},
        {"Mustermaedchen6", "Lisa6", 6, 'w'},
        {"Musterjunge6", "Jan6", 6, 'm'},
        {"Musterfrau7", "Petra7", 24, 'w'},
        {"Mustermann7", "Klaus7", 24, 'm'},
        {"Mustermaedchen7", "Lisa7", 7, 'w'},
        {"Musterjunge7", "Jan7", 7, 'm'},
        {"Musterfrau8", "Petra8", 25, 'w'},
        {"Mustermann8", "Klaus8", 25, 'm'},
        {"Mustermaedchen8", "Lisa8", 8, 'w'},
        {"Musterjunge8", "Jan8", 8, 'm'}};
    int anzahl_personen = 32;

    for (uint16_t i = anzahl_personen - 1; i < 100; i++)
    {
        std::cout << "Eine weitere Person eingeben (j/n)? ";
        if (std::cin.get() == 'j')
        {
            std::cin.clear();
            std::cin.ignore();
            Person new_person;
            personen[i] = new_person;
            std::string buffer_string = "";
            std::cout << "Bitte den Nachnamen der " << ++anzahl_personen << ". Person eingeben: ? ";
            getline(std::cin, personen[i].nachname, '\n');
            std::cout << "Bitte den Vornamen der " << anzahl_personen << ". Person eingeben: ? ";
            getline(std::cin, personen[i].vorname, '\n');
            std::cout << "Bitte das Alter der " << anzahl_personen << ". Person eingeben: ? ";
            getline(std::cin, buffer_string, '\n');
            personen[i].alter = readAge(buffer_string);
            std::cout << "Bitte das Geschlecht der " << anzahl_personen << ". Person eingeben: ? ";
            personen[i].geschlecht = std::cin.get();
            std::cin.clear();
            std::cin.ignore();
        }
        else
        {
            std::cin.clear();
            std::cin.ignore();
            break;
        }
    }

    filter(personen, anzahl_personen);

    system("pause");
    return 0;
}