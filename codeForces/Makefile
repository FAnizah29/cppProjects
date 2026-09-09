CXX = g++
CXXFLAGS = -Wall -std=c++17

SRCS = $(wildcard *.cpp)
TARGETS = $(SRCS:.cpp=.exe)

all: $(TARGETS)

run-%: %.exe
	./$<

%.exe: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: all
