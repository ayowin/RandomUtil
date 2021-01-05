
#include <iostream>
#include "RandomUtil.hpp"

int main(int argc,char** argv)
{
    int random = RandomUtil::random();
    printf("%d\n",random);

    return 0;
}