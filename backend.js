function Converto(decimal,binaire,hexaddecimal){
    this.decimal=decimal;
    this.binaire=binaire;
    this.hexaddecimal=hexaddecimal;
}
const number=[];

for(var i=0;i<16;i++){
    number =new Converto(
        i,
        i.toString(2),
        i.toString(16).toUpperCase()
    );
}
console.table(number);