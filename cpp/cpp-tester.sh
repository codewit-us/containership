#!/bin/bash

cxxtestgen --error-printer -o codewit-run.cpp codewit_test.h
g++ --std=c++20 -o codewit-run codewit-run.cpp
./codewit-run