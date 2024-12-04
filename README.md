tree-sitter-git-merge-conflict
==============================

This is a tree sitter parser for highlighting git merge conflicts in code.

The grammar was designed to keep the end-of-line characters with the separator
markers, so nvim_set_extmark can be used with hl_eol=true.  It also supports
nested conflict blocks.
