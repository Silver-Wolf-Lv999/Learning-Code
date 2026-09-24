/*这个程序编译时不会报任何错误，而且即使在调用 s.clear() 之后再使用 word，也同样不会报错。因为 word 和 s 的状态完全没有关联，所以 word 仍然包含值 5。我们可以尝试用这个值 5 从变量 s 中提取第一个单词，但这会出 bug，因为在把 5 保存进 word 之后，s 的内容已经变了。

我们不得不时刻担心 word 的索引与 s 中的数据不再同步，这既繁琐又易出错！如果编写这么一个 second_word 函数的话，管理索引这件事将更加容易出问题。它的签名看起来像这样 */
fn main() {
    let mut s = String::from("hello world");

    let word = first_word(&s);

    print!("{word}");
    s.clear();
}

fn first_word(s: &String) -> usize {
    /*编写一个函数，接收一个由空格分隔单词的字符串,并返回它在该字符串中找到的第一个单词。
     * 如果函数在该字符串中没有找到空格，那么整个字符串就是一个单词，因此应该返回整个字符串。
     */

    //用as_bytes()将String转化为字节数
    let bytes = s.as_bytes();

    /*iter 方法会返回集合中的每个元素，而 enumerate 会包装 iter 的结果，把每个元素作为元组的一部分返回。
     * enumerate 返回的元组中，第一个元素是索引，第二个元素是该元素的引用。
     */
    for (i, &item) in bytes.iter().enumerate() {
        if item == b' ' {
            return i;
        }
    }

    s.len()
}
