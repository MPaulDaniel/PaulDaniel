#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool login(char* username, char* password) {

}

bool requestAccess(int resourceId, int accessLevel) {
   
}
int main() {
    char username[20];
    char password[20];
    int resourceId, accessLevel;

 
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (login(username, password)) {
        printf("Login successful!\n");

      
        printf("Enter resource ID: ");
        scanf("%d", &resourceId);
        printf("Enter access level: ");
        scanf("%d", &accessLevel);

        if (requestAccess(resourceId, accessLevel)) {
            printf("Access granted to resource %d\n", resourceId);
        } else {
            printf("Access denied\n");
        }
    } else {
        printf("Login failed\n");
    }

    return 0;
}
