//�Ӽ��������·ݣ��жϸ�����ʲô���ڣ���ʾ��3~5��Ϊ������6~8��Ϊ�ļ���9~11��Ϊ�＾��12��1��2��Ϊ������
//Ҫ���жϼ���ǰ����ʹ��if-else����ж������·ݵĺϷ��ԣ�Ȼ��ʹ��switch����жϼ��ڣ���switch�е�case�־価���١�
#include <iostream>
using namespace std;
int main()
{
  int month;
  printf("�������·�:");
  scanf("%d", &month);
  if(month < 1 || month > 12)
  {
    printf("�·��������!\n");
    return 0;
  }
  switch(month)
  {
    case 3:
    case 4:
    case 5:
      printf("%d�´��ڴ���\n", month);
      break;
    case 6:
    case 7:
    case 8:
      printf("%d�´����ļ�\n", month);
      break;
    case 9:
    case 10:
    case 11:
      printf("%d�´����＾\n", month);
      break;
    default:
      printf("%d�´��ڶ���\n", month);
      break;
  }
  return 0;
}
