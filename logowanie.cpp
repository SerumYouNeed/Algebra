#include <iostream>
#include <string>
#include <vector>


    vector <string> users;
    vector <string> passwords;

    cout << "1. Log in: " << endl;
    cout << "2. Create new profile: " << endl;

    int log_new;
    cin >> log_new;

    switch (log_new)
    {
        case 1:
        case 2: log();

    }

    string log()
    {
        cout << "Please, enter user name: " << endl;
        getline( cin, user_1, '\n' );
        cout << "Please, enter password: " << endl;
        getline( cin, haslo_1, '\n' );

        return user_1, haslo_1;
    }

    string user_1;
    string haslo_1;

    getline( cin, user_1, '\n' );
    if (!user_1)


    if( user_1=='mysz' && haslo_1=='psik' )
        std::cout << "Gramy!" << std::endl;
    else
        std::cout << "Brak dostêpu" << std::endl;
    return 0;
}
