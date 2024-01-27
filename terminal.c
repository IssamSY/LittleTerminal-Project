#include<stdio.h>
#include<string.h>
// Defining some constants
#define MAX_NAME_LENGHT 30
#define MAX_CONTENT_LENGHT 100
#define MAX_FILES_LENGHT 20
#define MAX_DIRECTORIES_LENGHT 20

struct File {
	char name[MAX_NAME_LENGHT];
	char content[MAX_CONTENT_LENGHT];
};

struct Directory {
	char name[MAX_NAME_LENGHT];
	struct File files[MAX_FILES_LENGHT];
	int files_number;
};

struct MegaDirectory {
	char name[MAX_NAME_LENGHT];
	struct Directory directories[MAX_DIRECTORIES_LENGHT];
};

int main() {
	// Creating files using `struct File`
	struct File systemf;
	strcpy(systemf.name, "systemf.txt");
	strcpy(systemf.content, "The System F version 1.2.2");

	struct File user_info;
	strcpy(user_info.name, "user_info.txt");
	strcpy(user_info.content, "The username: _____");

	// Creating `sysbin` directory using `struct Directory`
	struct Directory sysbin;
	snprintf(sysbin.name, sizeof(sysbin.name), "sysbin");

	// Adding `systemf.txt` file to `sysbin` directory in position 0
	strcpy(sysbin.files[0].name, systemf.name);
	strcpy(sysbin.files[0].content, systemf.content);

	// Creating `user` directory using `struct Directory`
	struct Directory user;
	snprintf(user.name, sizeof(user.name), "user");

	//Adding `user_info.txt` to `user` directory in position 0
	strcpy(user.files[0].name, user_info.name);
	strcpy(user.files[0].content, user_info.content); 
 }
