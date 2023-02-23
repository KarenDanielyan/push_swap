#!/bin/bash

echo -n "Enter Input Numbers: "
read args

instruction_count=$(./push_swap $args | wc -l)
test_ok=$(./push_swap $args | ./checker_Mac $args)

echo "Number of instructions: $instruction_count
Is sorted?: $test_ok"