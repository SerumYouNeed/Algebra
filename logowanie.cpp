#include <iostream>
#include <string>
#include <vector>

int main()
{
    vector string<users>;
    vector string<passwords>;

    string user_1;
    string haslo_1;
    std::cout << "ENTER YOUR NAME: " << std::endl;
    getline( cin, user_1, '\n' );
    if (!user_1)
    std::cout
    std::cout << "ENTER PASSWORD: " << std::endl;
    getline( cin, haslo_1, '\n' );
    if( user_1=='mysz' && haslo_1=='psik' )
        std::cout << "Gramy!" << std::endl;
    else
        std::cout << "Brak dostêpu" << std::endl;
    return 0;
}
