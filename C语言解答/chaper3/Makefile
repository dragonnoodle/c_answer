#!/usr/bin/bash

TARGET = $(notdir $(CURDIR)) 
# $(wildcard src/*.c) ：获取src/ 目录下的所有.c文件。wildcard:Make函数
SOURCES = $(wildcard *.c)
HEADERS = $(wildcard *.h)
# 静态模式规则。OBJS下的所有.c 替换成 .o文件
OBJS = $(SOURCES:%.c=%.o)	





.PHONY:clean all install

all:$(TARGET) 
	@echo builded target:$^
	@echo 
$(TARGET): $(OBJS) 
	@echo 
	@echo Linking $@ from $^...
	gcc -o $@ $^ 
	@echo Link finished

$(OBJS): %.o:%.c $(HEADERS)
	@echo
	@echo Compiling $@ from $<...
	gcc -c -o $@ $<
	@echo Compile finished

clean:
	@echo Removing generated files...
	@ -rm $(OBJS) $(TARGET)  *.o *.d *.exe