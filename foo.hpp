#pragma once

#include "Human.hpp"
#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > v1;
    for (std::list< Human >::reverse_iterator p = people.rbegin(); p != people.rend(); ++p) {
        p->birthday();

        if (p->isMonster()) {
            v1.push_back('n');
        }
        else {
            v1.push_back('y');
        }
    }

    return v1;
}
