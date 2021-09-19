const url = readline();
const key = readline();
let len = key.length;
let flag = url.indexOf(key);
let res = "";
if(flag == -1)
{
    console.log("false");
}
else
{
    if(url[flag - 1] == "?" && url[flag + len] == "=")
    {
        let index = flag + len + 1;
        while(s[index] >= "0" && s[index] <= "9" || s[index] >= "a" && s[index] <= "z" || s[index] >= "A" && s[index] <= "Z" )
        {
            res += s[index];
        }
    }
}
console.log(res);
