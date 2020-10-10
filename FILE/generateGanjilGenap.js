function generateNumber(min,max,limit,callback){ 
    //var angka = callback(min,max,limit)
    let genapGanjil = callback(min,max,limit).map(item => {
        if(item % 2 == 0){
            console.log(`${item} adalah genap`)
        } else{
            console.log(`${item} adalah ganjil`)
        }
    })

}

function limitNumber(min,max,limit){
    const batas = limit
    let angka = Array.from(Array(batas)).map(item => Math.floor(Math.random() * max)+ min)
    return angka
     //console.log(angka) /uncomment this to run function limitNumber/
}


generateNumber(1,100,10,limitNumber)