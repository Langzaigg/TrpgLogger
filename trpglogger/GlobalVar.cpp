#include "GlobalVar.h"
#include <string>
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentialsProvider.h>

// ȫ��Ӧ��Ŀ¼
std::string fileLoc;
// ȫ�����ݿ�·��
std::string dbLoc_UTF8;
// Aws SDK����
Aws::SDKOptions options;
// Aws Credentials, ��ʽָ��ʹ�ÿ��ַ�������Credentials
Aws::Auth::AWSCredentials awsCredentials("", "");
// Ӧ���Ƿ�����
bool Enabled = false;
// Log��Ϣ�洢
std::map<long long, time_t> LogInfo;		// Ⱥ
std::map<long long, time_t> LogInfoDiscuss;	// ������
// �汾��Ϣ
const std::string TrpgLoggerVer = "TrpgLogger by w4123��� Version 1.0.3(17)";
