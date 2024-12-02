// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGitMergeConflict",
    products: [
        .library(name: "TreeSitterGitMergeConflict", targets: ["TreeSitterGitMergeConflict"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGitMergeConflict",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGitMergeConflictTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGitMergeConflict",
            ],
            path: "bindings/swift/TreeSitterGitMergeConflictTests"
        )
    ],
    cLanguageStandard: .c11
)
