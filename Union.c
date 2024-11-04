#include <stdio.h>
#include <string.h>

union Data {
    int intValue;
    float floatValue;
    char strValue[20];
};

int main() {

    union Data data;

    data.intValue = 10;
    printf("data.intValue: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("data.floatValue: %.2f\n", data.floatValue);
    
    strcpy(data.strValue, "Hello, World!");
    printf("data.strValue: %s\n", data.strValue);

    printf("After assigning string:\n");
    printf("data.intValue: %d\n", data.intValue);       
    printf("data.floatValue: %.2f\n", data.floatValue); 
    printf("data.strValue: %s\n", data.strValue);      
    return 0;
}
