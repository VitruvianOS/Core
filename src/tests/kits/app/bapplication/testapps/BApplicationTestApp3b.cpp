// BApplicationTestApp3b.cpp

#include <stdio.h>

#include <Application.h>

int
main()
{
	status_t error = B_OK;
	BApplication app("image/gif", &error);
	printf("error: %lx\n", error);
	printf("InitCheck(): %lx\n", app.InitCheck());
	return 0;
}

