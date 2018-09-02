#ifndef _ADT_H_
#define _ADT_H_


/* frequency type selector */
typedef enum
{
	/*��Ƶ�� 2K~5K */
	FREQ_TYPE_LOW =0,
	/*��Ƶ, 8K~12K*/
	FREQ_TYPE_MIDDLE,
	/*��Ƶ�� 16K~20K*/
	FREQ_TYPE_HIGH

}freq_type_t;

/*macros of return valule of decoder*/
/* ������� */
#define RET_DEC_ERROR -1
/* ������������ */
#define RET_DEC_NORMAL 0
/* ���뻹δ���������ܻ�ȡ�������� */
#define RET_DEC_NOTREADY 1
/* ������� */
#define RET_DEC_END 2


/* definition of decoder config paramters */
typedef struct
{
	/* ֧�ֵ�����ַ������ȣ��ֽ����� */
	int max_strlen;
	/* ������ */
	int sample_rate;
	/* Ƶ�ʷ�Χѡ�� */
	freq_type_t freq_type;
	/* ÿ�����鴫����ֽ��� */
	int group_symbol_num;
	/* �Ƿ���þ����� */
	int error_correct;
	/* ������ľ������� */
	int error_correct_num;
}config_decoder_t;

/* 
	������	���������� 
	������	decode_config: �����ṹ�壨ָ�룩
	����ֵ��	�����������NULL��ʾ����ʧ��
*/
void* decoder_create(config_decoder_t* decode_config );

/* 
	������	��λ������
	������	handle��		���������
	����ֵ��	��

*/
void decoder_reset(void* handle);
/* 
	������	��ȡÿ֡����������������
	������	handle��		���������
	����ֵ��	ÿ֡����������������ÿ������Ϊ16bit��

*/
int decoder_getbsize(void* handle);
/*
	������	��������������
	������	handle��		���������
			pcm��		����buffer���豣֤���е�������������decoder_getbsize�ķ���ֵ
	����ֵ��	ͬ���뷵��ֵ�ĺ궨��
*/
int decoder_fedpcm(void* handle, short* pcm);
/*
	������	��ȡ������
	������	handle��	���������
			str��	������buffer
	����ֵ��	ͬ���뷵��ֵ�ĺ궨��
*/
int decoder_getstr(void* handle, unsigned char* str);
/*
	�������ͷŽ��������
	������handle��	���������
	����ֵ����
*/
void decoder_destroy(void* handle);

#endif