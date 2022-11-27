all:create_directories compile
.PHONY:remove


create_directories:
	mkdir -p bin


compile:
	g++ src/main.cpp -I./inc/ -o bin/main  && ./bin/main


remove:
	rm -rf bin