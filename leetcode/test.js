var a = {},b={key:'b'},c={key:'c'}
a[b] = 'b'
// a  = {[object Object]: "b"}
a[c] = 'c'
//a = {[object Object]: "c"}
console.log(a[b])
// "c",实际打印的是a["[object Object]"]