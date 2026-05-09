
    else if (units<=200){
        bill=100*5+(units-100)*7;
    }
    else{
        bill=100*5+100*7+(units-200)*10;
    }
    return bill;
}
console.log(calculateBill(250));