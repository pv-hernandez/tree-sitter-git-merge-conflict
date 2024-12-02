/**
 * @file Parser for Git Merge Conflicts with support for Diff3 and nestined conflicts
 * @author Paulo Hernandez <paulovitormsh@hotmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "git_merge_conflict",

  extras: $ => [],
  rules: {
    source_file: $ => optional(
      choice(
        $._body,
        seq($._body, $.conflict),
        seq($._body, $.comment),
      ),
    ),
    _body:       $ => repeat1(
      choice(
        alias($._eol, $.comment),
        seq($.conflict, $._eol),
        seq($.comment, $._eol),
      ),
    ),
    conflict:    $ => seq(
      $.start, $._eol,
      optional(field("ours", alias($._body, $.hunk))),
      optional(seq(
        $.common_sep, $._eol,
        optional(field("common", alias($._body, $.hunk)))
      )),
      $.sep, $._eol,
      optional(field("theirs", alias($._body, $.hunk))),
      $.end,
    ),
    start:       $ => prec.right(1, seq(/[<]{7,}[ \t]*/, optional(field("label", alias(/[^\r\n]+/, $.label))))),
    common_sep:  $ => prec.right(1, seq(/[|]{7,}[ \t]*/, optional(field("label", alias(/[^\r\n]+/, $.label))))),
    sep:         $ => prec.right(1, seq(/[=]{7,}[ \t]*/, optional(field("label", alias(/[^\r\n]+/, $.label))))),
    end:         $ => prec.right(1, seq(/[>]{7,}[ \t]*/, optional(field("label", alias(/[^\r\n]+/, $.label))))),
    _eol:        $ => /[\r\n]|\r\n/,
    comment:     $ => repeat1($._char),
    _char:       $ => /[^\r\n]/,
  }
});
