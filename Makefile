CC = gcc
CFLAGS = -g -Wall

# 这就是通配符模式，意思是：
# 只要你要编译的目标叫 xxx，它就会自动去找 xxx.c，然后帮你编译
%: %.c
	$(CC) $(CFLAGS) $< -o $@
