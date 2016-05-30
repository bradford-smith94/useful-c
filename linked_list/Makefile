# Bradford Smith
# Makefile for linked_list
# 05/29/2016
################################################################################

LIB= liblinked_list.a
SRC= appendNode.c createNode.c insertNode.c Makefile popNode.c prependNode.c \
	 removeNode.c
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
	ar -rc $(LIBPATH)/$(LIB) $(OBJ)
	ranlib $(LIBPATH)/$(LIB)

debug: fclean
debug: CPPFLAGS+= $(DBFLGS)
debug: all

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(LIBPATH)/$(LIB)

re: fclean all
