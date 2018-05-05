#executable names for flexibility
EXE := LinkedListDemo
#TEST := Test

#compiler variable
CC := g++

#directory variables
BINDIR := bin
BUILDDIR := build
INCLUDEDIR := include
LIBDIR := lib
SRCDIR := src
#TESTDIR := test

#extension variables
SRCEXT := cc
OBJEXT := o

#files
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.$(OBJEXT)))
#OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

INCLUDES := -I $(INCLUDEDIR)

#libraries
LIB := -L $(LIBDIR)

#flags
CCFLAGS := -std=c++11 -g -Wall

#targets
TARGET := $(BINDIR)/$(EXE)
#TESTTARGET $(BINDIR)/$(TEST)

$(TARGET): $(OBJECTS)
	@echo "Linking..."
	@echo "$(CC) $^ -o $(TARGET) $(LIB)"; $(CC) $^ -o $(TARGET) $(LIB)

$(BUILDDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT)
	mkdir -p $(BUILDDIR)
	@echo "$(CC) $(CCFLAGS) $(INCLUDES) -c -o $@ $<"; $(CC) $(CCFLAGS) $(INCLUDES) -c -o $@ $<

clean:
	@echo "Cleaning...";
	@echo "rm -r $(BUILDDIR) $(TARGET)"; rm -r $(BUILDDIR) $(TARGET)

.PHONY: clean
