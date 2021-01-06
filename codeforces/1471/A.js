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
function main(){
    let t = +readLine();
    while(t--){
        const [n, x] = readLine().split(' ').map(Number);
        let [mn, mx] = [0, 0];
        readLine()
            .split(' ')
            .forEach((val) => {
                val = Number(val);
                mn += val;
                mx += Math.ceil(val / x);
            });
        mn = Math.ceil(mn / x);
        console.log(`${mn} ${mx}`);
    }
}