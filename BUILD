package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "hello-lib",
    srcs = ["src/hello.cc"],
    hdrs = ["src/hello.h"],
)

cc_binary(
    name = "hello-world",
    srcs = ["src/main.cc"],
    deps = [":hello-lib"],
)

filegroup(
    name = "srcs",
    srcs = glob(["**"]),
)
