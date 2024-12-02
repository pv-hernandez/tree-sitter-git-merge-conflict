import XCTest
import SwiftTreeSitter
import TreeSitterGitMergeConflict

final class TreeSitterGitMergeConflictTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_git_merge_conflict())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading GitMergeConflict grammar")
    }
}
