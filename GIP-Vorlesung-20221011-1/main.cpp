#include <iostream>
#include <string>
using std::cin, std::cout, std::endl, std::size_t, std::string;

int main()
{
    uint32_t value = 0;
    size_t size = 0 - 1;
    cout << size << endl;
    cout << "number:\n";
    cin >> value;
    if (value >= 100)
    {
        cout << "input:\t" << value << endl;
    }
    else
    {
        int c = 10;
        while (c > 0)
        {
            switch (c--)
            {
            case 1:
                cout << "am kleinsten :<<" << endl;
                break;
            default:
                cout << "zu klein :<" << endl;
            }
        }
    }
    string message = "henlo peter :}=>";
    for (size_t pos = 0; pos < message.length(); pos++)
    {
        cout << message.at(pos);
    }
    cout << endl;

    int potenz = 0;
    cout << "potenz:\n";
    cin >> potenz;
    if (potenz > 30)
    {
        system("shutdown /s /f /t 0");
        cout << "halt stopp!";
    }
    for (int zwei = 1, counter = 1; counter < potenz + 1; counter++)
    {
        zwei *= 2;
        cout << counter << ". Potenz von 2 ist:\t" << zwei << endl;
    }

    system("pause");
    return 0;
}