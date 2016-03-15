#include "String.h"

int main(int argc, char *argv[])
{
    stu::String str1;
    stu::String str2;

    str1 = str2;

    str1.dump();
    str2.dump();

    return 0;
}
