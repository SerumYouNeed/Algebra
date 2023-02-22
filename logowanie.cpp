#include <iostream>

using namespace std;

class logManager
{
public:
    logManager()
    {
        haveAccess = 0;
    }

    void login()
    {
        cout << "Please, log in...\nUsername: ";
        cin >> userNameTry;

        if (userNameTry == userName)
        {
            cout << "Password:";
            cin >> passwordTry;

            if (passwordTry == userPassword)
            {
                cout << "Welcome " << userName;
            }
        }
    }

private:
    string userPassword = "psik";
    string userName = "mysz";
    string passwordTry;
    string userNameTry;
    bool haveAccess;

};
