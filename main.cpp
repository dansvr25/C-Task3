#include <iostream>
using namespace std;

int main() {

    char inputArray[6] = {'a', 'b', 'c', 'd', '\0'};
    char outputArray[sizeof inputArray];

    char *p = &inputArray[3];
    char *p2 = &outputArray[0];

    for (int i = 0; i < sizeof(outputArray) - 1; i++) {
        *(p2++) = *(p--);
    }

    outputArray[sizeof outputArray - 1] = '\0';

    cout << inputArray << endl;
    cout << outputArray << endl;

    return 0;
}