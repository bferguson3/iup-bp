@ECHO OFF 
set PATH=C:\Program Files\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin;%PATH%
gcc main.c -Ireqs\iup\include -Lreqs\iup -liup -o out/app
out\app.exe
@echo on 