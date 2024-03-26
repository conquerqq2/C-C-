# -
    数据结构设计：定义了一个结构体 Injection 来表示每个注射器的组合。结构体包含两个成员变量：dosage 表示注射剂量，singleDosage 表示单次注射剂量。
    生成组合函数：generateCombinations() 函数用于生成所有可能的注射器组合。在这个函数中，定义了五种注射剂量和十个不同的注射次数。然后，使用嵌套的循环遍历每种注射剂量和每个注射次数的组合，然后计算单次注射剂量，最后组合存储在 combinations 向量中。
    主函数：在 main() 函数中，调用 generateCombinations() 函数来生成所有的组合，并通过循环遍历输出每个组合的注射剂量和单次注射剂量。
    运行结果：
   
    https://github.com/conquerqq2/-/blob/b222e1e157093b3599696fa3b214460ee1f86a6b/QQ%E6%88%AA%E5%9B%BE20240326141954.png
线上笔试题目
