let inputString = '';
let currentLine = 0;
process.stdin.on('data', (data) => {
    inputString += data;
})
process.stdin.on('end', function (){
    inputString = inputString
        .trim()
        .split('\n')
        .map((str) => str.trim());
    main();
})
function readLine(){
    return inputString[currentLine++];
}

let mps = new Set();


function  rec(a){
    let sum = 0, mx = -3e18, mn = 3e18;
    for(let i=0; i<a.length; i++){
        sum += a[i];
        mx = Math.max(a[i], mx);
        mn = Math.min(a[i], mn);
    }
    mps.add(sum);
    if(mx == mn) return;
    let left = [], right = [];
    let cutoff = (mx + mn) >> 1;
    for(let i=0; i<a.length; i++){
        if(a[i] <= cutoff){
            left.push(a[i]);
        }
        else{
            right.push(a[i]);
        }
    }
    if(left.length){
        rec(left);
    }
    if(right.length){
        rec(right);
    }
}
function main(){
    let t = +readLine();
    while(t--){
        let [n, m] = readLine().split(' ').map(Number);
        let a = readLine().split(' ').map(Number);
        mps.clear();
        rec(a);
        while(m--){
            let x = +readLine();
            if(mps.has(x)){
                console.log("Yes");
            }
            else{
                console.log("No");
            }
        }



    }
}