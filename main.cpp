
#include <Structures/LinkedList.h>

int main()
{
    LinkedList* list = new LinkedList;
    list->append(1);
    list->append(2);
    list->append(0);
    list->append(4);
    list->append(5);
    list->printList();
    return 0;
}