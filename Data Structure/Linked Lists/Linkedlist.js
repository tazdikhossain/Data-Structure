class Node{
    constructor(value){
        this.value =value;
        this.next = null;
    }
}

class Linkedlist{
    constructor(){
        this.head = null;
        this.size = 0;
    }

    add(value){
        let node = new Node(value);
        let current;
        current = this.head;
        current.next = node;
    }


}

