// 引入 fs 模块
const fs = require('fs');

// 调用方法读取文件 readFile 接收两个参数：文件路径，箭头函数，
// 箭头函数的两个参数：err出错则返回错误信息，失败则返回none，data是读到的数据，为buffer
fs.readFile('./projects/ES/Promise/为学.md',(err,data) => {
    // 如果失败，则抛出错误
    if(err){
        throw err;
    }
    // 如果没有出错，则输出内容
    // data是buffer
    console.log(data);
    console.log(data.toString());
})

// Promise 封装异步操作，读取文件也是一个异步的操作
const p = new Promise(function(resolve,reject){
    fs.readFile('./projects/ES/Promise/为学.md',(err,data) => {
        if(err){
            reject(err);
        }
        else{
            resolve(data);
        }
    })
})

// 通过then方法来处理成功和失败的结果
p.then(function(value){
    console.log(value.toString());
},function(reason){
    console.error("读取文件失败！");
})