const s = read_line();
let arr = JSON.parse(s);
let l = 0, r = arr.length - 1, minN = arr[0], maxN, flag = 0;
for(let i = 1; i < arr.length; i++)
{
    if(arr[i] < minN)
    {
        minN = arr[i];
        flag = i;
    }
}
if(flag == arr.length - 1)
{
    console.log("0");
}
else{
    maxN = 0;
    for(let i = flag + 1; i < arr.length; i++)
    {
        if(arr[i] > maxN)   maxN = arr[i];
    }
    console.log(maxN - minN);
}

