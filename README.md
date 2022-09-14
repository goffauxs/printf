# ft_printf
printf remake

## About
Simple remake of printf from `stdio.h` with only the following conversion specifiers:
```
c, s, d, i, u, x, X, p, n, %
```
and the following flags:
```
0, -, (space), +
```
along with width and precision, the end result being the following format specifier:
```
%[flags][width][.precision]specifier
```

## Installation
Compiles into an archive (.a) using `make bonus`
