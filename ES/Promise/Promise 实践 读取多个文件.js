console.log("----普通方式----");

// 引入 fs 模块
const fs = require("fs");

// fs.readFile("./projects/ES/Promise/为学.md",(err,data1) => {
//     fs.readFile("./projects/ES/Promise/插秧诗.md",(err,data2) => {
//         fs.readFile("./projects/ES/Promise/观书有感.md",(err,data3) => {
// //             let res = `${data1}
// // ${data2}
// // ${data3}`;
//             let res = data1 + "\r\n" + data2 + "\r\n" +data3;
//             console.log(res);
//         });
//     });
// });

console.log("\n----Promise方式----");
const p = new Promise((resolve,reject) => {
    fs.readFile("./projects/ES/Promise/为学.md",(err,data) =>{
        resolve(data);
    });
});

p.then(value => {
    // 此时的value是第一个文件
    // console.log(value.toString());
    // 我们可以返回一个promise对象，将第二个文件放进去
    return new Promise((resolve,reject) => {
        fs.readFile("./projects/ES/Promise/插秧诗.md",(err,data) => {
            // 此时的data里面是第二个文件
            // 但我们不能继续return第三个，不然又会陷入回调地狱
            // 可以选择用链式调用读取第三个
            // 我们使用成功状态传递包含第一个文件和第二个文件的数组
            resolve([value,data]);
        });
    });
}).then(value => {
    // 此时的value是上面传过来的包含一二文件的数组
    return new Promise((resolve,reject) => {
        fs.readFile("./projects/ES/Promise/观书有感.md",(err,data) =>{
            value.push(data);
            resolve(value);
        })
    })
}).then(value => {
    // 此时的value已经是包含三个文件的数组
    console.log(value.join("\r\n"));
})