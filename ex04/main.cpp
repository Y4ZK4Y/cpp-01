#include "parseInput.h"
#include "sed.h"

int main(int argc, char **argv)
{
    Input input = parseInput(argc, argv);
    if (input.filename == "") {
        return 1;
    }
    goodOlSed(input.filename, input.s1, input.s2);

    // goodOlSed("test1.txt", "hello", "world");
    // goodOlSed("test2.txt", "", "empty");
    // goodOlSed("test3.txt", "test", "");
    // goodOlSed("test4.txt", "long string", "short");
    // goodOlSed("test5.txt", "a", "b");

    return (0);
}
