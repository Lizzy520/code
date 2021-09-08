"use strict";

Object.defineProperty(exports, "__esModule", {
    value: true
});
exports.teach = teach;
// 分别暴露：
// 只要在想对外暴露的数据的声明前面使用export命令即可
var school = exports.school = "CQU";
function teach() {
    console.log("欢迎来到重庆大学");
}