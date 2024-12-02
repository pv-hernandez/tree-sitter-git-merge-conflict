from unittest import TestCase

import tree_sitter, tree_sitter_git_merge_conflict


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_git_merge_conflict.language())
        except Exception:
            self.fail("Error loading GitMergeConflict grammar")
