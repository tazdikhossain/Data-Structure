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

    remove(vlaue){
        let current, previous, item = 0;
        current = this.head;
        previous = current;

        while(item<index)
        {
            item++;
            previous = current;
            current = current.next;
        }
        previous.next = current.next;
    }


}

let l = new Linkedlist();
l.add(1);
l.remove(10);

