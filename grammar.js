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
        alias($._conflict_no_eol, $.conflict),
        alias($._comment_no_eol, $.comment),
        seq($._body, alias($._conflict_no_eol, $.conflict)),
        seq($._body, alias($._comment_no_eol, $.comment)),
      ),
    ),
    _body:       $ => repeat1(
      choice(
        alias($._eol, $.comment),
        $.conflict,
        $.comment,
      ),
    ),
    _conflict_no_end: $ => seq(
      $.start,
      optional(field("ours", alias($._body, $.hunk))),
      optional(
        seq(
          $.common_sep,
          optional(field("common", alias($._body, $.hunk)))
        ),
      ),
      $.sep,
      optional(field("theirs", alias($._body, $.hunk))),
    ),
    conflict:    $ => seq($._conflict_no_end, $.end),
    _conflict_no_eol: $ => seq($._conflict_no_end, alias($._end_no_eol, $.end)),
    start:       $ => prec.right(1, seq(/[<]{7,}[ \t]*/, optional(field("label", alias(/[^\r\n]+/, $.label))), $._eol)),
    common_sep:  $ => prec.right(1, seq(/[|]{7,}[ \t]*/, optional(field("label", alias(/[^\r\n]+/, $.label))), $._eol)),
    sep:         $ => prec.right(1, seq(/[=]{7,}[ \t]*/, optional(field("label", alias(/[^\r\n]+/, $.label))), $._eol)),
    end:         $ => prec.right(1, seq($._end_no_eol, $._eol)),
    _end_no_eol: $ => prec.right(1, seq(/[>]{7,}[ \t]*/, optional(field("label", alias(/[^\r\n]+/, $.label))))),
    comment:     $ => seq($._comment_no_eol, $._eol),
    _comment_no_eol: $ => repeat1($._char),
    _char:       $ => /[^\r\n]/,
    _eol:        $ => /[\r\n]|\r\n/,
  }
});
