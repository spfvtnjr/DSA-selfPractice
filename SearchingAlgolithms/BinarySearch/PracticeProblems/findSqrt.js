function findSqrt(num){
    let found=false;
    let i=1;
    while(!found){
        if(i*i==num) {
            found = true;
            return i.toFixed(3);
        }
        else if(i*i>num){
             var res=diveMore(num, i-1, i);
             found=true;
             return res.toFixed(3);
        }
        i++;
    }
}

function diveMore(num,prev,next){
    let mid=(prev+next)/2;
    let product=mid*mid;
    if(product==num || (Math.abs(product-num)<0.00001)){
        return mid;
    }
    else if(product<num){
        return diveMore(num,mid,next);
    }
    else{
        return diveMore(num,prev,mid);
    }
}