#include <bits/stdc++.h>

int main()
{
    int h = 0, t = 0;
    std::string name;
    std::cout << "Who are you?" << std::endl;
    std::cin >> name;
    std::cout << "Hello, "<< name <<"!" << std::endl;
    std::cout << "Tossing a coin..." << std::endl;
    for(int i=0; i<3; i++)
    {
        std::cout << "Round " << (i+1) << " ";
        if((double)rand()/RAND_MAX;<0.5)
        {
            std::cout << "Heads" << std::endl;
            h++;
        }
        else
        {
            std::cout << "Tails" << std::endl;
            t++;
        }
    }
    std::cout << "Heads: " << h << ", Tails: " << t << std::endl;
    if(t<h)
    {
        std::cout << name << " won!" << std::endl;
    }
    else
    {
        std::cout << name << " lost." << std::endl;
    }

    return 0;
}
