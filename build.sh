#!/bin/sh

if tree-sitter generate; then
  tree-sitter test
fi
