#include <stdio.h>

int main()
{
    int listValues[] = {0, 2, 4, 6, 8, 9, 10, 12, 62, 70, 71, 87, 90, 95, 98, 100};
    const size_t listLength = (sizeof(listValues) / sizeof(listValues[0]));
    int target = 0;
    int firstOfList = 0, endOfList, middleOfList;

    endOfList = listLength - 1;
    middleOfList = (firstOfList + endOfList) / 2;

    do
    {
        if (listValues[middleOfList] < target)
        {
            firstOfList = middleOfList + 1;
        }
        else if (listValues[middleOfList] == target)
        {
            printf("What did you looking for is in the %dth block!\n", middleOfList+1);
            return 0;
        }
        else
        {
            endOfList = middleOfList - 1;
        }

        middleOfList = (firstOfList + endOfList) / 2;
    } while (firstOfList <= endOfList);

    if (firstOfList > endOfList)
    {
        printf("Error 404!\n");
    }

    return 0;
}