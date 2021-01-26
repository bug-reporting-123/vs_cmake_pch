#include "foobar.h"

void foo(std::string_view const h)
{
    std::cout << h << "\n";

    std::vector<int> a;
    a.push_back(3);

    std::cout << a[0] << "\n";
}