#!/bin/sh

file=$1

if tree-sitter generate; then
  tree-sitter parse examples/test2.odin
fi
exit


if tree-sitter generate; then
  if [ -z "$file" ]; then
    tree-sitter test
  else
    tree-sitter parse $file
  fi
fi



