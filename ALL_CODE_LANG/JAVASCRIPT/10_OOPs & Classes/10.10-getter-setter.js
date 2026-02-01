class User {
    constructor(email, password){
        this.email = email;                         //this.xyz
        this.password = password                    //this.pqr
    }
// attribute name of constructor & getter-setter name must be same i.e. this.xyz ->get xyz() or set xyz() 
    get email(){
        return this._email.toUpperCase()
    }
    set email(value){
        this._email = value
    }

    get password(){
        return `${this.password_}hitesh`
    }

    set password(value){
        this._password = value
    }
}

const hitesh = new User("h@hitesh.ai.com", "abc")
console.log(hitesh);
