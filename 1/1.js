function createPerson(name,age,job){
    let o = new Object();
    o.name = name;
    o.age = age;
    o.job = job;
    o.sayNme = function(){
        console.log(`${this.name} is ${this.age} years old, and ${this.name}\`s job is ${this.job}.`);
    }
    return o;
};

let person1 = createPerson("Lizzy",18,"teacher");
person1.sayNme();