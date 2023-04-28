#include <iostream>
#include <cmath>
using namespace std;

class company {
private:
	int count;
	int* arr;
public:
	company(int num) {
		arr = new int[num + 1];
		count = 0;
	}

	void insert(int index, int value) {
		arr[index] = value;
	}

	void swap(int a, int b) {
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
		count++;
	}

	int leftchild(int a) {
		return 2 * a;
	}

	int rightchild(int a) {
		return 2 * a + 1;
	}

	int getMax() {
		return arr[1];
	}

	int promote(int hstop, int vacant, int h, int max_size) {
		int vacstop;
		if (h <= hstop) {
			vacstop = vacant;
		}
		else if (arr[leftchild(vacant)] <= arr[rightchild(vacant)] && rightchild(vacant) <= max_size) {
			swap(vacant, 2 * vacant + 1);
			vacstop = promote(hstop, 2 * vacant + 1, h - 1, max_size);
		}
		else {
			swap(vacant, 2 * vacant);
			vacstop = promote(hstop, 2 * vacant, h - 1, max_size);
		}
		return vacstop;
	}

	void bubbleUpHeap( int root, int k, int vacant) {
		if (vacant == root) {
			arr[vacant] = k;
		}
		else {
			int parent = vacant / 2;
			if (k <= arr[parent]) {
				arr[vacant] = k;
			}
			else {
				swap(vacant, parent);
				bubbleUpHeap( root, k, parent);
			}
		}
	}

	void fixHeapFast(int k, int vacant, int h, int max_size) {
		if (h <= 1) {
			if (h == 0) {
				return;
			}
			else {
				if (leftchild(vacant) > max_size) {
					return;
				}
				if (arr[leftchild(vacant)] > k) {
					swap( vacant, leftchild(vacant));
				}
				if (rightchild(vacant) <= max_size && arr[rightchild(vacant)] > arr[vacant]) {
					swap( vacant, rightchild(vacant));
				}
			}
		}
		else {
			int hstop = h / 2;
			int vacstop = promote(hstop, vacant, h, max_size);
			int vacparent = vacstop / 2;
			if (arr[vacparent] <= k) {
				arr[vacstop] = arr[vacparent];
				bubbleUpHeap(vacant, k, vacparent);
			}
			else {
				fixHeapFast(k, vacstop, hstop, max_size);
			}
		}
		return;
	}

	void constructHeap(int root, int max_size) {
		int h, k;
		if (leftchild(root) <= max_size) {
			constructHeap( leftchild(root), max_size);
			constructHeap( rightchild(root), max_size);
			k = arr[root];
			h = log2(max_size) - log2(root);
			fixHeapFast(k, root, h, max_size);
		}
	}

	void printHeap(int size) {
		for (int i = 1; i <= size; i++) {
			cout << arr[i] << "\n";
		}
		//cout << "\n";
	}

	void deleteMax(int size) {
		arr[1] = arr[size];
		int h = log2(size - 1);
		fixHeapFast(arr[1], 1, h, size - 1);
	}

	void heapsort(int size) {
		count = 0;
		for (int i = size; i >= 1; i--) {
			int curMax = getMax();
			count++;
			deleteMax(i);
			arr[i] = curMax;
		}
		count--;
		//cout << count << "\n";
	}
};



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int times, num, value;
	//cin >> times;
	//for (int i = 0; i < times; i++) {
		cin >> num;
		company organization(num);
		for (int j = 1; j <= num; j++) {
			cin >> value;
			organization.insert(j, value);
		}
		organization.constructHeap(1, num);
		//organization.printHeap(num);
		organization.heapsort(num);
		organization.printHeap(num);
	//}
}