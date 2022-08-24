#!/usr/bin/python3
i = 122
while i >= 97:
    if i % 2 != 0:
        var = i - 32
    else:
        var = i
         print("{:c}".format(var), end="")
          i -= 1
