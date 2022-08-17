make > output.txt
gcc main_all_test.c libftprintf.a
./a.out
gcc main_breaker.c libftprintf.a
./a.out
make fclean >> output.txt
