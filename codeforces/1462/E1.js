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

function comb(a, b){
    return Math.floor(b * Math.floor(a * (a - 1) / 2));
}

function main(){
    let t = +readLine();
    while(t--){
        let n = +readLine();
        let ar = readLine().split(' ').map(Number);
        let mps = new Map();
        let sum = 0;
        for(let i=0; i<n; i++){
            let cur = mps.get(ar[i])
            if(cur == undefined)
                mps.set(ar[i], 1);
            else
                mps.set(ar[i], cur + 1);
        }
        for(let i=0; i<n; i++){
            let x = mps.get(i + 1), y = mps.get(i + 2), z = mps.get(i + 3);
            let a = 0, b = 0, c = 0;
            if(x != undefined)
                a = x;
            if(y != undefined)
                b = y;
            if(z != undefined)
                c = z;
            let aaa = Math.floor((a * (a - 1) * (a - 2)) / 6);
            let ab = comb(a, b);
            let ba = comb(b, a);
            let ac = comb(a, c);
            let ca = comb(c, a);
            let abc = a * b * c;
            sum += aaa + ab + ba + ac + ca + abc;
        }
        console.log(sum);
    }
}