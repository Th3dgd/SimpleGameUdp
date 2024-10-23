CXX = g++
CXXFLAGS = -Iinclude -lsfml-graphics -lsfml-window -lsfml-system
SRCDIR = src
BINDIR = bin
TARGET = $(BINDIR)/sgu
INCLUDE = include

SRC = $(wildcard $(SRCDIR)/**/*.cpp)
NODYNAMIC = $(SRCDIR)/main.cpp
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(BINDIR)/%.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(NODYNAMIC) -o $@ $^ $(CXXFLAGS)

$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@) # Crear directorio si no existe
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(BINDIR)/*.o $(TARGET)

.PHONY: all clean

run: $(TARGET)
	@echo "Running..."
	cd $(BINDIR) && ./sgu && cd ..