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
        let n = +readLine();
        if(n === 1){
            console.log('9');
        }
        else {
            let num = 9;
            let ans = "98";
            for(let i=2; i<n; i++){
                ans += num;
                num++;
                num %= 10;
            }
            console.log(ans);

        }
    }
}