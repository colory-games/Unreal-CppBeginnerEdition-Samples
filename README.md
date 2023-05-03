# 『アンリアる！C++編』サンプルプロジェクト

本リポジトリでは、技術書『アンリアる！ C++編』で作成するサンプルプロジェクトのソースコードを公開しています。

## サンプルプロジェクトの利用方法

### 前提条件

サンプルプロジェクトを利用するためには、Windowsで次のソフトウェアがインストールされている必要があります。

* Unreal Engine 5.1
* Visual Studio 2019

### 利用手順

1. 最初に、[Releaseページ](https://github.com/colory-games/Unreal-CppBeginnerEdition-Samples/releases) から書籍の版数に対応するリリースページに移動します。
   |書籍の版数|リリースページ|
   |---|---|
   |初版||

1. `MyUECppProject.zip` をダウンロードし、解凍します。
1. ディレクトリ `MyUECppProject` に移動して `MyUECppProject.uproject` を右クリックします。
1. メニューから [Generate Visual Studio project files] を実行します。
1. Visual Studioのプロジェクトファイル `MyUECppProject.sln` が作成されるため、ファイルを開きます。  
1. Visual Studioが起動するため、メニューから [Build] > [Build Solution] を実行してプロジェクトをビルドします。
1. ビルドが完了したら、`MyUECppProject.uproject` を実行してUnreal Engineエディタを起動します。  
1. エディタが起動すると、サンプルプロジェクトで作成したアセットなどを利用できるようになります。

## 更新履歴

[CHANGELOG.md](CHANGELOG.md) を参照してください。

## バグ報告や議論

サンプルプロジェクトにバグが存在する場合は、[Issue](https://github.com/colory-games/Unreal-CppBeginnerEdition-Samples/issues) や [Discord](https://discord.gg/F9cRxfAuJd) などで報告いただけると助かります。
