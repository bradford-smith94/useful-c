# Bradford Smith
# Makefile for ubits
# 05/29/2016
################################################################################

LIB= ubits.a
SRC= str2vect.c free_vect.c
OBJ=$(SRC:.c=.o)
CC=gcc
RM=rm -f
INCLPATH=../include
LIBPATH=../lib
LDLIBS=
LDFLAGS+=
# implicit compiling rules:
# C complied with: `$(CC) -c $(CPPFLAGS) $(CFLAGS)`
CFLAGS+= -I$(INCLPATH)
CPPFLAGS+= -pedantic-errors -Wall
CXXFLAGS+=
DBFLGS= -g -DDEBUG

all: $(OBJ)
	mkdir -p $(LIBPATH)
	ar -rc $(LIBPATH)/$(LIB)
	ranlib $(LIBPATH)/$(LIB)

debug: fclean
debug: CPPFLAGS+= $(DBFLGS)
debug: all

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(LIBPATH)/$(LIB)

re: fclean all
