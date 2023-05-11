// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "DXModel",
    products: [
        .library(
            name: "DXModel",
            targets: [
                "DXModel"
            ]
        ),
    ],
//    targets: [
//        .binaryTarget(
//            name: "DXModel",
//            url: "https://nexus.in.devexperts.com/repository/dx/com/devexperts/aurora/mobile/model-lib/46/model-lib-46-ios.zip",
//            checksum: "493a33fa0c89a5c2008c5118338623678c60958167ef531a055f03f2d81ab730"
//        )
//    ],
    targets: [
        .binaryTarget(
            name: "DXModel",
            url: "https://github.com/alekseimuraveinik/DXModel/releases/download/46.0.0/model-lib-46-ios.zip",
            checksum: "493a33fa0c89a5c2008c5118338623678c60958167ef531a055f03f2d81ab730"
        )
    ]
)
