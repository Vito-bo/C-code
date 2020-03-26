
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;

// 二叉树的初始化
void BinaryTreeInit(BTNode** root)
{
	assert(root);
	if (*root == NULL)
		return;
	*root = NULL;
	return;
}
// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int* Index)
{
	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	if (a[*Index] == '#')
		return NULL;

	root->_data = a[*Index];
	++(*Index);
	root->_left = BinaryTreeCreate(a, Index);
	++(*Index);
	root->_right = BinaryTreeCreate(a, Index);
	return root;
}
// 二叉树销毁
void BinaryTreeDestory(BTNode** root)
{
	if (*root)
	{
		BinaryTreeDestory((*root)->_left);
		BinaryTreeDestory((*root)->_right);
		free(*root);
		*root = NULL;
	}
}
// 二叉树结点个数
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}
// 二叉树叶子结点个数
// 二叉树叶子结点个数 = 左子树叶子结点个数 + 右子树叶子结点个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->_left == NULL&&root->_right == NULL)
		return 1;
	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}
// 二叉树第k层结点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}
// 二叉树的高度
int BinaryTreeHeight(BTNode* root)
{
	if (root == NULL)
		return 0;
	int leftheight = BinaryTreeHeight(root->_left) + 1;
	int rightheight = BinaryTreeHeight(root->_right) + 1;
	return rightheight > leftheight ? rightheight : leftheight;
}
// 求二叉树的镜像
// 递归的交换二叉树的左右子树
void BinaryTreeMirror(BTNode* root)
{
	if (root == NULL)
		return;
	BTNode* tmp = root->_left;
	root->_left = root->_right;
	root->_right = tmp;
	BinaryTreeMirror(root->_left);
	BinaryTreeMirror(root->_right);
	return;
}
// 二叉树查找值为x的结点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	BTNode* ret;
	if (root == NULL)
	{
		return NULL;
	}
	//根节点
	if (root->_data == x)
	{
		return root;
	}
	//找左子树
	ret = BinaryTreeFind(root->_left, x);
	if (ret)
	{
		return ret;
	}
	//左子树找不到, 找右子树
	ret = BinaryTreeLeafSize(root->_right, x);
	if (ret)
	{
		return ret;
	}
	//没找到
	return NULL;
}
// 二叉树前序遍历
void BinaryTreePrevOrder(BTNode* root)
{
	if (root)
	{
		printf("%c ", root->_data);
		BinaryTreePrevOrder(root->_left);
		BinaryTreePrevOrder(root->_right);
	}
}
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
	if (root)
	{
		BinaryTreeInOrder(root->_left);
		printf("%c ", root->_data);
		BinaryTreeInOrder(root->_right);
	}
}
// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{
	if (root)
	{
		BinaryTreePostOrder(root->_left);
		BinaryTreePostOrder(root->_right);
		printf("%c ", root->_data);
	}
}
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue qu;
	BTNode * cur;
	QueueInit(&qu);
	QueuePush(&qu, root);
	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);
		putchar(cur->_data);
		if (cur->_left)
		{
			QueuePush(&qu, cur->_left);
		}
		if (cur->_right)
		{
			QueuePush(&qu, cur->_right);
		}
		QueuePop(&qu);
	}
	QueueDestory(&qu);
}
// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root)
{
	Queue qu;
	BTNode * cur;
	int tag = 0;
	QueueInit(&qu);
	QueuePush(&qu, root);
	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);
		putchar(cur->_data);
		if (cur->_right && !cur->_left)
		{
			return 0;
		}
		if (tag && (cur->_right || cur->_left))
		{
			return 0;
		}
		if (cur->_left)
		{
			QueuePush(&qu, cur->_left);
		}
		if (cur->_right)
		{
			QueuePush(&qu, cur->_right);
		}
		else
		{
			tag = 1;
		}
		QueuePop(&qu);
	}
	QueueDestory(&qu);
	return 1;
}
