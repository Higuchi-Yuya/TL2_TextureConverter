#pragma once
#include <Windows.h>
#include <string>
#include <stringapiset.h>

// テクスチャコンバーター
class TextureConverter
{
public:

	/// <summary>
	/// テクスチャをWICからDDSに変換する
	/// </summary>
	/// <param name="filePath">ファイルパス</param>
	void ConverterTextureWICToDDS(const std::string& filePath);

	/// <summary>
	/// テクスチャ読み込み
	/// </summary>
	/// <param name="filePath">ファイルパス</param>
	void LoadWICTextureFromFile(const std::string& filePath);

private:

	/// <summary>
	/// マルチバイト文字列をワイド文字列に変換
	/// </summary>
	/// <param name="mString">マルチバイト文字列</param>
	/// <returns>ワイド文字列</returns>
	static std::wstring ConverMultByteStringToWideString(const std::string& mString);

};

