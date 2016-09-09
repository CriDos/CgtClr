#pragma once

#include <Windows.h>
#include "Share.h"

using namespace System;
using namespace CgtClr::Share;

namespace CgtClr {

	public ref class BaseCgt abstract
	{
	public:
		void RunCodeGen(const String ^codeGenPath, IntPtr ptrRootContainer);
		static BaseCgt ^ref;

		/// <summary>
		/// ������� ���������� ��������� � ����������.
		/// </summary>
		/// <param name="ptr">��������� �� ���������</param>
		/// <returns>���������� ��������� � ����������</returns>
		virtual int sdkGetCount(IntPtr id) abstract;

		/// <summary>
		/// ���������� ��������� �� ������� �� ��� Z-���������(�������) � ����������.
		/// </summary>
		/// <param name="ptr">��������� �� ���������</param>
		/// <param name="index">Z-���������(������) ��������</param>
		/// <returns>��������� �� �������</returns>
		virtual IntPtr sdkGetElement(IntPtr ptr, int index) abstract;

		/// <summary>
		/// ���������� ��������� �� ������� �� ����� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� ���������</param>
		/// <param name="name">��� ��������</param>
		/// <returns>��������� �� �������</returns>
		virtual IntPtr sdkGetElementName(IntPtr ptr, String ^ name) abstract;

		/// <summary>
		/// ���������� ����� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>����� ��������</returns>
		virtual ElementFlags elGetFlag(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ���������� ������� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>���������� ������� ��������</returns>
		virtual int elGetPropCount(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� �� �������� �������� �� ������� � ���������� ������� �� INI.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="index">������ ��������</param>
		/// <returns>��������� �� ��������</returns>
		virtual IntPtr elGetProperty(IntPtr ptr, int index) abstract;

		/// <summary>
		/// ���������� True, ���� �������� �������� ��������� � �������� �� ��������� � INI �����, ����� False.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="index">������ ��������</param>
		/// <returns>��������� ��������</returns>
		virtual bool elIsDefProp(IntPtr ptr, int index) abstract;

		/// <summary>
		/// ����������� �������� ���������� ���.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="name">��� ��������</param>
		/// <returns>��������� �� �������</returns>
		virtual IntPtr elSetCodeName(IntPtr ptr, String ^ name) abstract;

		/// <summary>
		/// ���������� ���������� ��� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>��� ��������</returns>
		virtual String ^ elGetCodeName(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��� ������ ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>��� ������ ��������</returns>
		virtual String ^ elGetClassName(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ���������� ���� Sub �� ����������������� INI-����� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>���������� ���� Sub</returns>
		virtual String ^ elGetInfSub(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ����� ���������� ������� ����� � ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>���������� ������� �����</returns>
		virtual int elGetPtCount(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� �� ����� �� � �������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="index">������ �����</param>
		/// <returns>��������� �� �����</returns>
		virtual IntPtr elGetPt(IntPtr ptr, int index) abstract;

		/// <summary>
		/// ���������� ��������� �� ����� �� � �����.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="name">��� �����</param>
		/// <returns>��������� �� �����</returns>
		virtual IntPtr elGetPtName(IntPtr ptr, String ^ name) abstract;

		/// <summary>
		/// ���������� ������ ������ ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>������ ������ ��������</returns>
		virtual ElementClass elGetClassIndex(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� �� ��������� ��������.
		/// ���� ������� �� �������� ���������, ������������ ��������� �� ������� �������� �������� ����������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>��������� �� ��������� ��� ��������</returns>
		virtual IntPtr elGetSDK(IntPtr ptr) abstract;

		/// <summary>
		/// ���������, �������� �� ������� �������, ���� �� ���� ���������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>���� ������� �������� ������� ��� �� ���� ��������� - true, ����� - false</returns>
		virtual bool elLinkIs(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ������������� �������� ��������(���, �� ������� ��������� ������).
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>��������� �� �������</returns>
		virtual IntPtr elLinkMain(IntPtr ptr) abstract;

		/// <summary>
		/// �������� � ���������� "X" � "Y", ������� �������� � ��������� ����.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="X">������� �� �����������</param>
		/// <param name="Y">������� �� ���������</param>
		virtual void elGetPos(IntPtr ptr, int % X, int % Y) abstract;

		/// <summary>
		/// �������� � ���������� "W" � "H", ������� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="W">������</param>
		/// <param name="H">������</param>
		virtual void elGetSize(IntPtr ptr, int % W, int % H) abstract;

		/// <summary>
		/// ���������� ������������� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>������������� ��������</returns>
		[Obsolete]
		virtual int elGetEID(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� �� ����� � ������� ��������� ���������.
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
		/// ���������� ��� �����.
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>��� �����</returns>
		virtual PointType ptGetType(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��� �����.
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>��� �����</returns>
		virtual String ^ ptGetName(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ������������� �������� �����.
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>��������� �� �������</returns>
		virtual IntPtr ptGetParent(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ������ ����� ������������ ����� ���� �� ����.
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
		/// ���������� ��� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��� ��������</returns>
		virtual DataType propGetType(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��� ��������</returns>
		virtual String ^ propGetName(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� �� �������� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��������� �� ��������</returns>
		virtual IntPtr propGetValue(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� �������� �������� � ������� byte.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>�������� ��������</returns>
		virtual byte propToByte(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� �������� �������� � ������� int.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>�������� ��������</returns>
		virtual int propToInteger(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� �������� �������� � ������� double.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>�������� ��������</returns>
		virtual double propToReal(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� �������� �������� � ������� String.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns></returns>
		virtual String ^ propToString(IntPtr ptr) abstract;

		/// <summary>
		/// ��������� ���� � ������ ��������.
		/// </summary>
		/// <param name="name">���� � �����</param>
		/// <returns>������ ���������� 0</returns>
		virtual int resAddFile(String ^ filePath) abstract;

		/// <summary>
		/// ��������� ������ �� �������� � �������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��� ���������� �����</returns>
		virtual String ^ resAddIcon(IntPtr ptr) abstract;

		/// <summary>
		/// ��������� ������ � �������.
		/// </summary>
		/// <param name="str">������ ��� ����������</param>
		/// <returns>��� ���������� �����</returns>
		virtual String ^ resAddStr(String ^ str) abstract;

		/// <summary>
		/// ��������� ����� ������ �� �������� � �������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��� ���������� �����</returns>
		virtual String ^ resAddStream(IntPtr ptr) abstract;

		/// <summary>
		///  ��������� Wave ���� �� �������� � �������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��� ���������� �����</returns>
		virtual String ^ resAddWave(IntPtr ptr) abstract;

		/// <summary>
		/// ��������� �������� �� �������� � �������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��� ���������� �����</returns>
		virtual String ^ resAddBitmap(IntPtr ptr) abstract;

		/// <summary>
		/// ��������� ���� �� �������� � �������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��� ���������� �����</returns>
		[Obsolete]
		virtual String ^ resAddMenu(IntPtr ptr) abstract;

		/// <summary>
		/// ������� ����� � ���� �������.
		/// </summary>
		/// <param name="text">����� ��������� � ���������� ����</param>
		/// <param name="color">���� ���������� ������</param>
		/// <returns>������ ���������� 0</returns>
		virtual int _Debug(String ^ text, int color) abstract;

		/// <summary>
		/// ���������� �������� ��������� �����.
		/// </summary>
		/// <param name="index">������ ���������</param>
		/// <returns>�������� �����</returns>
		virtual Object ^ GetParam(CgtParams index) abstract;

		/// <summary>
		/// ���������� ���������� ��������� � �������.
		/// </summary>
		/// <param name="ptr">��������� �� ������</param>
		/// <returns>���������� ��������� �������</returns>
		virtual int arrCount(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��� ��������� � �������.
		/// </summary>
		/// <param name="ptr">��������� �� ������</param>
		/// <returns>��� ��������� �������</returns>
		virtual DataType arrType(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��� �������� �� ������� �������.
		/// </summary>
		/// <param name="ptr">��������� �� ������</param>
		/// <param name="index">������ �������� �������</param>
		/// <returns>��� �������� �������</returns>
		virtual String ^ arrItemName(IntPtr ptr, int index) abstract;

		/// <summary>
		/// ���������� ��������� �� ������ �������� ������� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <param name="index">������ �������� �������</param>
		/// <returns>��������� �� ������ �������� �������</returns>
		[Obsolete]
		virtual IntPtr arrItemData(IntPtr ptr, int index) abstract;

		/// <summary>
		/// ���������� ������� ������� ��� ��������� �� �������� �� ��������� �������� �������.
		/// </summary>
		/// <param name="ptr">��������� �� ������</param>
		/// <param name="index">������ �������� �������</param>
		/// <returns>��������� �� ��������</returns>
		virtual IntPtr arrGetItem(IntPtr ptr, int index) abstract;

		/// <summary>
		/// ���������� ������ ������� ���������� �����.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>
		/// ���� ����� ������ ���� - ������� ��������.
		/// ���� ����� ����� ���� - ������� ���������.
		/// </returns>
		virtual int isDebug(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��� ������.
		/// </summary>
		/// <param name="ptr">��������� �� ������</param>
		/// <returns>��� ������</returns>
		virtual DataType dtType(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ������ � ������� String.
		/// </summary>
		/// <param name="ptr">��������� �� ������</param>
		/// <returns>������</returns>
		virtual String ^ dtStr(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ������ � ������� int.
		/// </summary>
		/// <param name="ptr">��������� �� ������</param>
		/// <returns>�����</returns>
		virtual int dtInt(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ������ � ������� double.
		/// </summary>
		/// <param name="ptr">��������� �� ������</param>
		/// <returns>������� �����</returns>
		virtual double dtReal(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� �������� ������.
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>�������� ������</returns>
		virtual String ^ fntName(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ������ ������.
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>������ ������</returns>
		virtual int fntSize(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ����� ������.
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>����� ������</returns>
		virtual byte fntStyle(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ���� ������.
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>���� ������</returns>
		virtual int fntColor(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� ������.
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>��������� ������</returns>
		virtual byte fntCharSet(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� �� ���������������� ������ ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>��������� �� ���������������� ������</returns>
		virtual IntPtr elGetData(IntPtr ptr) abstract;

		/// <summary>
		/// ����������� �������� ��������� �� ���������������� ������.
		/// </summary>
		/// <param name="eptr">��������� �� �������</param>
		/// <param name="dptr">��������� �� ���������������� ������</param>
		virtual void elSetData(IntPtr eptr, IntPtr dptr) abstract;

		/// <summary>
		/// ���������� ��� ������ �����.
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>��� ������</returns>
		virtual DataType ptGetDataType(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ������������� ������������� ���������� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>��������� �� ���������</returns>
		virtual IntPtr elGetParent(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ���������� ������� � ������ �������(�� ������ �������).
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns>���������� ������� (������ 0)</returns>
		[Obsolete]
		virtual int elGetPropertyListCount(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� �� �������� �� ������ ������� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="index">������ ��������</param>
		/// <returns>��������� �� ��������</returns>
		[Obsolete]
		virtual IntPtr elGetPropertyListItem(IntPtr ptr, int index) abstract;

		/// <summary>
		/// ���������� ��� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��� ��������</returns>
		[Obsolete]
		virtual String ^ plGetName(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� �������� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>�������� ��������</returns>
		[Obsolete]
		virtual String ^ plGetInfo(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� �������� ������ ��������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>�������� ������ ��������</returns>
		[Obsolete]
		virtual String ^ plGetGroup(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� �� �������� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��������� �� ��������</returns>
		[Obsolete]
		virtual IntPtr plGetProperty(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��������� �� ������������ ������� ��������.
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns>��������� �� �������</returns>
		[Obsolete]
		virtual IntPtr plGetOwner(IntPtr ptr) abstract;

		/// <summary>
		/// ���������� �������� �����.
		/// </summary>
		/// <param name="ptr">��������� �� �����</param>
		/// <returns>�������� �����</returns>
		virtual String ^ ptGetInfo(IntPtr ptr) abstract;

		������
		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <param name="propName"></param>
		/// <returns></returns>
		virtual int propGetLinkedElement(IntPtr ptr, String ^ propName) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="ptr">��������� �� ��������</param>
		/// <returns></returns>
		virtual int propIsTranslate(IntPtr ptr, IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="ptr">��������� �� ��������</param>
		/// <param name="info"></param>
		/// <returns></returns>
		virtual int propGetLinkedElementInfo(IntPtr ptr, IntPtr ptr, String ^ info) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual int elGetSDKByIndex(IntPtr ptr, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns></returns>
		virtual int elGetSDKCount(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="index"></param>
		/// <returns></returns>
		virtual String ^ elGetSDKName(IntPtr ptr, int index) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">��������� �� ���������</param>
		/// <returns></returns>
		virtual int sdkGetParent(IntPtr id) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns></returns>
		virtual String ^ elGetInterface(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns></returns>
		virtual String ^ elGetInherit(IntPtr ptr) abstract;

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
		/// <param name="ptr">��������� �� �������</param>
		/// <param name="text"></param>
		/// <returns></returns>
		virtual int _Error(int line, IntPtr ptr, String ^ text) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">��������� �� �������</param>
		/// <returns></returns>
		virtual int elGetGroup(IntPtr ptr) abstract;

		/// <summary>
		/// 
		/// </summary>
		/// <param name="ptr">��������� �� ��������</param>
		/// <param name="fileName"></param>
		/// <returns></returns>
		virtual int propSaveToFile(IntPtr ptr, String ^ fileName) abstract;
	};
}