#pragma once
#include <Windows.h>
#include <string>
#include <stringapiset.h>
#include "DirectXTex/DirectXTex.h"

// �e�N�X�`���R���o�[�^�[
class TextureConverter
{
public:

	/// <summary>
	/// �e�N�X�`����WIC����DDS�ɕϊ�����
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	/// <param name="numOptions">�I�v�V�����̐�</param>
	/// <param name="options">�I�v�V�����z��</param>
	void ConverterTextureWICToDDS(const std::string& filePath, int numOptions = 0, char* options[] = nullptr);

	/// <summary>
	/// �e�N�X�`���ǂݍ���
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	void LoadWICTextureFromFile(const std::string& filePath);

public:
	/// <summary>
	/// �g�p���@���o�́i�\���j����
	/// </summary>
	static void OutputUsage();

private:

	/// <summary>
	/// �}���`�o�C�g����������C�h������ɕϊ�
	/// </summary>
	/// <param name="mString">�}���`�o�C�g������</param>
	/// <returns>���C�h������</returns>
	static std::wstring ConverMultByteStringToWideString(const std::string& mString);

private:

	/// <summary>
	/// �t�H���_�p�X�ƃt�@�C�����𕪗�����
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	void SeparateFilePath(const std::wstring& filePath);

	/// <summary>
	/// DDS�t�@�C���Ƃ��ăt�@�C�������o��
	/// </summary>
	/// <param name="numOptions">�I�v�V�����̐�</param>
	/// <param name="options">�I�v�V�����z��</param>
	void SaveDDSTextureToFile(int numOptions,char* options[]);

private:
	// �摜�̏��
	DirectX::TexMetadata metaData_;

	// �摜�C���[�W�̃R���e�i
	DirectX::ScratchImage scratchImage_;

	// �f�B���N�g���p�X
	std::wstring directoryPath_;

	// �t�@�C����
	std::wstring fileName_;

	// �t�@�C���g���q
	std::wstring fileExt_;

	HRESULT result;
};

