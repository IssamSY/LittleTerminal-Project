/*
	Created by S. Issam
*/
#ifndef SYSFILE_H
#define SYSFILE_H

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

// Function Prototype
struct File createFile(char* name, char* content) {
	struct File newFile;
	strcpy(newFile.name, name);
	strcpy(newFile.content, content);
	return newFile;
};

struct Directory createDirectory(char* name, struct File files, int files_number) {
	struct Directory newDirectory;
	strcpy(newDirectory.name, name);
	memcpy(&newDirectory.files, files, sizeof(struct Directory));
	newDirectory.files_number = files_number;
	return newDirectory;
}; 

struct MegaDirectory createMegaDirectory(char* name, struct Directory directories) {
	struct MegaDirectory newMegaDirectory;
	strcpy(newMegaDirectory.name, name);
	memcpy(&newMegaDirectory.directories, directories, sizeof(struct MegaDirectory));
};

#endif
