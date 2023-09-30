#!/bin/bash

# Function to create C++ source files
create_cpp_file() {
    filename="$1.cpp"
    touch "$filename"
    echo -e "#include <iostream>\n" > "$filename"
    echo -e "int main() {\n" >> "$filename"
    echo -e "    // Your C++ code for $2 goes here\n" >> "$filename"
    echo -e "    return 0;\n" >> "$filename"
    echo -e "}\n" >> "$filename"
}

# Create C++ source files for each task
create_cpp_file "ascii_table" "Create a table for ASCII code"
create_cpp_file "max_of_three" "Maximum number between three values"
create_cpp_file "right_triangle" "RIGHT angle triangle"
create_cpp_file "vowel_check" "Decide if a letter is a vowel or not"
create_cpp_file "multiplication_table" "Multiplication table"
create_cpp_file "digit_sum" "Summation of the digits of an integer entered by the user"
create_cpp_file "decimal_binary" "Conversion from decimal to binary and vice versa"

