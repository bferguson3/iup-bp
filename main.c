#include <stdlib.h>
#include <stdio.h>
#include <iup.h>

#if WINDOWS
#include <Windows.h>
#endif

#define true 1
#define false 0
#define RELEASE false 

int main(int argc, char **argv)
{
  #if RELEASE
  #if WINDOWS
  ShowWindow(GetConsoleWindow(), SW_HIDE);
  #endif
  #endif //release
  IupOpen(&argc, &argv);
  printf("Hey me");
  IupMessage("Hello World 1", "Hello world from IUP.");
  
  IupClose();
  return EXIT_SUCCESS;
}