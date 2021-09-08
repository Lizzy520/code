// 1. 引入 fs 模块
const fs = require("fs");

// 读取 为学
function readWeiXue(){
    return new Promise((resolve,reject) => {
        fs.readFile("./为学.md",(err,data) => {
            if(err){
                reject(err)
            }
            resolve(data);
        })
    })
}

// 读取 插秧诗
function readChaYangShi(){
    return new Promise((resolve,reject) => {
        fs.readFile("./插秧诗.md",(err,data) => {
            if(err){
                reject(err)
            }
            resolve(data);
        })
    })
}

// 读取 观书有感
function readGuanShu(){
    return new Promise((resolve,reject) => {
        fs.readFile("./观书有感.md",(err,data) => {
            if(err){
                reject(err)
            }
            resolve(data);
        })
    })
}

// 声明一个 async 函数
async function main(){
    let weixue = await readWeiXue();
    let chayang = await readChaYangShi();
    let guanshu = await readGuanShu();

    console.log(weixue.toString());
    console.log(chayang.toString());
    console.log(guanshu.toString());
}

main();