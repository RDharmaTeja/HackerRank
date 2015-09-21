#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
struct node{
	node *parent = NULL,*left=NULL,*right=NULL;
	int data;
};

void searchBST(node *root, int val);

int main(){
	int n;
	node *buffer,*root,*mover;
	cin >> n;
	for(int i=0; i<n;i++){
		//buffer = new node;
		cout << i;
		if(i==0){
			root = new node;
			cin >> root -> data;
			cout << root -> data;
		}
		else{
			buffer = new node;			
			cin >> buffer -> data;
			mover = root;

		 while(!(buffer -> parent)){
		 	//cout << "gen";
			if(buffer -> data > mover -> data){
				//mover = mover -> right;
				if(!mover->right){
					buffer -> parent = mover;  
					mover -> right = buffer;

				}
				else
					mover = mover-> right;
			}
			else{
				//mover = mover -> left;
				if(!mover->left){
					buffer -> parent = mover;  
					mover -> left = buffer;

				}				
				else
					mover = mover-> left;
			}
		}
		}
	}

	// searching
	int val;
	cout << "give search count";
	cin >>  n;
	for(int i=0;i<n;i++){
		cout << "give value to search";
		cin >> val;
		cout << root -> data;
		searchBST(root,val);
	}

	
	return 0;
}

void searchBST(node *root, int val){
	node *buffer;
	buffer = root;
	cout << buffer;
	while(buffer -> data != val){
		if(buffer -> data == val)
		{
			cout << "fount the element " << val << endl;
			break;
		}
		else if(val > buffer ->data)
			{
				buffer = buffer -> right;
				if(!buffer)
					cout << "element not found " << endl;				
			}
		else
			{
				buffer = buffer -> left;
				if(!buffer)
					cout << "element not found " << endl;				
			}	
	}
}