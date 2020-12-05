@echo off

call tree-sitter generate
if %ERRORLEVEL% == 0 goto :next
echo "Errors encountered during execution.  Exited with status: %errorlevel%"
goto :endofscript

:next
tree-sitter parse examples/test2.odin

:endofscript
echo "Script complete"
