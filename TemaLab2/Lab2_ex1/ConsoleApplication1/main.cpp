#include "NumberList.h"

int main() {
    NumberList list;
    list.Init();
    list.Add(1);
    list.Add(5);
    list.Add(3);
    list.Add(7);
    list.Add(2);
    list.Sort();
    list.Print();

    return 0;
}