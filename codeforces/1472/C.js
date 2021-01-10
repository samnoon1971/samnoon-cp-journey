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
        let a = readLine().split(' ').map(Number);
        let dp = [], ans = 0;
        for(let i=0; i<n; i++){
            dp[i] = 0;
        }
        for(let i=n-1; i>=0; i--){
            dp[i] = a[i];
            let j = i + a[i];
            if(j < n){
                dp[i] += dp[j];
            }
            ans = Math.max(ans, dp[i]);
        }
        console.log(ans);
    }
}