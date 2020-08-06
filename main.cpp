#include <bits/stdc++.h>

int main()
{
    int h = 0, t = 0;
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
        std::cout  << "You won!" << std::endl;
    }
    else
    {
        std::cout << "You lost." << std::endl;
    }

    return 0;
}
