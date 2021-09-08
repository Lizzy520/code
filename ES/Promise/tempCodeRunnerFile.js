readFile("./projects/ES/Promise/为学.md",(err,data1) => {
    fs.readFile("./projects/ES/Promise/插秧诗.md",(err,data2) => {
        fs.readFile("./projects/ES/Promise/观书有感.md",(err,data3) => {
//             let res = `${data1}
// ${data2}
// ${data3}`;
            let res = data1 + "\r\n" + data2 + "\r\n" +data3;
            console.log(res);
        });
    });
});