#include "kull_m_rpc_mimicom.h"

#if defined(_M_X64) || defined(_M_ARM64) // TODO:ARM64
#define TYPE_FORMAT_STRING_SIZE	123
#define PROC_FORMAT_STRING_SIZE	221
static const unsigned short MimiCom_FormatStringOffsetTable[] = {0, 54, 98, 166};
#elif defined(_M_IX86)
#define TYPE_FORMAT_STRING_SIZE	129
#define PROC_FORMAT_STRING_SIZE	213
static const unsigned short MimiCom_FormatStringOffsetTable[] = {0, 52, 94, 160};
#endif

typedef struct _mimicom_MIDL_TYPE_FORMAT_STRING {
	SHORT Pad;
	UCHAR Format[TYPE_FORMAT_STRING_SIZE];
} mimicom_MIDL_TYPE_FORMAT_STRING;

typedef struct _mimicom_MIDL_PROC_FORMAT_STRING {
	SHORT Pad;
	UCHAR Format[PROC_FORMAT_STRING_SIZE];
} mimicom_MIDL_PROC_FORMAT_STRING;

static const mimicom_MIDL_TYPE_FORMAT_STRING mimicom__MIDL_TypeFormatString;
static const mimicom_MIDL_PROC_FORMAT_STRING mimicom__MIDL_ProcFormatString;
static const MIDL_SERVER_INFO MimiCom_ServerInfo;

static const RPC_DISPATCH_FUNCTION MimiCom_table[] = {NdrServerCall2, NdrServerCall2, NdrServerCall2, NdrServerCall2, 0};
static const RPC_DISPATCH_TABLE MimiCom_v1_0_DispatchTable = {4, (RPC_DISPATCH_FUNCTION *) MimiCom_table};
static /*const */RPC_SERVER_INTERFACE MimiCom___RpcServerInterface = {sizeof(RPC_SERVER_INTERFACE), {{0x17fc11e9, 0xc258, 0x4b8d, {0x8d, 0x07, 0x2f, 0x41, 0x25, 0x15, 0x62, 0x44}}, {1, 0}}, {{0x8a885d04, 0x1ceb, 0x11c9, {0x9f, 0xe8, 0x08, 0x00, 0x2b, 0x10, 0x48, 0x60}}, {2, 0}}, (RPC_DISPATCH_TABLE *) &MimiCom_v1_0_DispatchTable, 0, 0, 0, &MimiCom_ServerInfo, 0x04000000};
static /*const */RPC_CLIENT_INTERFACE MimiCom___RpcClientInterface = {sizeof(RPC_CLIENT_INTERFACE), {{0x17fc11e9, 0xc258, 0x4b8d, {0x8d, 0x07, 0x2f, 0x41, 0x25, 0x15, 0x62, 0x44}}, {1, 0}}, {{0x8a885d04, 0x1ceb, 0x11c9, {0x9f, 0xe8, 0x08, 0x00, 0x2b, 0x10, 0x48, 0x60}}, {2, 0}}, 0, 0, 0, 0, 0, 0x00000000};
RPC_IF_HANDLE
	MimiCom_v1_0_s_ifspec = (RPC_IF_HANDLE) &MimiCom___RpcServerInterface,
	MimiCom_v1_0_c_ifspec = (RPC_IF_HANDLE) &MimiCom___RpcClientInterface;
static const NDR_RUNDOWN RundownRoutines[] = {SRV_MIMI_HANDLE_rundown};
static const SERVER_ROUTINE MimiCom_ServerRoutineTable[] = {
    (SERVER_ROUTINE) SRV_MimiBind,
    (SERVER_ROUTINE) SRV_MiniUnbind,
    (SERVER_ROUTINE) SRV_MimiCommand,
	(SERVER_ROUTINE) SRV_MimiClear,
};
static RPC_BINDING_HANDLE MimiCom__MIDL_AutoBindHandle;
static const MIDL_STUB_DESC
	MimiCom_s_StubDesc = {(void *) &MimiCom___RpcServerInterface, MIDL_user_allocate, MIDL_user_free, 0, RundownRoutines, 0, 0, 0, mimicom__MIDL_TypeFormatString.Format, 1, 0x60000, 0, 0x8000253, 0, 0, 0, 0x1, 0, 0, 0},
	MimiCom_c_StubDesc = {(void *) &MimiCom___RpcClientInterface, MIDL_user_allocate, MIDL_user_free, &MimiCom__MIDL_AutoBindHandle, 0, 0, 0, 0, mimicom__MIDL_TypeFormatString.Format, 1, 0x60000, 0, 0x8000253, 0, 0, 0, 0x1, 0, 0, 0};
static const MIDL_SERVER_INFO MimiCom_ServerInfo = {&MimiCom_s_StubDesc, MimiCom_ServerRoutineTable, mimicom__MIDL_ProcFormatString.Format, MimiCom_FormatStringOffsetTable, 0, 0, 0, 0};

#if defined(_M_X64) || defined(_M_ARM64) // TODO:ARM64
NTSTATUS CLI_MimiBind(handle_t rpc_handle, PMIMI_PUBLICKEY clientPublicKey, PMIMI_PUBLICKEY serverPublicKey, MIMI_HANDLE *phMimi)
{
	return (NTSTATUS) NdrClientCall2((PMIDL_STUB_DESC) &MimiCom_c_StubDesc, (PFORMAT_STRING) &mimicom__MIDL_ProcFormatString.Format[0], rpc_handle, clientPublicKey, serverPublicKey, phMimi).Simple;
}
NTSTATUS CLI_MiniUnbind(MIMI_HANDLE *phMimi)
{
	return (NTSTATUS) NdrClientCall2((PMIDL_STUB_DESC) &MimiCom_c_StubDesc, (PFORMAT_STRING) &mimicom__MIDL_ProcFormatString.Format[54], phMimi).Simple;
}
NTSTATUS CLI_MimiCommand(MIMI_HANDLE phMimi, DWORD szEncCommand, BYTE *encCommand, DWORD *szEncResult, BYTE **encResult)
{
	return (NTSTATUS) NdrClientCall2((PMIDL_STUB_DESC) &MimiCom_c_StubDesc, (PFORMAT_STRING) &mimicom__MIDL_ProcFormatString.Format[98], phMimi, szEncCommand, encCommand, szEncResult, encResult).Simple;
}
//NTSTATUS CLI_MimiClear(handle_t rpc_handle, wchar_t *command, DWORD *size, wchar_t **result)
//{
//    return (NTSTATUS) NdrClientCall2((PMIDL_STUB_DESC) &MimiCom_c_StubDesc, (PFORMAT_STRING) &mimicom__MIDL_ProcFormatString.Format[166], rpc_handle, command, size, result).Simple;
//}

static const mimicom_MIDL_PROC_FORMAT_STRING mimicom__MIDL_ProcFormatString = {0, {
	0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x47, 0x04, 0x0a, 0x07, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x01,
	0x08, 0x00, 0x12, 0x00, 0x13, 0x41, 0x10, 0x00, 0x12, 0x00, 0x10, 0x01, 0x18, 0x00, 0x2a, 0x00, 0x70, 0x00, 0x20, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x00,
	0x30, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x40, 0x00, 0x44, 0x02, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x32, 0x00, 0x70, 0x00, 0x08, 0x00,
	0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x30, 0x00, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x24, 0x00, 0x47, 0x06, 0x0a, 0x07, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x36, 0x00, 0x48, 0x00, 0x08, 0x00, 0x08, 0x00, 0x0b, 0x00, 0x10, 0x00, 0x3a, 0x00, 0x50, 0x21, 0x18, 0x00, 0x08, 0x00, 0x13, 0x20, 0x20, 0x00, 0x4e, 0x00,
	0x70, 0x00, 0x28, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x28, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x47, 0x04, 0x0a, 0x03, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x08, 0x00, 0x64, 0x00, 0x50, 0x21, 0x10, 0x00, 0x08, 0x00, 0x13, 0x20, 0x18, 0x00, 0x66, 0x00, 0x70, 0x00, 0x20, 0x00, 0x08, 0x00, 0x00,
}};
static const mimicom_MIDL_TYPE_FORMAT_STRING mimicom__MIDL_TypeFormatString = {0, {
	0x00, 0x00, 0x11, 0x00, 0x0e, 0x00, 0x1b, 0x00, 0x01, 0x00, 0x19, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x5b, 0x1a, 0x03, 0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x08, 0x36, 0x5b, 0x12, 0x00,
	0xe6, 0xff, 0x11, 0x04, 0xee, 0xff, 0x11, 0x04, 0x02, 0x00, 0x30, 0xa0, 0x00, 0x00, 0x11, 0x04, 0x02, 0x00, 0x30, 0xe1, 0x00, 0x00, 0x30, 0x41, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00, 0x1b, 0x00,
	0x01, 0x00, 0x29, 0x00, 0x08, 0x00, 0x01, 0x00, 0x02, 0x5b, 0x11, 0x0c, 0x08, 0x5c, 0x11, 0x14, 0x02, 0x00, 0x12, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x01, 0x00, 0x29, 0x54, 0x18, 0x00, 0x01, 0x00,
	0x02, 0x5b, 0x11, 0x08, 0x25, 0x5c, 0x11, 0x14, 0x02, 0x00, 0x12, 0x00, 0x02, 0x00, 0x1b, 0x01, 0x02, 0x00, 0x29, 0x54, 0x10, 0x00, 0x01, 0x00, 0x05, 0x5b, 0x00,
}};
#elif defined(_M_IX86)
#pragma optimize("", off ) 
NTSTATUS CLI_MimiBind(handle_t rpc_handle, PMIMI_PUBLICKEY clientPublicKey, PMIMI_PUBLICKEY serverPublicKey, MIMI_HANDLE *phMimi)
{
	return (NTSTATUS) NdrClientCall2((PMIDL_STUB_DESC) &MimiCom_c_StubDesc, (PFORMAT_STRING) &mimicom__MIDL_ProcFormatString.Format[0], (unsigned char *) &rpc_handle).Simple;
}
NTSTATUS CLI_MiniUnbind(MIMI_HANDLE *phMimi)
{
	return (NTSTATUS) NdrClientCall2((PMIDL_STUB_DESC) &MimiCom_c_StubDesc, (PFORMAT_STRING) &mimicom__MIDL_ProcFormatString.Format[52], (unsigned char *) &phMimi).Simple;
}
NTSTATUS CLI_MimiCommand(MIMI_HANDLE phMimi, DWORD szEncCommand, BYTE *encCommand, DWORD *szEncResult, BYTE **encResult)
{
	return (NTSTATUS) NdrClientCall2((PMIDL_STUB_DESC) &MimiCom_c_StubDesc, (PFORMAT_STRING) &mimicom__MIDL_ProcFormatString.Format[94], (unsigned char *) &phMimi).Simple;
}
//NTSTATUS CLI_MimiClear(handle_t rpc_handle, wchar_t *command, DWORD *size, wchar_t **result)
//{
//	return (NTSTATUS) NdrClientCall2((PMIDL_STUB_DESC) &MimiCom_c_StubDesc, (PFORMAT_STRING) &mimicom__MIDL_ProcFormatString.Format[160], (unsigned char *) &rpc_handle).Simple;
//}
#pragma optimize("", on )
static const mimicom_MIDL_PROC_FORMAT_STRING mimicom__MIDL_ProcFormatString = {0, {
	0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x47, 0x04, 0x08, 0x07, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x04, 0x00,
	0x12, 0x00, 0x13, 0x41, 0x08, 0x00, 0x12, 0x00, 0x10, 0x01, 0x0c, 0x00, 0x30, 0x00, 0x70, 0x00, 0x10, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x00, 0x30, 0xe0,
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x40, 0x00, 0x44, 0x02, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x38, 0x00, 0x70, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x48,
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x18, 0x00, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x24, 0x00, 0x47, 0x06, 0x08, 0x07, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
	0x3c, 0x00, 0x48, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0b, 0x00, 0x08, 0x00, 0x40, 0x00, 0x50, 0x21, 0x0c, 0x00, 0x08, 0x00, 0x13, 0x20, 0x10, 0x00, 0x54, 0x00, 0x70, 0x00, 0x14, 0x00, 0x08, 0x00,
	0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x14, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x47, 0x04, 0x08, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x04, 0x00,
	0x6a, 0x00, 0x50, 0x21, 0x08, 0x00, 0x08, 0x00, 0x13, 0x20, 0x0c, 0x00, 0x6c, 0x00, 0x70, 0x00, 0x10, 0x00, 0x08, 0x00, 0x00,
}};
static const mimicom_MIDL_TYPE_FORMAT_STRING mimicom__MIDL_TypeFormatString = {0, {
	0x00, 0x00, 0x11, 0x00, 0x0e, 0x00, 0x1b, 0x00, 0x01, 0x00, 0x19, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x5b, 0x16, 0x03, 0x0c, 0x00, 0x4b, 0x5c, 0x46, 0x5c, 0x08, 0x00, 0x08, 0x00, 0x12, 0x00,
	0xe6, 0xff, 0x5b, 0x08, 0x08, 0x08, 0x5c, 0x5b, 0x11, 0x04, 0xe8, 0xff, 0x11, 0x04, 0x02, 0x00, 0x30, 0xa0, 0x00, 0x00, 0x11, 0x04, 0x02, 0x00, 0x30, 0xe1, 0x00, 0x00, 0x30, 0x41, 0x00, 0x00,
	0x12, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x01, 0x00, 0x29, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x5b, 0x11, 0x0c, 0x08, 0x5c, 0x11, 0x14, 0x02, 0x00, 0x12, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x01, 0x00,
	0x29, 0x54, 0x0c, 0x00, 0x01, 0x00, 0x02, 0x5b, 0x11, 0x08, 0x25, 0x5c, 0x11, 0x14, 0x02, 0x00, 0x12, 0x00, 0x02, 0x00, 0x1b, 0x01, 0x02, 0x00, 0x29, 0x54, 0x08, 0x00, 0x01, 0x00, 0x05, 0x5b,
	0x00,
}};
#endif
