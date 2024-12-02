package tree_sitter_git_merge_conflict_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_git_merge_conflict "github.com/pv-hernandez/tree-sitter-git-merge-conflicts.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_git_merge_conflict.Language())
	if language == nil {
		t.Errorf("Error loading GitMergeConflict grammar")
	}
}
