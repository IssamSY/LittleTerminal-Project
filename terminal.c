/*
 * terminal.c
 * 
 * Copyright 2024 Issam
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include<stdio.h>
#include<string.h>
#include "SysFile.h"
#define MAX_PROMPT_LIMIT

// function to handle prompts
char* prompt(char* dir) {
    while (1 < 5) {
        char prompt[MAX_PROMPT_LIMIT];
        char* keywords = "-pit"; // keywords to trigger some actions.
    
        printf("%s ~> ", dir);
        fgets(prompt, sizeof(prompt), stdin); // Reads the entire prompt without removing any other words.
        prompt[strcspn(prompt, "\n")] = '\0'; // Sets the last character '\n' to '\0'.
        
        if(prompt == "exit") {
            break;
        }
    
        char *printPtr = strstr(prompt, keywords); // Looking up if the keywords exists. This is a pointer BTW.
        if(printPtr != NULL) {
            printf("%s\n", prompt);
        }
    }
}


int main() {
	struct File system_txt = createFile("system.txt", "This is a basic file system!!!");
	struct File userLog_txt = createFile("userLog.txt", "Last log in ; XX/XX/XXXX at XX:XX:XX");
	struct File update_txt = createFile("update.txt", "V88820.555");

	struct Directory sysbin = createDirectory("sysbin", system_txt, 1);
	struct Directory user = createDirectory("user", userLog_txt, 1);
	
 }
