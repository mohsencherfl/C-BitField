#include <stdio.h>
#include <stdlib.h>

typedef struct Permissions {
    unsigned char read : 1;
    unsigned char write : 1;
    unsigned char execute : 1;
}Permissions;

void printPermissions(Permissions p)
{
    printf("Permissions: \n");
    printf("Read: %u \n", p.read);
    printf("Write: %u \n", p.write);
    printf("Execute: %u \n", p.execute);
}

void changePermissions(Permissions* p, unsigned int newRead, unsigned int newWrite, unsigned int newExecute)
{
    p->read = newRead;
    p->write = newWrite;
    p->execute = newExecute;
}

int main()
{
    // Create a permission to a file with "Read" and "Write" permissions but no "Execute" permission
    Permissions file1 = {1,1,0};
    printPermissions(file1);
    printf("=========== \n");
    changePermissions(&file1, 1, 0, 1);
    printPermissions(file1);

    return 0;
}
