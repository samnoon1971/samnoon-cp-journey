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


function isHill(position, a){
    let n = a.length;
    if(position - 1 >= 0 && position + 1 < n &&
    a[position - 1] < a[position] && a[position + 1] < a[position])
        return true;
    return false;
}
function  isValley(position, a){
    let n = a.length;
    if(position - 1 >= 0 && position + 1 < n &&
        a[position - 1] > a[position] && a[position + 1] > a[position])
        return true;
    return false;
}

function main(){
    let t = +readLine();
    while(t--){
        let n = +readLine();
        let a = [];
        a = readLine().split(' ').map(Number);
        let cnt = 0;
        let b = [];
        for(let i=0; i<n; i++) {
            b[i] = 0;
        }
        for(let i=1; i<n-1; i++){
            if(isHill(i, a) || isValley(i, a)){
                b[i] = 1;
                cnt++;
            }
        }
        let ans = cnt;
        for(let i=1; i<n-1; i++){
            let temp = a[i];
            a[i] = a[i - 1];
            let val = cnt - b[i] - b[i - 1] - b[i + 1] + isHill(i - 1, a) + isHill(i, a) + isHill(i + 1, a)
            + isValley(i - 1, a) + isValley(i, a) + isValley(i + 1, a);
            ans = Math.min(ans, val);
            a[i] = a[i + 1];
            val = cnt - b[i] - b[i - 1] - b[i + 1] + isHill(i - 1, a) + isHill(i, a) + isHill(i + 1, a)
                + isValley(i - 1, a) + isValley(i, a) + isValley(i + 1, a);
            ans = Math.min(ans, val);
            a[i] = temp;
        }
        console.log(ans);
    }
}