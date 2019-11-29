// main.c
#define WEBVIEW_IMPLEMENTATION
#include "webview.h"

int WINAPI
WinMain(
  HINSTANCE hInt,
  HINSTANCE hPrevInst,
  LPSTR     lpCmdLine,
  int       nCmdShow)
{
  webview(
    "Minimal webview example",
	  "https://en.m.wikipedia.org/wiki/Main_Page",
    800,
    600,
    1);

  return 0;
}