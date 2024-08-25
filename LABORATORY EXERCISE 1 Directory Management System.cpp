#include <iostream>
#include <cstdio>     // For system("pause")
#include <cstdlib>    // For system("cls")
#include <direct.h>   // For _mkdir and _chdir
#include <windows.h>  // For _getcwd and to handle directories

void displayFiles() {
    system("dir");  // Lists files in the current directory (Windows command)
    system("pause");  // Waits for user to press a key
}

void createDirectory() {
    std::cout << "\nEnter the Directory name: ";
    std::string dirName;
    std::cin >> dirName;

    if (_mkdir(dirName.c_str()) == 0) {
        std::cout << "\nDirectory '" << dirName << "' Successfully Created\n";
    } else {
        std::cout << "\nFailed to Create Directory '" << dirName << "'\n";
    }

    system("pause");
}

