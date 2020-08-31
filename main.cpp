#include <iostream>
#include <vector>

//////////////////////////////////
// 0 1 1 2 3 5 8 13 21 34 55 89 //
//////////////////////////////////

int numbersFibonacci(unsigned int a);

int main()
{
    unsigned int index = 7;
    std::cout << numbersFibonacci(index) << std::endl;
    return 0;
}

int numbersFibonacci(unsigned int index)
{
    std::vector<unsigned int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    switch(index)
    {
        case 0 : return 0;
        case 1 : return v.at(0);
        case 2 : return v.at(1);
        case 3 : return v.at(2);
        default:
        for(unsigned int i = 3; i < index; i++)
        {
            unsigned int left = v.at(i - 2);
            unsigned int right = v.at(i - 1);
            v.push_back(left + right);
        }
    }
    return v.at(v.size() - 1);
}
