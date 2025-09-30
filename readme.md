要件 https://cdn.intra.42.fr/pdf/pdf/173711/en.subject.pdf

https://web.archive.org/web/20250429115023/https://42-evaluation-sheets-hub.vercel.app/Cursus/CPP06/

原文
General rules

和訳
一般規則

意味
課題全体に共通する基本的なルール。

---

原文
Compiling

和訳
コンパイル

意味
ソースコードをコンパイルする際のルール。

---

原文
• Compile your code with c++ and the flags -Wall -Wextra -Werror

和訳
・コードは c++ でコンパイルし、-Wall -Wextra -Werror フラグを付けること。

意味
警告をすべてエラーとして扱う厳密なコンパイルを要求している。

---

原文
• Your code should still compile if you add the flag -std=c++98

和訳
・-std=c++98 フラグを追加してもコンパイルできるようにすること。

意味
C++98規格に準拠したコードでなければならない。

---

原文
Formatting and naming conventions

和訳
フォーマットと命名規則

意味
ファイルやクラス、関数などの命名や書き方のルール。

---

原文
• The exercise directories will be named this way: ex00, ex01, ... , exn

和訳
・課題のディレクトリは ex00, ex01, ... , exn のように命名すること。

意味
課題ごとのフォルダ名の統一規則。

---

原文
• Name your files, classes, functions, member functions and attributes as required in the guidelines.

和訳
・ファイル、クラス、関数、メンバ関数、属性はガイドラインで指定された通りに命名すること。

意味
指示に従った正しい名前を付ける必要がある。

---

原文
• Write class names in UpperCamelCase format. Files containing class code will always be named according to the class name. For instance: ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you have a header file containing the definition of a class "BrickWall" standing for a brick wall, its name will be BrickWall.hpp.

和訳
・クラス名はアッパーキャメルケース（先頭大文字）で書くこと。クラスを含むファイルは必ずそのクラス名に従って命名すること。例: ClassName.hpp / ClassName.h, ClassName.cpp, ClassName.tpp。たとえばレンガの壁を表すクラス "BrickWall" を定義するヘッダファイルは BrickWall.hpp となる。

意味
クラスとファイル名を統一し、読みやすくする規則。

---

原文
• Unless specified otherwise, every output message must end with a newline character and be displayed to the standard output.

和訳
・特に指定がない限り、すべての出力メッセージは改行で終わり、標準出力に表示されること。

意味
出力形式に関するルール。

---

原文
• Goodbye Norminette! No coding style is enforced in the C++ modules. You can follow your favorite one. But keep in mind that code your peer evaluators can’t understand is code they can’t grade. Do your best to write clean and readable code.

和訳
・Norminette とはお別れ！C++ モジュールではコーディング規約は強制されない。好きなスタイルを使ってよい。ただし、評価者が理解できないコードは採点できないので、読みやすくきれいなコードを書くこと。

意味
自由なコーディングスタイルを認めるが、可読性を確保する必要がある。

---

原文
Allowed/Forbidden

和訳
使用可能・禁止事項

意味
C++で使えるものと禁止されているもの。

---

原文
You are not coding in C anymore. Time to C++! Therefore:

和訳
もうC言語ではなくC++でコードを書く時だ。したがって：

意味
C++の機能を積極的に使うべきという前提。

---

原文
• You are allowed to use almost everything from the standard library. Thus, instead of sticking to what you already know, it would be smart to use the C++-ish versions of the C functions you are used to as much as possible.

和訳
・標準ライブラリのほとんどを使用できる。したがって、既存のC関数にこだわるのではなく、できる限りC++向けに用意されたバージョンを使うことが望ましい。

意味
C++標準ライブラリを積極的に利用する推奨。

---

原文
• However, you can’t use any other external library. It means C++11 (and derived forms) and Boost libraries are forbidden. The following functions are forbidden too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and that’s it.

和訳
・ただし、その他の外部ライブラリは使用できない。つまり、C++11（および派生形式）やBoostライブラリは禁止されている。また、*printf()、*alloc()、free() 関数も禁止されている。もし使用した場合、成績は0点となる。

意味
利用できるのはC++98標準ライブラリのみであり、C標準関数や新しいC++ライブラリは禁止。

---

原文
• Note that unless explicitly stated otherwise, the using namespace <ns_name> and friend keywords are forbidden. Otherwise, your grade will be -42.

和訳
・特に明示されていない限り、`using namespace <ns_name>` と `friend` キーワードは禁止。違反すると成績は -42。

意味
名前空間の一括指定と friend の使用は禁止されている。

---

原文
• You are allowed to use the STL only in Modules 08 and 09. That means: no Containers(vector/list/map, and so forth) and no Algorithms(anything that requires including the <algorithm> header) until then. Otherwise, your grade will be -42.

和訳
・STLを使えるのはモジュール08と09のみ。それ以前ではコンテナ（vector、list、mapなど）やアルゴリズム（`<algorithm>` ヘッダが必要なもの）は禁止。違反すると成績は -42。

意味
STLの使用は後半モジュールに限定されている。

---

原文
A few design requirements

和訳
いくつかの設計要件

意味
プログラム設計における必須条件。

---

原文
• Memory leakage occurs in C++ too. When you allocate memory (by using the new keyword), you must avoid memory leaks.

和訳
・C++でもメモリリークは発生する。`new` を使ってメモリを確保した場合、リークを避けること。

意味
動的メモリ管理は責任を持って解放する必要がある。

---

原文
• From Module 02 to Module 09, your classes must be designed in the Orthodox Canonical Form, except when explicitly stated otherwise.

和訳
・モジュール02から09までは、クラスは正統的カノニカルフォーム（Orthodox Canonical Form）で設計しなければならない。ただし明示的に例外がある場合を除く。

意味
コピーコンストラクタ、代入演算子、デストラクタ、コンストラクタを正しく実装すること。

---

原文
• Any function implementation put in a header file (except for function templates) means 0 to the exercise.

和訳
・関数の実装をヘッダファイルに書いた場合（関数テンプレートを除く）、課題は0点になる。

意味
関数定義はヘッダに書かず、cppファイルに分離する必要がある。

---

原文
• You should be able to use each of your headers independently from others. Thus, they must include all the dependencies they need. However, you must avoid the problem of double inclusion by adding include guards. Otherwise, your grade will be 0.

和訳
・各ヘッダファイルは他に依存せず単独で使用できるようにすべき。そのため必要な依存をすべて含めること。ただし二重インクルードの問題を避けるため、インクルードガードを追加する必要がある。違反すると成績は0。

意味
ヘッダは独立性を持ち、かつガードを必ず付ける。

---

原文
Read me

和訳
注意事項

意味
課題を進める上での追加のヒント。

---

原文
• You can add some additional files if you need to (i.e., to split your code). As these assignments are not verified by a program, feel free to do so as long as you turn in the mandatory files.

和訳
・必要であれば追加のファイルを作成してもよい（コード分割など）。課題はプログラムで自動検証されないので、必須ファイルを提出する限り自由にしてよい。

意味
コード整理のための追加ファイル作成は許可されている。

---

原文
• Sometimes, the guidelines of an exercise look short but the examples can show requirements that are not explicitly written in the instructions.

和訳
・課題の指示は短く見えることがあるが、例の中に明示されていない要件が含まれている場合がある。

意味
例もよく読んで暗黙の要件を把握する必要がある。

---

原文
• Read each module completely before starting! Really, do it.

和訳
・始める前に必ず各モジュールを最後まで読め！本当にやれ。

意味
モジュール全体を事前に把握することが求められる。

---

原文
• By Odin, by Thor! Use your brain!!!

和訳
・オーディンにかけて、トールにかけて！頭を使え！！！

意味
冗談を交えた強調。自分で考える力を使えという意味。

---

原文
Regarding the Makefile for C++ projects, the same rules as in C apply (see the Norm chapter about the Makefile).

和訳
・C++プロジェクトのMakefileについては、Cの場合と同じルールが適用される（Makefileに関するNormの章を参照）。

意味
Makefile作成ルールはC課題と共通。

---

原文
You will have to implement a lot of classes. This can seem tedious, unless you’re able to script your favorite text editor.

和訳
・多数のクラスを実装する必要がある。エディタでスクリプトを使えないなら退屈に感じるだろう。

意味
効率化ツールを使うと楽になる。

---

原文
You are given a certain amount of freedom to complete the exercises. However, follow the mandatory rules and don’t be lazy. You would miss a lot of useful information! Do not hesitate to read about theoretical concepts.

和訳
・課題を進める上である程度の自由は与えられている。ただし必須ルールは守り、怠けてはいけない。有益な情報を見逃すことになる！理論的な概念についても積極的に読むべきだ。

意味
自由度はあるが必須規則は厳守し、学習機会を活かすように促している。

---

原文
Chapter III

和訳
第3章

意味
章の区切りタイトル。

---

原文
Additional Rule

和訳
追加規則

意味
既存ルールに加えて適用される特別な規則。

---

原文
The following rule applies to the entire module and is mandatory.

和訳
以下の規則はモジュール全体に適用され、必須である。

意味
このルールはすべての課題に共通して守らなければならない。

---

原文
For each exercise, type conversion must be handled using a specific type of casting.

和訳
各課題では、型変換を必ず特定のキャスト方式を用いて行わなければならない。

意味
C++のキャスト（static_cast, dynamic_cast, const_cast, reinterpret_cast）を適切に選んで使う必要がある。

---

原文
Your choice will be reviewed during the defense.

和訳
防衛（口頭試問）で、その選択が確認される。

意味
どのキャストを使ったかを口頭試験で説明・正当化できる必要がある。

---


原文
Chapter V

和訳
第5章

意味
章タイトル。

---

原文
Exercise 00: Conversion of scalar types

和訳
課題00: スカラ型の変換

意味
最初の課題はスカラ型変換に関するもの。

---

原文
Turn-in directory: ex00/

和訳
提出ディレクトリ: ex00/

意味
提出するフォルダ名の指定。

---

原文
Files to turn in: Makefile, *.cpp, *.{h, hpp}

和訳
提出ファイル: Makefile, *.cpp, *.{h, hpp}

意味
提出が必要なファイルの種類。

---

原文
Allowed functions: Any function to convert from a string to an int, a float, or a double. This will help, but won’t do the whole job.

和訳
使用可能な関数: 文字列を int, float, double に変換する関数は使用可能。ただしそれだけでは課題を全て解決できない。

意味
標準の数値変換関数は使えるが、ロジック全体を作り込む必要がある。

---

原文
Write a class ScalarConverter that will contain only one static method "convert" that will take as a parameter a string representation of a C++ literal in its most common form and output its value in the following series of scalar types:

和訳
`ScalarConverter` クラスを作成せよ。このクラスは静的メソッド `convert` のみを持ち、引数としてC++リテラルの文字列表現を受け取り、以下のスカラ型に変換して出力する：

意味
クラスはインスタンス不要で、静的メソッド `convert` だけを実装する。

---

原文
• char
• int
• float
• double

和訳
・char
・int
・float
・double

意味
変換対象の4種類のスカラ型。

---

原文
As this class doesn’t need to store anything at all, it must not be instantiable by users.

和訳
このクラスはデータを保持する必要がないため、ユーザーがインスタンス化できないようにすること。

意味
コンストラクタをprivateにするなどしてインスタンス化を禁止する。

---

原文
Except for char parameters, only the decimal notation will be used.

和訳
char型以外のパラメータは、10進数表記のみを使用する。

意味
16進や8進は対象外。

---

原文
Examples of char literals: ’c’, ’a’, ...

和訳
charリテラルの例: 'c', 'a' ...

意味
文字リテラル入力の例。

---

原文
To make things simple, please note that non-displayable characters shouldn’t be used as inputs. If a conversion to char is not displayable, print an informative message.

和訳
簡単のため、表示できない文字は入力に使わないこと。変換結果が表示不可能なcharの場合は、その旨を示すメッセージを出力せよ。

意味
制御文字などは除外、表示できないときは「Non displayable」と表示。

---

原文
Examples of int literals: 0, -42, 42...

和訳
intリテラルの例: 0, -42, 42...

意味
整数入力例。

---

原文
Examples of float literals: 0.0f, -4.2f, 4.2f...
You have to handle these pseudo-literals as well (you know, for science): -inff, +inff, and nanf.

和訳
floatリテラルの例: 0.0f, -4.2f, 4.2f...
また、以下の擬似リテラルも扱うこと: -inff, +inff, nanf。

意味
浮動小数点の擬似的な特別値も対応必須。

---

原文
Examples of double literals: 0.0, -4.2, 4.2...
You have to handle these pseudo-literals as well (you know, for fun): -inf, +inf, and nan.

和訳
doubleリテラルの例: 0.0, -4.2, 4.2...
また、以下の擬似リテラルも扱うこと: -inf, +inf, nan。

意味
double版の特別値にも対応。

---

原文
Write a program to test that your class works as expected.

和訳
クラスが期待通り動作することを確認するテストプログラムを書け。

意味
`main`などを作って動作を確認。

---

原文
You have to first detect the type of the literal passed as a parameter, convert it from string to its actual type, then convert it explicitly to the three other data types. Lastly, display the results as shown below.

和訳
まず渡されたリテラルの型を判定し、文字列から実際の型に変換する。その後、他の3種類の型に明示的に変換し、最後に指定の形式で結果を出力せよ。

意味
型判定 → 変換 → 他型へのキャスト → 出力の手順。

---

原文
If a conversion does not make any sense or overflows, display a message to inform the user that the type conversion is impossible. Include any header you need in order to handle numeric limits and special values.

和訳
変換が意味を持たない場合やオーバーフローする場合は、型変換が不可能であることをユーザーに伝えるメッセージを出力せよ。数値の限界や特殊値を扱うために必要なヘッダは自由にインクルードしてよい。

意味
異常ケースは「impossible」と表示し、`<limits>`等を使う。

---

原文（例1）
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0

和訳
./convert 0
char: 表示不可能
int: 0
float: 0.0f
double: 0.0

意味
整数0の入力時の出力例。

---

原文（例2）
./convert nan
char: impossible
int: impossible
float: nanf
double: nan

和訳
./convert nan
char: 不可能
int: 不可能
float: nanf
double: nan

意味
NaN入力時の出力例。

---

原文（例3）
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0

和訳
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0

意味
float入力を各型に変換した結果の例。

---


原文
Chapter VI

和訳
第6章

意味
章タイトル。

---

原文
Exercise 01: Serialization

和訳
課題01: シリアライゼーション

意味
課題のテーマはポインタの直列化と復元。

---

原文
Turn-in directory: ex01/

和訳
提出ディレクトリ: ex01/

意味
課題提出用フォルダ名。

---

原文
Files to turn in: Makefile, *.cpp, *.{h, hpp}

和訳
提出ファイル: Makefile, *.cpp, *.{h, hpp}

意味
必須の提出ファイル種類。

---

原文
Forbidden functions: None

和訳
使用禁止関数: なし

意味
特に制限なく標準関数が利用可能。

---

原文
Implement a class Serializer, which will not be initializable by the user in any way, with the following static methods:

和訳
ユーザーが初期化できないようにした `Serializer` クラスを実装せよ。このクラスは以下の静的メソッドを持つ：

意味
インスタンス化不可で静的関数のみを持つクラス。

---

原文
uintptr_t serialize(Data* ptr);
It takes a pointer and converts it to the unsigned integer type uintptr_t.

和訳
`uintptr_t serialize(Data* ptr);`
ポインタを受け取り、それを符号なし整数型 `uintptr_t` に変換する。

意味
ポインタのアドレス値を整数に変換するメソッド。

---

原文
Data* deserialize(uintptr_t raw);
It takes an unsigned integer parameter and converts it to a pointer to Data.

和訳
`Data* deserialize(uintptr_t raw);`
符号なし整数を受け取り、それを `Data` 構造体へのポインタに変換する。

意味
整数化されたポインタを元に戻すメソッド。

---

原文
Write a program to test that your class works as expected.

和訳
このクラスが正しく動作することを確認するテストプログラムを書け。

意味
`main`を作り、変換と復元を検証する。

---

原文
You must create a non-empty (meaning it has data members) Data structure.

和訳
空でない（データメンバを持つ）`Data` 構造体を作成しなければならない。

意味
テスト用にメンバ変数を持った構造体を用意する必要がある。

---

原文
Use serialize() on the address of the Data object and pass its return value to deserialize(). Then, ensure the return value of deserialize() compares equal to the original pointer.

和訳
`Data` オブジェクトのアドレスを `serialize()` に渡し、その戻り値を `deserialize()` に渡せ。その結果が元のポインタと等しいことを確認せよ。

意味
シリアライズ→デシリアライズで同じアドレスが戻ることをテストする。

---

原文
Do not forget to turn in the files of your Data structure.

和訳
`Data` 構造体のファイルを提出するのを忘れないこと。

意味
テスト用の `Data` 構造体定義も提出対象に含まれる。

---


原文
Chapter VII

和訳
第7章

意味
章タイトル。

---

原文
Exercise 02: Identify real type

和訳
課題02: 実際の型を識別する

意味
クラスの実行時型を判定する課題。

---

原文
Turn-in directory: ex02/

和訳
提出ディレクトリ: ex02/

意味
課題提出用のフォルダ指定。

---

原文
Files to turn in: Makefile, *.cpp, *.{h, hpp}

和訳
提出ファイル: Makefile, *.cpp, *.{h, hpp}

意味
提出が必要なファイルの種類。

---

原文
Forbidden functions: std::typeinfo

和訳
使用禁止関数: std::typeinfo

意味
`typeid` や `dynamic_cast` を伴う `typeinfo` の使用は禁止。

---

原文
Implement a Baseclass that has a public virtual destructor only. Create three empty classes A, B, and C, that publicly inherit from Base.

和訳
`Base` クラスを実装せよ。このクラスはパブリックな仮想デストラクタのみを持つ。さらに、空のクラス `A`, `B`, `C` を `Base` から public 継承すること。

意味
基底クラスはデストラクタのみ、派生クラスは中身が空でよい。

---

原文
These four classes don’t have to be designed in the Orthodox Canonical Form.

和訳
これら4つのクラスはオーソドックス・カノニカル・フォームで設計する必要はない。

意味
コピーコンストラクタ等の実装は不要。

---

原文
Implement the following functions:

和訳
以下の関数を実装せよ：

意味
要求される関数群のリスト。

---

原文
Base * generate(void);
It randomly instantiates A, B, or C and returns the instance as a Base pointer. Feel free to use anything you like for the random choice implementation.

和訳
`Base* generate(void);`
ランダムに `A`, `B`, `C` のいずれかをインスタンス化し、そのポインタを `Base*` として返す。乱数選択の方法は自由。

意味
ランダム生成関数。

---

原文
void identify(Base* p);
It prints the actual type of the object pointed to by p: "A", "B", or "C".

和訳
`void identify(Base* p);`
ポインタ `p` が指すオブジェクトの実際の型を判定し、"A"、"B"、"C" のいずれかを出力する。

意味
ポインタ経由で型を識別。

---

原文
void identify(Base& p);
It prints the actual type of the object referenced by p: "A", "B", or "C". Using a pointer inside this function is forbidden.

和訳
`void identify(Base& p);`
参照 `p` が指すオブジェクトの実際の型を判定し、"A"、"B"、"C" のいずれかを出力する。この関数内でポインタを使うことは禁止。

意味
参照経由で型を判定する実装を要求。

---

原文
Including the typeinfo header is forbidden.

和訳
`<typeinfo>` ヘッダのインクルードは禁止。

意味
`typeid` は使えない。

---

原文
Write a program to test that everything works as expected.

和訳
すべてが期待通り動作することを確認するテストプログラムを書け。

意味
main関数などでテスト実装が必須。

---


原文
Chapter VIII

和訳
第8章

意味
章タイトル。

---

原文
Submission and Peer Evaluation

和訳
提出とピア評価

意味
課題提出方法と評価時のルール。

---

原文
Submit your assignment to your Git repository as usual. Only the work inside your repository will be evaluated during the defense. Don’t hesitate to double-check the names of your folders and files to ensure they are correct.

和訳
課題は通常通りGitリポジトリに提出すること。防衛（口頭試問）ではリポジトリ内の内容のみが評価対象となる。フォルダやファイル名が正しいかを必ず確認すること。

意味
評価対象はリポジトリ内容のみ。名前間違いに注意。

---

原文
During the evaluation, a brief modification of the project may occasionally be requested. This could involve a minor behavior change, a few lines of code to write or rewrite, or an easy-to-add feature.

和訳
評価中に、プロジェクトへ軽微な変更を求められる場合がある。これには動作の微調整、数行のコード追加・修正、簡単な機能追加などが含まれる。

意味
その場で小規模な修正を課される可能性がある。

---

原文
While this step may not be applicable to every project, you must be prepared for it if it is mentioned in the evaluation guidelines.

和訳
このステップはすべての課題に適用されるわけではないが、評価ガイドラインに記載されている場合には対応できるように準備しておくこと。

意味
ガイドラインに書かれていたら必須対応。

---

原文
This step is meant to verify your actual understanding of a specific part of the project.

和訳
このステップは、プロジェクトの特定部分について実際に理解しているかを確認するためのものである。

意味
理解度確認の目的で修正が課される。

---

原文
The modification can be performed in any development environment you choose (e.g., your usual setup), and it should be feasible within a few minutes — unless a specific timeframe is defined as part of the evaluation.

和訳
修正は任意の開発環境（例: 普段の環境）で行うことができ、通常は数分以内に対応可能であることが求められる。ただし評価の一部として特定の時間制限が定義されている場合はその限りではない。

意味
普段の環境で短時間で修正できるようにしておく必要がある。

---

原文
You can, for example, be asked to make a small update to a function or script, modify a display, or adjust a data structure to store new information, etc.

和訳
例えば、関数やスクリプトの小さな修正、表示の変更、新しい情報を格納するためのデータ構造の調整などを求められることがある。

意味
具体例：関数変更、UI修正、構造体拡張など。

---

原文
The details (scope, target, etc.) will be specified in the evaluation guidelines and may vary from one evaluation to another for the same project.

和訳
詳細（範囲、対象など）は評価ガイドラインで指定され、同じ課題でも評価ごとに異なる場合がある。

意味
課題や評価者によって要求内容は変動する。

---





原文
SCALE FOR PROJECT CPP MODULE 06

和訳
CPP Module 06 評価基準

意味
このモジュールのピア評価チェックリスト。

---

原文
You should evaluate 1 student in this team

和訳
このチームでは1人の学生を評価すること。

意味
個別評価を前提。

---

原文
Introduction
Please comply with the following rules:

和訳
序文
以下のルールを守ること：

意味
評価の際に従うべき基本方針。

---

原文

* Remain polite, courteous, respectful and constructive throughout the evaluation process. The well-being of the community depends on it.

和訳
・評価プロセスを通じて礼儀正しく、敬意を払い、建設的であること。コミュニティの健全さはそれにかかっている。

意味
評価態度に関する規範。

---

原文

* Identify with the student or group whose work is evaluated the possible dysfunctions in their project. Take the time to discuss and debate the problems that may have been identified.

和訳
・評価対象の学生やグループと一緒に、プロジェクトにおける問題点を見つけ、時間をかけて議論すること。

意味
一方的に採点するのでなく対話すること。

---

原文

* You must consider that there might be some differences in how your peers might have understood the project's instructions and the scope of its functionalities. Always keep an open mind and grade them as honestly as possible. The pedagogy is useful only and only if the peer-evaluation is done seriously.

和訳
・仲間がプロジェクトの指示や機能範囲をどのように理解しているかには違いがあるかもしれない。それを考慮し、常にオープンな心で正直に評価すること。ピア評価が真剣に行われて初めて教育的効果がある。

意味
多様な解釈を尊重しつつ誠実に採点すること。

---

原文
Guidelines

和訳
ガイドライン

意味
評価の手順や注意点。

---

原文

* Only grade the work that was turned in the Git repository of the evaluated student or group.

和訳
・評価対象は、学生またはグループのGitリポジトリに提出された作業のみとする。

意味
外部のコードは評価対象外。

---

原文

* Double-check that the Git repository belongs to the student(s). Ensure that the project is the one expected. Also, check that 'git clone' is used in an empty folder.

和訳
・Gitリポジトリが学生のものであることを確認せよ。正しいプロジェクトであることを確認し、`git clone` は空のフォルダで行うこと。

意味
提出者と内容の正当性を確認。

---

原文

* Check carefully that no malicious aliases was used to fool you and make you evaluate something that is not the content of the official repository.

和訳
・悪意あるエイリアスで公式リポジトリ以外のものを評価させられていないか慎重に確認すること。

意味
セキュリティ上の注意。

---

原文

* To avoid any surprises and if applicable, review together any scripts used to facilitate the grading (scripts for testing or automation).

和訳
・予期せぬ事態を避けるため、必要なら評価を補助するスクリプト（テストや自動化用）を一緒に確認すること。

意味
補助ツールも共有確認。

---

原文

* If you have not completed the assignment you are going to evaluate, you have to read the entire subject prior to starting the evaluation process.

和訳
・評価対象の課題を自分で完了していない場合は、評価開始前に必ず課題の全内容を読むこと。

意味
事前理解が必須。

---

原文

* Use the available flags to report an empty repository, a non-functioning program, a Norm error, cheating, and so forth. In these cases, the evaluation process ends and the final grade is 0, or -42 in case of cheating. However, except for cheating, student are strongly encouraged to review together the work that was turned in, in order to identify any mistakes that shouldn't be repeated in the future.

和訳
・リポジトリが空、プログラムが動作しない、Normエラー、チートなどは用意されたフラグを使って報告する。その場合評価はそこで終了し、最終成績は0点（チートの場合は -42）。ただしチート以外では、将来繰り返さないために提出内容を一緒に確認することを強く推奨する。

意味
重大エラーの処理ルール。

---

原文

* You should never have to edit any file except the configuration file if it exists. If you want to edit a file, take the time to explicit the reasons with the evaluated student and make sure both of you are okay with this.

和訳
・設定ファイル以外を編集する必要はない。もし編集する場合は、理由を学生に明確に説明し、双方が合意してから行うこと。

意味
評価中の改変ルール。

---

原文

* You must also verify the absence of memory leaks. Any memory allocated on the heap must be properly freed before the end of execution. You are allowed to use any of the different tools available on the computer, such as leaks, valgrind, or e_fence. In case of memory leaks, tick the appropriate flag.

和訳
・メモリリークがないことも確認する必要がある。ヒープに確保されたメモリはすべて実行終了前に解放されなければならない。利用可能なツール（leaks, valgrind, e_fenceなど）は自由に使える。リークがあれば該当フラグを付ける。

意味
必須のメモリ管理確認。

---

原文
Attachments
subject.pdf

和訳
添付資料
subject.pdf

意味
課題本文が添付されている。

---

原文
Preliminary tests
If cheating is suspected, the evaluation stops here. Use the "Cheat" flag to report it. Take this decision calmly, wisely, and please, use this button with caution.

和訳
事前テスト
チートが疑われる場合、ここで評価を終了する。「Cheat」フラグを使って報告すること。この判断は冷静かつ慎重に行い、このボタンは慎重に使用すること。

意味
チート検出時の対応。

---

原文
Prerequisites

和訳
前提条件

意味
評価を進める前の基本要件。

---

原文
The code must compile with c++ and the flags -Wall -Wextra -Werror Don’t forget this project has to follow the C++98 standard. Thus, C++11 (and later) functions or containers are NOT expected.

和訳
コードは `c++` で `-Wall -Wextra -Werror` フラグを付けてコンパイルできなければならない。このプロジェクトはC++98規格に従う必要がある。したがって、C++11以降の関数やコンテナは使用不可。

意味
コンパイル条件とC++バージョンの制約。

---

原文
Any of these means you must not grade the exercise in question:
A function is implemented in a header file (except for template functions).
A Makefile compiles without the required flags and/or another compiler than c++.

和訳
以下に該当する場合、その課題は採点してはならない：
・ヘッダファイルに関数が実装されている（テンプレート関数を除く）
・Makefileが必須フラグを付けず、またはc++以外のコンパイラでコンパイルする

意味
不正な実装形式は即NG。

---

原文
Any of these means that you must flag the project with "Forbidden Function":
Use of a "C" function (*alloc, *printf, free).
Use of a function not allowed in the exercise guidelines.
Use of "using namespace <ns_name>" or the "friend" keyword.
Use of an external library, or features from versions other than C++98.

和訳
以下に該当する場合、プロジェクトに「Forbidden Function」フラグを付けること：
・C言語関数（*alloc, *printf, free）の使用
・課題で許可されていない関数の使用
・`using namespace <ns_name>` や `friend` キーワードの使用
・外部ライブラリ、またはC++98以外の機能の使用

意味
禁止機能を使った場合の処理。

---

原文
Exercise 00: Conversion of scalar types
This exercise is about using the static_cast.

和訳
課題00: スカラ型の変換
この課題は `static_cast` の使用がテーマ。

意味
キャスト演習課題。

---

原文
Did the student create a class with a private constructor, and static methods ?
Did the student use the static_cast to convert values?
Accept the use of implicit casts for promotion casts only.
Does the program work as required?

和訳
・学生はプライベートコンストラクタと静的メソッドを持つクラスを作成したか？
・`static_cast` を使って値を変換したか？
・昇格キャストについては暗黙のキャストを許可する。
・プログラムは要求通り動作するか？

意味
採点チェックポイント。

---

原文
Anyway, please don't be too uncompromising towards the exercise's outputs if the spirit of the exercise is respected. Even if this exercise is wrong, continue the evaluation process.

和訳
いずれにせよ、この課題の出力については課題の趣旨が守られていれば厳しすぎないようにすること。この課題が間違っていても評価プロセスは続行すること。

意味
柔軟に対応しつつ次の課題も評価。

---

原文
Exercise 01: Serialization
This exercise is about using the reinterpret_cast.

和訳
課題01: シリアライゼーション
この課題は `reinterpret_cast` の使用がテーマ。

意味
アドレス変換課題。

---

原文
Does the program work as required?
Did the student create a class with a private constructor, and static methods ?
The reinterpret_cast<> should be used twice:
First from data* to uintptr_t.
Then, from uintptr_t to data*.
And the resulting data struct should be usable.

和訳
・プログラムは要求通り動作するか？
・プライベートコンストラクタと静的メソッドを持つクラスを作成したか？
・`reinterpret_cast<>` を2回使ったか？
　1. `Data*` から `uintptr_t`
　2. `uintptr_t` から `Data*`
・変換後のData構造体は正しく使えるか？

意味
評価観点。

---

原文
Exercise 02: Identify real type
This exercise is about using the dynamic_cast.

和訳
課題02: 実際の型を識別する
この課題は `dynamic_cast` の使用がテーマ。

意味
実行時型識別課題。

---

原文
Does the program work as required?
Check the code. Did the student use the dynamic_cast to identify the real type?
void identify(Base* p) should check if the cast return is NULL.
void identify(Base& p) should use a try and catch block to check if the cast failed.
(In case you're wondering, the header <typeinfo> must not appear anywhere.)

和訳
・プログラムは要求通り動作するか？
・学生は `dynamic_cast` を使って実際の型を識別したか？
・`void identify(Base* p)` はキャスト結果がNULLかどうかを確認しているか？
・`void identify(Base& p)` は try-catch ブロックを使ってキャスト失敗を確認しているか？
・なお `<typeinfo>` ヘッダは一切出現してはならない。

意味
型判定の正しい実装を確認すること。



