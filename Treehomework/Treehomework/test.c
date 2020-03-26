
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

// �������ĳ�ʼ��
void BinaryTreeInit(BTNode** root)
{
	assert(root);
	if (*root == NULL)
		return;
	*root = NULL;
	return;
}
// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
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
// ����������
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
// ������������
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}
// ������Ҷ�ӽ�����
// ������Ҷ�ӽ����� = ������Ҷ�ӽ����� + ������Ҷ�ӽ�����
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->_left == NULL&&root->_right == NULL)
		return 1;
	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}
// ��������k�������
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}
// �������ĸ߶�
int BinaryTreeHeight(BTNode* root)
{
	if (root == NULL)
		return 0;
	int leftheight = BinaryTreeHeight(root->_left) + 1;
	int rightheight = BinaryTreeHeight(root->_right) + 1;
	return rightheight > leftheight ? rightheight : leftheight;
}
// ��������ľ���
// �ݹ�Ľ�������������������
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
// ����������ֵΪx�Ľ��
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	BTNode* ret;
	if (root == NULL)
	{
		return NULL;
	}
	//���ڵ�
	if (root->_data == x)
	{
		return root;
	}
	//��������
	ret = BinaryTreeFind(root->_left, x);
	if (ret)
	{
		return ret;
	}
	//�������Ҳ���, ��������
	ret = BinaryTreeLeafSize(root->_right, x);
	if (ret)
	{
		return ret;
	}
	//û�ҵ�
	return NULL;
}
// ������ǰ�����
void BinaryTreePrevOrder(BTNode* root)
{
	if (root)
	{
		printf("%c ", root->_data);
		BinaryTreePrevOrder(root->_left);
		BinaryTreePrevOrder(root->_right);
	}
}
// �������������
void BinaryTreeInOrder(BTNode* root)
{
	if (root)
	{
		BinaryTreeInOrder(root->_left);
		printf("%c ", root->_data);
		BinaryTreeInOrder(root->_right);
	}
}
// �������������
void BinaryTreePostOrder(BTNode* root)
{
	if (root)
	{
		BinaryTreePostOrder(root->_left);
		BinaryTreePostOrder(root->_right);
		printf("%c ", root->_data);
	}
}
// �������
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
// �ж϶������Ƿ�����ȫ������
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
