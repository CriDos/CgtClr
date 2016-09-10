#pragma once

#include <Windows.h>
#include "Share.h"

using namespace System;
using namespace CgtClr::Share;

namespace CgtClr {
	public ref class BaseCgt abstract
	{
	public:
		void RunCodeGen(const String ^codeGenPath, Object ^ rootContainer);

		/// <summary>
		/// ������� ���������� ��������� � ����������.
		/// </summary>
		/// <param name="c">���������</param>
		/// <returns>���������� ���������� ��������� � ����������</returns>
		virtual int sdkGetCount(Object ^ c) abstract;

		/// <summary>
		/// ���������� ������� �� ��� Z-���������(�������) � ����������.
		/// </summary>
		/// <param name="c">���������</param>
		/// <param name="index">Z-���������(������) ��������</param>
		/// <returns>���������� �������</returns>
		virtual Object ^ sdkGetElement(Object ^ c, int index) abstract;

		/// <summary>
		/// ���������� ������� �� �����.
		/// </summary>
		/// <param name="c">���������</param>
		/// <param name="name">��� ��������</param>
		/// <returns>���������� �������</returns>
		virtual Object ^ sdkGetElementName(Object ^ c, String ^ name) abstract;

		/// <summary>
		/// ���������� ����� ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� ����� ��������</returns>
		virtual ElementFlags elGetFlag(Object ^ e) abstract;

		/// <summary>
		/// ���������� ���������� ������� ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� ���������� ������� ��������</returns>
		virtual int elGetPropCount(Object ^ e) abstract;

		/// <summary>
		/// ���������� �������� �������� �� ������� � ���������� ������� �� INI.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="index">������ ��������</param>
		/// <returns>���������� ��������</returns>
		virtual Object ^ elGetProperty(Object ^ e, int index) abstract;

		/// <summary>
		/// ���������� True, ���� �������� �������� ��������� � �������� �� ��������� � INI �����, ����� False.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="index">������ ��������</param>
		/// <returns>���������� ��������� ��������</returns>
		virtual bool elIsDefProp(Object ^ e, int index) abstract;

		/// <summary>
		/// ����������� �������� ���������� ���.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="name">��� ��������</param>
		/// <returns>���������� �������</returns>
		virtual Object ^ elSetCodeName(Object ^ e, String ^ name) abstract;

		/// <summary>
		/// ���������� ���������� ��� ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� ��� ��������</returns>
		virtual String ^ elGetCodeName(Object ^ e) abstract;

		/// <summary>
		/// ���������� ��� ������ ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� ��� ������ ��������</returns>
		virtual String ^ elGetClassName(Object ^ e) abstract;

		/// <summary>
		/// ���������� ���������� ���� Sub �� ����������������� INI-����� ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� ���������� ���� Sub</returns>
		virtual String ^ elGetInfSub(Object ^ e) abstract;

		/// <summary>
		/// ���������� ����� ���������� ������� ����� � ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� ���������� ������� �����</returns>
		virtual int elGetPtCount(Object ^ e) abstract;

		/// <summary>
		/// ���������� ����� �� � �������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="index">������ �����</param>
		/// <returns>���������� �����</returns>
		virtual Object ^ elGetPt(Object ^ e, int index) abstract;

		/// <summary>
		/// ���������� ����� �� � �����.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="name">��� �����</param>
		/// <returns>���������� �����</returns>
		virtual Object ^ elGetPtName(Object ^ e, String ^ name) abstract;

		/// <summary>
		/// ���������� ������ ������ ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>������ ������ ��������</returns>
		virtual ElementClass elGetClassIndex(Object ^ e) abstract;

		/// <summary>
		/// ���������� ��������� ��������.
		/// ���� ������� �� �������� ���������, ������������ ������� �������� �������� ����������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>��������� ��� �������</returns>
		virtual Object ^ elGetSDK(Object ^ e) abstract;

		/// <summary>
		/// ���������, �������� �� ������� �������, ���� �� ���� ���������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���� ������� �������� ������� ��� �� ���� ��������� - true, ����� - false</returns>
		virtual bool elLinkIs(Object ^ e) abstract;

		/// <summary>
		/// ���������� ������������� �������� ��������(���, �� ������� ��������� ������).
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� �������</returns>
		virtual Object ^ elLinkMain(Object ^ e) abstract;

		/// <summary>
		/// �������� � ���������� "X" � "Y", ������� �������� � ��������� ����.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="X">������� �� �����������</param>
		/// <param name="Y">������� �� ���������</param>
		virtual void elGetPos(Object ^ e, int % X, int % Y) abstract;

		/// <summary>
		/// �������� � ���������� "W" � "H", ������� ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="W">������</param>
		/// <param name="H">������</param>
		virtual void elGetSize(Object ^ e, int % W, int % H) abstract;

		/// <summary>
		/// ���������� ������������� ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>������������� ��������</returns>
		[Obsolete]
		virtual int elGetEID(Object ^ e) abstract;

		/// <summary>
		/// ���������� ����� � ������� ��������� ���������.
		/// </summary>
		/// <param name="p">�����</param>
		/// <returns>���������� �����</returns>
		virtual Object ^ ptGetLinkPoint(Object ^ p) abstract;

		/// <summary>
		/// ���������� ����� � ������� ��������� ���������,
		/// ��� ����� ����� ������� � �����.
		/// </summary>
		/// <param name="p">�����</param>
		/// <returns>���������� �����</returns>
		virtual Object ^ ptGetRLinkPoint(Object ^ p) abstract;

		/// <summary>
		/// ���������� ��� �����.
		/// </summary>
		/// <param name="p">�����</param>
		/// <returns>��� �����</returns>
		virtual PointType ptGetType(Object ^ p) abstract;

		/// <summary>
		/// ���������� ��� �����.
		/// </summary>
		/// <param name="p">�����</param>
		/// <returns>��� �����</returns>
		virtual String ^ ptGetName(Object ^ p) abstract;

		/// <summary>
		/// ���������� ������������� �������� �����.
		/// </summary>
		/// <param name="p">�����</param>
		/// <returns>���������� �������</returns>
		virtual Object ^ ptGetParent(Object ^ p) abstract;

		/// <summary>
		/// ���������� ������ ����� ������������ ����� ���� �� ����.
		/// </summary>
		/// <param name="p">�����</param>
		/// <returns>������ �����</returns>
		virtual int ptGetIndex(Object ^ p) abstract;

		/// <summary>
		/// ���������� ������� ����� ����� ������������ �����(��� CI_DPElement).
		/// </summary>
		/// <param name="p">�����</param>
		/// <returns>����� ����� ������������ �����</returns>
		virtual String ^ pt_dpeGetName(Object ^ p) abstract;

		/// <summary>
		/// ���������� ��� ��������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>��� ��������</returns>
		virtual DataType propGetType(Object ^ p) abstract;

		/// <summary>
		/// ���������� ��� ��������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>��� ��������</returns>
		virtual String ^ propGetName(Object ^ p) abstract;

		/// <summary>
		/// ���������� �������� ��������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>��������</returns>
		virtual Object ^ propGetValue(Object ^ p) abstract;

		/// <summary>
		/// ���������� �������� �������� � ������� byte.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>�������� ��������</returns>
		virtual byte propToByte(Object ^ p) abstract;

		/// <summary>
		/// ���������� �������� �������� � ������� int.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>�������� ��������</returns>
		virtual int propToInteger(Object ^ p) abstract;

		/// <summary>
		/// ���������� �������� �������� � ������� double.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>�������� ��������</returns>
		virtual double propToReal(Object ^ p) abstract;

		/// <summary>
		/// ���������� �������� �������� � ������� String.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns></returns>
		virtual String ^ propToString(Object ^ p) abstract;

		/// <summary>
		/// ��������� ���� � ������ ��������.
		/// </summary>
		/// <param name="name">���� � �����</param>
		/// <returns>������ ���������� 0</returns>
		virtual int resAddFile(String ^ filePath) abstract;

		/// <summary>
		/// ��������� ������ �� �������� � �������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>��� ���������� �����</returns>
		virtual String ^ resAddIcon(Object ^ p) abstract;

		/// <summary>
		/// ��������� ������ � �������.
		/// </summary>
		/// <param name="str">������ ��� ����������</param>
		/// <returns>��� ���������� �����</returns>
		virtual String ^ resAddStr(String ^ str) abstract;

		/// <summary>
		/// ��������� ����� ������ �� �������� � �������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>��� ���������� �����</returns>
		virtual String ^ resAddStream(Object ^ p) abstract;

		/// <summary>
		///  ��������� Wave ���� �� �������� � �������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>��� ���������� �����</returns>
		virtual String ^ resAddWave(Object ^ p) abstract;

		/// <summary>
		/// ��������� �������� �� �������� � �������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>��� ���������� �����</returns>
		virtual String ^ resAddBitmap(Object ^ p) abstract;

		/// <summary>
		/// ��������� ���� �� �������� � �������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>��� ���������� �����</returns>
		[Obsolete]
		virtual String ^ resAddMenu(Object ^ p) abstract;

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
		/// <param name="a">������</param>
		/// <returns>���������� ��������� �������</returns>
		virtual int arrCount(Object ^ a) abstract;

		/// <summary>
		/// ���������� ��� ��������� � �������.
		/// </summary>
		/// <param name="a">������</param>
		/// <returns>��� ��������� �������</returns>
		virtual DataType arrType(Object ^ a) abstract;

		/// <summary>
		/// ���������� ��� �������� �� ������� �������.
		/// </summary>
		/// <param name="a">������</param>
		/// <param name="index">������ �������� �������</param>
		/// <returns>��� �������� �������</returns>
		virtual String ^ arrItemName(Object ^ a, int index) abstract;

		/// <summary>
		/// ���������� ������ �������� �������.
		/// </summary>
		/// <param name="a">������</param>
		/// <param name="index">������ �������� �������</param>
		/// <returns>������ �������� �������</returns>
		[Obsolete]
		virtual Object ^ arrItemData(Object ^ a, int index) abstract;

		/// <summary>
		/// ���������� ������� ������� ��� �������� �� ��������� �������� �������.
		/// </summary>
		/// <param name="a">������</param>
		/// <param name="index">������ �������� �������</param>
		/// <returns>��������</returns>
		virtual Object ^ arrGetItem(Object ^ a, int index) abstract;

		/// <summary>
		/// ���������� ������ ������� ���������� �����.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>
		/// ���� ����� ������ ���� - ������� ��������.
		/// ���� ����� ����� ���� - ������� ���������.
		/// </returns>
		virtual int isDebug(Object ^ e) abstract;

		/// <summary>
		/// ���������� ��� ������.
		/// </summary>
		/// <param name="d">������</param>
		/// <returns>��� ������</returns>
		virtual DataType dtType(Object ^ d) abstract;

		/// <summary>
		/// ���������� ������ � ������� String.
		/// </summary>
		/// <param name="d">������</param>
		/// <returns>������</returns>
		virtual String ^ dtStr(Object ^ d) abstract;

		/// <summary>
		/// ���������� ������ � ������� int.
		/// </summary>
		/// <param name="d">������</param>
		/// <returns>�����</returns>
		virtual int dtInt(Object ^ d) abstract;

		/// <summary>
		/// ���������� ������ � ������� double.
		/// </summary>
		/// <param name="d">������</param>
		/// <returns>������� �����</returns>
		virtual double dtReal(Object ^ d) abstract;

		/// <summary>
		/// ���������� �������� ������.
		/// </summary>
		/// <param name="f">�����</param>
		/// <returns>�������� ������</returns>
		virtual String ^ fntName(Object ^ f) abstract;

		/// <summary>
		/// ���������� ������ ������.
		/// </summary>
		/// <param name="f">�����</param>
		/// <returns>������ ������</returns>
		virtual int fntSize(Object ^ f) abstract;

		/// <summary>
		/// ���������� ����� ������.
		/// </summary>
		/// <param name="f">�����</param>
		/// <returns>����� ������</returns>
		virtual byte fntStyle(Object ^ f) abstract;

		/// <summary>
		/// ���������� ���� ������.
		/// </summary>
		/// <param name="f">�����</param>
		/// <returns>���� ������</returns>
		virtual int fntColor(Object ^ f) abstract;

		/// <summary>
		/// ���������� ��������� ������.
		/// </summary>
		/// <param name="f">�����</param>
		/// <returns>��������� ������</returns>
		virtual byte fntCharSet(Object ^ f) abstract;

		/// <summary>
		/// ���������� ��������� �� ���������������� ������ ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>��������� �� ���������������� ������</returns>
		virtual IntPtr elGetData(Object ^ e) abstract;

		/// <summary>
		/// ����������� �������� ��������� �� ���������������� ������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="ptr">��������� �� ���������������� ������</param>
		virtual void elSetData(Object ^ e, IntPtr ptr) abstract;

		/// <summary>
		/// ���������� ��� ������ �����.
		/// </summary>
		/// <param name="p">�����</param>
		/// <returns>��� ������</returns>
		virtual DataType ptGetDataType(Object ^ p) abstract;

		/// <summary>
		/// ���������� ������������ ��������� ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������</returns>
		virtual Object ^ elGetParent(Object ^ e) abstract;

		/// <summary>
		/// ���������� ���������� ������� � ������ �������(�� ������ �������).
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� ������� (������ 0)</returns>
		[Obsolete]
		virtual int elGetPropertyListCount(Object ^ e) abstract;

		/// <summary>
		/// ���������� �������� �� ������ ������� ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="index">������ ��������</param>
		/// <returns>��������</returns>
		[Obsolete]
		virtual Object ^ elGetPropertyListItem(Object ^ e, int index) abstract;

		/// <summary>
		/// ���������� ��� ��������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>��� ��������</returns>
		[Obsolete]
		virtual String ^ plGetName(Object ^ p) abstract;

		/// <summary>
		/// ���������� �������� ��������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>�������� ��������</returns>
		[Obsolete]
		virtual String ^ plGetInfo(Object ^ p) abstract;

		/// <summary>
		/// ���������� �������� ������ ��������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>�������� ������ ��������</returns>
		[Obsolete]
		virtual String ^ plGetGroup(Object ^ p) abstract;

		/// <summary>
		/// ���������� �������� ��������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>��������</returns>
		[Obsolete]
		virtual Object ^ plGetProperty(Object ^ p) abstract;

		/// <summary>
		/// ���������� ������������ ������� ��������.
		/// </summary>
		/// <param name="p">��������</param>
		/// <returns>���������� �������</returns>
		[Obsolete]
		virtual Object ^ plGetOwner(Object ^ p) abstract;

		/// <summary>
		/// ���������� �������� �����.
		/// </summary>
		/// <param name="p">�����</param>
		/// <returns>�������� �����</returns>
		virtual String ^ ptGetInfo(Object ^ p) abstract;

		/// <summary>
		///	���������� �������, �������������� � ���������� ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="propName">��� ��������</param>
		/// <returns>���������� �������</returns>
		virtual Object ^ propGetLinkedElement(Object ^ e, String ^ propName) abstract;

		/// <summary>
		/// ���������� 1, ���� �������� �������� �� �������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="pp">��������</param>
		/// <returns>������ ��������</returns>
		[Obsolete]
		virtual int propIsTranslate(Object ^ e, Object ^ pp) abstract;

		/// <summary>
		/// ���������� �������, �������������� � ���������� ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="pp">��������</param>
		/// <param name="info">
		/// ��� ���������� ��������.
		/// ��������, � ������ �� INI: FormFastening=����� ��� �������� �������|20|(empty)|ControlManager
		/// ControlManager - ��� ����������, ������� �� ������ �������� � info.</param>
		/// <returns></returns>
		virtual Object ^ propGetLinkedElementInfo(Object ^ e, Object ^ pp, String ^ info) abstract;

		/// <summary>
		/// ���������� ��������� �� ��� ������� �� ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="index">������</param>
		/// <returns>���������</returns>
		virtual Object ^ elGetSDKByIndex(Object ^ e, int index) abstract;

		/// <summary>
		/// ���������� ���������� ����������� ������������ ��������(CI_PolyMulti).
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� �����������</returns>
		virtual int elGetSDKCount(Object ^ e) abstract;

		/// <summary>
		/// ���������� ��� ���������� �� �������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <param name="index">������ ����������</param>
		/// <returns>��� ����������</returns>
		virtual String ^ elGetSDKName(Object ^ e, int index) abstract;

		/// <summary>
		/// ���������� ������� �������� ��� ���������� ����������, ��� null, ���� ��������� �� ����� ��������.
		/// </summary>
		/// <param name="c">���������</param>
		/// <returns>���������� ������� ��� null</returns>
		virtual Object ^ sdkGetParent(Object ^ c) abstract;

		/// <summary>
		/// ���������� ����������, ��������������� ���������.   
		/// ���������� ���� Interfaces= �� ������������ ��������
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� ������</returns>
		virtual String ^ elGetInterface(Object ^ e) abstract;

		/// <summary>
		/// ���������� ������ �������, �� ������� ����������� �������.
		/// ���������� ���� Inherit= �� ������������ ��������.
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� ������</returns>
		virtual String ^ elGetInherit(Object ^ e) abstract;
		/// <summary>
		/// ���������� 1, ���� ������ �������� ����, � 0 � ��������� ������.
		/// </summary>
		/// <returns>���������� 1 ��� 0</returns>
		virtual int resEmpty() abstract;

		/// <summary>
		/// ������������� ������� ��� ���� ��������.
		/// </summary>
		/// <param name="pref">�������</param>
		/// <returns>������ ���������� 0</returns>
		[Obsolete]
		virtual int resSetPref(String ^ pref) abstract;

		/// <summary>
		/// ��������� ���������� �� ������ � ���������� �����.
		/// </summary>
		/// <param name="num_line">����� ������</param>
		/// <param name="e">�������</param>
		/// <param name="text">�����</param>
		/// <returns>������ ���������� 0</returns>
		virtual int _Error(int num_line, Object ^ e, String ^ text) abstract;

		/// <summary>
		/// ���������� ������������� ������, � ������� ����������� ������� � 0, ���� ������ �����������
		/// </summary>
		/// <param name="e">�������</param>
		/// <returns>���������� �������������</returns>
		[Obsolete]
		virtual int elGetGroup(Object ^ e) abstract;

		/// <summary>
		/// ��������� ������ �������� � ����.
		/// </summary>
		/// <param name="pp">��������</param>
		/// <param name="fileName">��� �����</param>
		/// <returns>������ ���������� 0</returns>
		[Obsolete]
		virtual int propSaveToFile(Object ^ pp, String ^ fileName) abstract;
	};
}