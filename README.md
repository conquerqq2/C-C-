# -
    数据结构设计：定义了一个结构体 Injection 来表示每个注射器的组合。结构体包含两个成员变量：dosage 表示注射剂量，singleDosage 表示单次注射剂量，times表示注射次数。
    生成组合函数：generateCombinations() 函数负责生成所有可能的注射器组合。在这个函数中，定义了五种注射剂量和从10到180的注射次数范围，每次递增10。使用嵌套的循环遍历每种注射剂量和每个注射次数的组合，并计算单次注射剂量，然后将组合存储在 combinations 向量中。
    主函数：在 main() 函数中，调用 generateCombinations() 函数来生成所有的组合，并通过循环遍历输出每个组合的注射剂量和单次注射剂量，以及注射次数。
    运行结果：
    https://github.com/conquerqq2/C-C-/blob/b4ef82974b4d18df503485f9161906f60a08024e/QQ%E6%88%AA%E5%9B%BE20240326152902.png
    https://github.com/conquerqq2/C-C-/blob/b373366379b2dc194dd1dec223f1ba327177ecaf/QQ%E6%88%AA%E5%9B%BE20240326152832.png
    https://github.com/conquerqq2/C-C-/blob/64d0c06007aa704c8918f0efb751de1072c8d028/QQ%E6%88%AA%E5%9B%BE20240326152816.png
    https://github.com/conquerqq2/C-C-/blob/f8c5711cefe34bcb222bff25ca5e64bb787a9fff/QQ%E6%88%AA%E5%9B%BE20240326152755.png
线上笔试题目
