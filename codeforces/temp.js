var arr=[4,5,4,3,22,1];
var n = arr.length;
function bubblesort(arr){
    for(let i=0;i<n;i++){
        for(let j=i;j<n;j++){
            if(arr[i]>arr[j+1]){
                let temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr; 
}
console.log(bubblesort(arr));
