#!/usr/bin/env python

from ctypes import *

kernel = CDLL("./kernel.so")

n = 1024
b = create_string_buffer(n)
if kernel.get_data("test.txt", b, n):
    print(b.value)
else:
    print("kernel failed")
