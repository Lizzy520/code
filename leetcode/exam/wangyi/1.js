var arr=[1,2,3,4,66];
for(var i=0;i<arr.length;i++)
{

    arr[i] = function()
    {
        console.log(i)
    }

}
arr[3]();