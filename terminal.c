#include<stdio.h>
#include<string.h>
#include "SysFile.h"

int main() {
	struct File system_txt = createFile("system.txt", "This is a basic file system!!!");
	struct File userLog_txt = createFile("userLog.txt", "Last log in ; XX/XX/XXXX at XX:XX:XX");
	struct File update_txt = createFile("update.txt", "V88820.555");

	struct Directory sysbin = createDirectory("sysbin", system_txt, 1);
	
 }
