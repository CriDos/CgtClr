#pragma once

#include <Windows.h>
#include "Share.h"

using namespace System;
using namespace CgtClr::Share;

namespace CgtClr {

	public ref class BaseCgt abstract
	{
	public:
		void RunCodeGen(const String ^codeGenPath, int idRootContainer);
		static BaseCgt ^ref;

		/// <summary>
		/// ������� ���������� ��������� � ����������
		/// </summary>
		/// <param name="id_sdk">������������� ����������</param>
		/// <returns>���������� ��������� � ����������</returns>
		virtual int sdkGetCount(int id_sdk) abstract;

		/// <summary>
		/// ���������� ������������� �������� �� ��� Z-���������(�������) � ����������
		/// </summary>
		/// <param name="index">Z-���������(������) ��������</param>
		/// <returns>������������� ��������</returns>
		virtual int sdkGetElement(int id, int index) abstract;

		/// <summary>
		/// ���������� ������������� �������� �� ����� ��������
		/// </summary>
		/// <param name="id">������������� ����������</param>
		/// <param name="name">��� ��������</param>
		/// <returns>������������� ��������</returns>
		virtual int sdkGetElementName(int id, String ^ name) abstract;

		/// <summary>
		/// ���������� ����� ��������
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns>����� ��������</returns>
		virtual ElementFlags elGetFlag(int id) abstract;

		/// <summary>
		/// ���������� ���������� ������� ��������
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns>���������� ������� ��������</returns>
		virtual int elGetPropCount(int id) abstract;

		/// <summary>
		/// ���������� ��������� �� �������� �������� �� ������� � ���������� ������� �� INI
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="index">������ ��������</param>
		/// <returns>��������� �� ��������</returns>
		virtual IntPtr elGetProperty(int id, int index) abstract;

		/// <summary>
		/// ���������� True, ���� �������� �������� ��������� � �������� �� ��������� � INI �����, ����� False.
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="index">������ ��������</param>
		/// <returns>��������� ��������</returns>
		virtual bool elIsDefProp(int id, int index) abstract;

		/// <summary>
		/// ����������� �������� ���������� ���
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="name">��� ��������</param>
		/// <returns>������������� ��������</returns>
		virtual int elSetCodeName(int id, String ^ name) abstract;

		/// <summary>
		/// ���������� ���������� ��� ��������
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns>��� ��������</returns>
		virtual String ^ elGetCodeName(int id) abstract;

		/// <summary>
		/// ���������� ��� ������ ��������
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns>��� ������ ��������</returns>
		virtual String ^ elGetClassName(int id) abstract;

		/// <summary>
		/// ���������� ���������� ���� Sub �� ����������������� INI-����� ��������
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns>���������� ���� Sub</returns>
		virtual String ^ elGetInfSub(int id) abstract;

		/// <summary>
		/// ���������� ����� ���������� ������� ����� � ��������
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns>���������� ������� �����</returns>
		virtual int elGetPtCount(int id) abstract;

		/// <summary>
		/// ���������� ��������� �� ����� �� � �������
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="index">������ �����</param>
		/// <returns>��������� �� �����</returns>
		virtual IntPtr elGetPt(int id, int index) abstract;

		/// <summary>
		/// ���������� ��������� �� ����� �� � �����
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="name">��� �����</param>
		/// <returns>��������� �� �����</returns>
		virtual IntPtr elGetPtName(int id, String ^ name) abstract;

		/// <summary>
		/// ���������� ������ ������ ��������
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns>������ ������ ��������</returns>
		virtual ElementClass elGetClassIndex(int id) abstract;

		/// <summary>
		/// ���������� ������������� ���������� ��������.
		/// ���� ������� �� �������� ���������, ������������ ������������� �������� �������� �������� ����������.
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns>������������� ���������� ��� ��������</returns>
		virtual int elGetSDK(int id) abstract;

		/// <summary>
		/// ���������, �������� �� ������� �������, ���� �� ���� ���������
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns>���� ������� �������� ������� ��� �� ���� ��������� - true, ����� - false</returns>
		virtual bool elLinkIs(int id) abstract;

		/// <summary>
		/// ���������� ������������� �������� ��������(���, �� ������� ��������� ������)
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns>������������� ��������</returns>
		virtual int elLinkMain(int id) abstract;

		/// <summary>
		/// �������� � ���������� "X" � "Y", ������� �������� � ��������� ����
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="X">������� �� �����������</param>
		/// <param name="Y">������� �� ���������</param>
		virtual void elGetPos(int id, int % X, int % Y) abstract;

		/// <summary>
		/// �������� � ���������� "W" � "H", ������� ��������
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="W">������</param>
		/// <param name="H">������</param>
		virtual void elGetSize(int id, int % W, int % H) abstract;

		/// <summary>
		/// ���������� ����������� ������������� ��������
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns>������������� ��������</returns>
		[Obsolete]
		virtual int elGetEID(int id) abstract;

		/// <summary>
		/// ���������� ��������� �� ����� � ������� ��������� ���������
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>��������� �� �����</returns>
		virtual IntPtr ptGetLinkPoint(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� �� ����� � ������� ��������� ���������,
		/// ��� ����� ����� ������� � �����.
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>��������� �� �����</returns>
		virtual IntPtr ptGetRLinkPoint(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��� �����
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>��� �����</returns>
		virtual PointType ptGetType(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��� �����
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>��� �����</returns>
		virtual String ^ ptGetName(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ������������� �������� �����
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>������������� ��������</returns>
		virtual int ptGetParent(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ������ ����� ������������ ����� ���� �� ����
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>������ �����</returns>
		virtual int ptGetIndex(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ������� ����� ����� ������������ �����(��� CI_DPElement).
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>����� ����� ������������ �����</returns>
		virtual String ^ pt_dpeGetName(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��� ��������
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��� ��������</returns>
		virtual DataType propGetType(IntPtr ptr) abstract;


		/// <summary>
		/// ���������� ��� ��������
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��� ��������</returns>
		virtual String ^ propGetName(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� �� ������ ��������
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��������� �� ������</returns>
		virtual IntPtr propGetValue(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual unsigned char propToByte(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual int propToInteger(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual double propToReal(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ propToString(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="name"></param>
		/// <returns></returns>
		virtual int resAddFile(String ^ name) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ resAddIcon(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="str"></param>
		/// <returns></returns>
		virtual String ^ resAddStr(String ^ str) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ resAddStream(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ resAddWave(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ resAddBitmap(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ resAddMenu(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="text"></param>
		/// <param name="color"></param>
		/// <returns></returns>
		virtual int _Debug(String ^ text, int color) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual Object ^ GetParam(CgtParams index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual int arrCount(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual DataType arrType(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual String ^ arrItemName(int id_value, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int arrItemData(int id_value, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int arrGetItem(int id_value, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns></returns>
		virtual int isDebug(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual DataType dtType(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual String ^ dtStr(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual int dtInt(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual double dtReal(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual String ^ fntName(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual int fntSize(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual unsigned char fntStyle(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual unsigned int fntColor(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_value"></param>
		/// <returns></returns>
		virtual unsigned char fntCharSet(int id_value) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns></returns>
		virtual int elGetData(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="data"></param>
		virtual void elSetData(int id, int data) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr"></param>
		/// <returns></returns>
		virtual DataType ptGetDataType(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns></returns>
		virtual int elGetParent(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns></returns>
		virtual int elGetPropertyListCount(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int elGetPropertyListItem(int id, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr"></param>
		/// <returns></returns>
		virtual String ^ plGetName(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr"></param>
		/// <returns></returns>
		virtual String ^ plGetInfo(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr"></param>
		/// <returns></returns>
		virtual String ^ plGetGroup(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr"></param>
		/// <returns></returns>
		virtual int plGetProperty(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual int plGetOwner(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual String ^ ptGetInfo(int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <param name="propName"></param>
		/// <returns></returns>
		virtual int propGetLinkedElement(int id_prop, String ^ propName) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="id_prop"></param>
		/// <returns></returns>
		virtual int propIsTranslate(int id, int id_prop) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="id_prop"></param>
		/// <param name="info"></param>
		/// <returns></returns>
		virtual int propGetLinkedElementInfo(int id, int id_prop, String ^ info) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int elGetSDKByIndex(int id, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns></returns>
		virtual int elGetSDKCount(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual String ^ elGetSDKName(int id, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_sdk">������������� ����������</param>
		/// <returns></returns>
		virtual int sdkGetParent(int id_sdk) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns></returns>
		virtual String ^ elGetInterface(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns></returns>
		virtual String ^ elGetInherit(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <returns></returns>
		virtual int resEmpty() abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="pref"></param>
		/// <returns></returns>
		virtual int resSetPref(String ^ pref) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="line"></param>
		/// <param name="id">������������� ��������</param>
		/// <param name="text"></param>
		/// <returns></returns>
		virtual int _Error(int line, int id, String ^ text) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id">������������� ��������</param>
		/// <returns></returns>
		virtual int elGetGroup(int id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="id_prop"></param>
		/// <param name="fileName"></param>
		/// <returns></returns>
		virtual int propSaveToFile(int id_prop, String ^ fileName) abstract;
	};
}