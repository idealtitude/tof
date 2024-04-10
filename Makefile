CXX       := clang++
CXXFLAGS  := -std=c++20 -g -O0 -W -Wall -Werror -Wextra -Wshadow \
			-Wno-sign-compare -Wconversion -Wno-unused-function \
			-Wpedantic -pedantic -pedantic-errors
LDFLAGS   := -pthread

BINNAME   := tof-0.0.1
BINDIR    := bin
SRCDIR    := src
OBJDIR    := build
SRCS       = $(wildcard $(SRCDIR)/*.cpp)
OBJS       = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

BIN       := $(BINDIR)/$(BINNAME)

ifdef out
	BIN=$(BINDIR)/$(out)
endif

.PHONY: all release clean cleanall

all:$(BIN)

release: CXXFLAGS=-std=c++20 -Wall -O2 -DNDEBUG
release: clean
release: $(BIN)

$(BIN): $(OBJS) $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@ $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $@

clean:
	$(RM) -r $(OBJDIR)

cleanall:
	$(RM) -r $(OBJDIR)
	$(RM) -r $(BINDIR)/*
