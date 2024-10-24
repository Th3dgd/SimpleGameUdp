CXX = g++
CXXFLAGS = -Iinclude -lsfml-graphics -lsfml-window -lsfml-system -std=c++17
SRCDIR = src
BINDIR = bin
TARGET = $(BINDIR)/sgu
INCLUDE = include

SRC = $(shell find $(SRCDIR) -name "*.cpp")
OBJ = $(patsubst $(SRCDIR)/%.cpp, $(BINDIR)/%.o, $(SRC))

MAIN_OBJ = $(BINDIR)/main.o

all: $(TARGET)

$(TARGET): $(OBJ)
	@mkdir -p $(BINDIR)
	$(CXX) $(OBJ) -o $@ $(CXXFLAGS)

$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BINDIR)

.PHONY: all clean

run: $(TARGET)
	@echo "Running..."
	cd $(BINDIR) && ./sgu && cd ..
