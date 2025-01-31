#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/types.h>

void getList()
{
    // scanf("%s", file_dir);
    char *file_dir;
    DIR *dirStream = NULL;
    struct dirent *dir = NULL;

    struct dirent entries[5] = {};
    file_dir = "C:\\Users\\aibel\\OneDrive\\Documents\\Code\\month2\\test";
    dirStream = opendir(file_dir);
    int i = 0;
    while (dirStream)
    {
        struct dirent *directoryEntry = readdir(dirStream);
        printf("%s", dirStream);
        if (directoryEntry != NULL)
        {
            //printf("%s\n", directoryEntry->d_name);
            entries[i] = *directoryEntry;
            i++;
        }
        else
        {
            break;
        }
    }
    closedir(dirStream);
    // printf("Repeat\n");
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%s\n", entries[i].d_name);
    // }
    
}

void getInfo(){
    char *file_dir; 
    DIR *dirStream = NULL; 
    struct dirent *dir = NULL; 
    // struct dirent entries[5] = {};
    // int i = 0;

    file_dir = "C:\\Users\\aibel\\OneDrive\\Documents\\Code\\month2\\test";
    dirStream = opendir(file_dir);

    while((dir = readdir(dirStream)) != NULL) {
        printf("%s", dir);
        if (strstr(dir->d_name, ".txt") != NULL){
            printf("%s\n", dir->d_name);
        }
    }   
    closedir(dirStream);
    
}


void main()
{
    // getList();
    getInfo();

}
