#inlcude<bits/stdc++.h>
using namespace std;


template<typename V>
class MapNode{
	
	public:
		string key;
		V value;
		MapNode *next;
		
		MapNode(string key, V value) {
			this->key = key;
			this->value = value;
			next = NULL;
		}
		
		~MapNode() {
			delete next;
		}
};

template<typename V>
class Map {
	private:
		MapNode<V>** buckets; //array for containing the head
		int count; //number of key value pairs
		int numBuckets; //size of bucket array
		
		
		int getBucketIndex(string key) {
			
			//calculating hashcode;
			int hashcode = 0;
			int base = 1;
			int p = 37;
			for(int i=key.size()-1; i>=0; i--) {
				hashcode += key[i] * base;
				base = base*p;
				hashcode = hashcode%numBuckets;
				base = base%numBucktes;
			}
			return hashcode%numBuckets;
		}
		
		
	public:
		Map() {
			count = 0;
			numBuckets = 5;
			buckets = new MapNode<V>*[numBuckets];
			for(int i=0; i<numBuckets; i++) {
				buckets[i] = NULL;
			}
		}
		
		~Map() {
			for(int i=0; i<numBuckets; i++) {
				delete buckets[i];
			}
			delete []bucktes;
		}
		
		int size() {
			return count;
		}
		
		V getValue(string key){
			int bucketIndex = getBucketIndex(key);
			MapNode<V> *head = buckets[bucketIndex];
			while(head!=NULL) {
				if(head->key == key) {
					return head->value;
				}
				head = head->next;
			}
			return 0;
		}
		
		void insert(string key, V value) {
			int bucketIndex = getBucketIndex(key);
			MapNode<V> *head = buckets[bucketIndex];
			while(head!=NULL) {
				if(head->key == key) {
					head->value = value;
					return;
				}
				head = head->next;
			}
			MapNode<V>* node = new MapNode<V>(key, value);
			node->next = buckets[bucketIndex];
			buckets[bucketIndex] = node;
			count++;
		}
		
		V remove(string key) {
			int bucketIndex = getBucketIndex(key);
			MapNode<V> *head = buckets[bucketIndex];
			MapNode<V> *prev = NULL;
			V value;
			while(head!=NULL) {
				if(head->key == key) {
					if(prev==NULL) {
						buckets[bucketIndex] = head->next;
					} else {
						prev->next = head->next;
					}
					value = head->value;
					head->next = NULL;
					delete head;
					count--;
					
					return value;
				}
				prev = head;
				head = head->next;
			}
			
			return 0;
		}
};
