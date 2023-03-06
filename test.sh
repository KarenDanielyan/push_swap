#!/bin/bash

echo -n "Enter number of arguments: "
read count
args=$(jot -r $count 0 20000000)

instruction_count=$(./push_swap $args | wc -l)
test_ok=$(./push_swap $args | ./checker $args)

echo "Number of instructions: $instruction_count
Is sorted?: $test_ok"