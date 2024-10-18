class HashTable {
	constructor() {
		this.table = new a(5);
		this.size = 0;
	}

	_setKey(key) {
		return key % 5;
	}

	insert(value) {
		const index = this._setKey(value);
		this.table[index] = value;
		this.size++;
	}

	delete(key) {
		const index = this._setKey(key);

		if (this.table[index]) {
			this.table[index] = [];
			this.size--;
			return true;
		} else {
			return false;
		}
	}
}

const hashExample = new HashTable();
hashExample.insert(1);
hashExample.delete(12);
console.log(hashExample.table);
