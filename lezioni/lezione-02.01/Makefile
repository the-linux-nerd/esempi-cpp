# nome dell'eseguibile da generare
TARGET = main

# lista dei file sorgente
SRCS = main.cpp

# flag del compilatore
CXXFLAGS = -g

# nome del compilatore
CXX = g++

# regola di default
all: $(TARGET)

# regola per generare l'eseguibile
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)
