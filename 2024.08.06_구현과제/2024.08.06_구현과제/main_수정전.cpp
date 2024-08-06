

/*3. �߻�Ŭ������ Ȱ���� 3���� ĳ���� Ŭ���� �����ϱ�.
- �⺻����, �����̴� �Լ�, �����ϴ� �Լ�, �ǰ� �Լ�
��Ÿ ���
*/

#include "Lupy.h"
#include "Zoro.h"
#include "Nami.h"
#include "Aaron.h"

int main()
{
	Lupy* L1 = new Lupy("Lupy", 100, 20, 10);
	Zoro* Z1 = new Zoro("Zoro", 120, 30, 15);
	Nami* N1 = new Nami("Nami", 80, 15, 5);
	Aaron* A1 = new Aaron("Aaron", 200, 10, 10);

	//�̵�
	L1->Move();
	Z1->Move();
	N1->Move();
	cout << endl<<endl;
	cout << "========================================" << endl;
	cout << endl << endl;
	
	// �� ����
	L1->PrintInfo();
	Z1->PrintInfo();
	N1->PrintInfo();
	A1->PrintInfo();
	cout << endl << endl;
	cout << "========================================" << endl;
	cout << endl << endl;

	// ����
	while (true)
	{
		//===================================================================
		// ����
		L1->Attack();
		Z1->Attack();
		N1->Attack();
		A1->TakeDamage(L1->getAtk() + Z1->getAtk() + N1->getAtk());

		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "���ᰡ ��������...  ���� �й� " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "���� ����Ʈ�ȴ�!!!  ���� �¸� " << endl;
			break;
		}
		//===================================================================
		//�� �ݰ�

		A1->Attack();
		L1->TakeDamage(A1->getAtk());

		cout << endl << endl;
		L1->PrintInfo();
		Z1->PrintInfo();
		N1->PrintInfo();
		A1->PrintInfo();
		cout << "========================================" << endl;
		cout << endl << endl;

		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "���ᰡ ��������...  ���� �й� " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "���� ����Ʈ�ȴ�!!!  ���� �¸� " << endl;
			break;
		}
		//===================================================================

		// ����
		L1->Attack();
		Z1->Attack();
		N1->Attack();
		A1->TakeDamage(L1->getAtk() + Z1->getAtk() + N1->getAtk());

		
		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "���ᰡ ��������...  ���� �й� " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "���� ����Ʈ�ȴ�!!!  ���� �¸� " << endl;
			break;
		}
		//===================================================================
		//�� �ݰ�
		A1->Attack();
		Z1->TakeDamage(A1->getAtk());

		cout << endl << endl;
		L1->PrintInfo();
		Z1->PrintInfo();
		N1->PrintInfo();
		A1->PrintInfo();
		cout << "========================================" << endl;
		cout << endl << endl;
		
		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "���ᰡ ��������...  ���� �й� " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "���� ����Ʈ�ȴ�!!!  ���� �¸� " << endl;
			break;
		}
		
		//===================================================================

		// ����
		L1->Attack();
		Z1->Attack();
		N1->Attack();
		A1->TakeDamage(L1->getAtk() + Z1->getAtk() + N1->getAtk());

		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "���ᰡ ��������...  ���� �й� " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "���� ����Ʈ�ȴ�!!!  ���� �¸� " << endl;
			break;
		}
		//===================================================================
		//�� �ݰ�

		A1->Attack();
		N1->TakeDamage(A1->getAtk());

		cout << endl << endl;
		L1->PrintInfo();
		Z1->PrintInfo();
		N1->PrintInfo();
		A1->PrintInfo();
		cout << "========================================" << endl;
		cout << endl << endl;

		if (L1->getHp() <= 0 || Z1->getHp() <= 0 || N1->getHp() <= 0)
		{
			cout << "���ᰡ ��������...  ���� �й� " << endl;
			break;
		}
		if (A1->getHp() <= 0)
		{
			cout << "���� ����Ʈ�ȴ�!!!  ���� �¸� " << endl;
			break;
		}
		//===================================================================
	}

	// �ʱ�ȭ
	delete L1;
	delete Z1;
	delete N1;
	delete A1;

	return 0;



}


