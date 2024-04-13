for (let i = 0; i <= 20; i += 2) {
    let currentI = i / 10;
    for (let j = 1; j <= 3; j++) {
        if (currentI === 0 || currentI === 1 || currentI === 2) {
            console.log("I=" + Math.floor(currentI) + " J=" + (Math.floor(currentI) + j));
        } else {
            console.log("I=" + currentI + " J=" + (currentI + j));
        }
    }
}