#include"Circle.h"

//�R���X�g���N�^
Circle::Circle() :PI(3.14f) {

}

//�~�̖ʐς����߂�֐�
//�����F���a
//�ߒl�F�ʐ�
float Circle::Menseki(float r) {
	return r * r * PI;
}