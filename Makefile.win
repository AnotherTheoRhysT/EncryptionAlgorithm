# Project: EncryptionAlgorithm
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = src/decryption.o src/encryption.o src/inputValidition.o src/main.o src/outputTxt.o
LINKOBJ  = src/decryption.o src/encryption.o src/inputValidition.o src/main.o src/outputTxt.o
LIBS     = -L"D:/Programs/Dev-Cpp/MinGW64/lib" -L"D:/Programs/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
INCS     = -I"D:/Programs/Dev-Cpp/MinGW64/include" -I"D:/Programs/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"D:/Programs/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include"
CXXINCS  = -I"D:/Programs/Dev-Cpp/MinGW64/include" -I"D:/Programs/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"D:/Programs/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"D:/Programs/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++"
BIN      = EncryptionAlgorithm.exe
CXXFLAGS = $(CXXINCS) -std=c11
CFLAGS   = $(INCS) -std=c11
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LINKOBJ) -o $(BIN) $(LIBS)

src/decryption.o: src/decryption.c
	$(CC) -c src/decryption.c -o src/decryption.o $(CFLAGS)

src/encryption.o: src/encryption.c
	$(CC) -c src/encryption.c -o src/encryption.o $(CFLAGS)

src/inputValidition.o: src/inputValidition.c
	$(CC) -c src/inputValidition.c -o src/inputValidition.o $(CFLAGS)

src/main.o: src/main.c
	$(CC) -c src/main.c -o src/main.o $(CFLAGS)

src/outputTxt.o: src/outputTxt.c
	$(CC) -c src/outputTxt.c -o src/outputTxt.o $(CFLAGS)
