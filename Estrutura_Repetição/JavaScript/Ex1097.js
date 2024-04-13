var n = 7;

for (var i = 1; i < 10; i += 2){
    for (var j = n; j > n-3; j--){
        console.log(`I=${i} J=${j}`)
    }
    n += 2
}