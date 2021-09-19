const s = read_line();
let arr = [];
arr.push(s[0]);
for(let i = 1; i < s.length; i += 1)
{
    let len = arr.length;
    if(s[i] !== arr[len - 1])
    {
        arr.push(s[i]);
    }

}
for(let i = 0; i < arr.length; i++)
{
    console.log(arr[i]);
}

