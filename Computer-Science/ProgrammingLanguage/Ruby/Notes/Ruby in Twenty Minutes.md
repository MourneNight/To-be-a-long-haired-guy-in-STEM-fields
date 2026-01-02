
#### 方法定义（def）
```ruby
def say_hi(names = "World")  # 方法名 say_hi，默认参数 "World"
  puts "Hello #{names}!"
end
```

- `def` 开始方法定义，`end` 结束
- 参数可设默认值：未传参时使用默认值
- `#{expr}`：字符串插值，将表达式结果插入字符串

#### 类定义（class）
```ruby
class MegaGreeter
  attr_accessor :names               # 自动生成 names 和 names= 方法

  def initialize(names = "World")    # 构造函数，new 时自动调用
    @names = names                   # @names 是实例变量
  end

  def say_hi
    if @names.nil?
      puts "..."
    elsif @names.respond_to?(:each)
      @names.each { |name| puts "Hello #{name}!" }
    else
      puts "Hello #{@names}!"
    end
  end

  def say_bye
    if @names.nil?
      puts "..."
    elsif @names.respond_to?(:join)
      puts "Goodbye #{@names.join(", ")}. Come back soon!"
    else
      puts "Goodbye #{@names}. Come back soon!"
    end
  end
end
```

#### 使用示例
```ruby
greeter = MegaGreeter.new("Pat")   # 创建对象，调用 initialize
greeter.say_hi                     # => Hello Pat!
greeter.say_bye                    # => Goodbye Pat. Come back soon!

greeter.names = ["Alice", "Bob"]   # 使用 attr_accessor 设置
greeter.say_hi                     # => Hello Alice! / Hello Bob!

greeter.names = nil
greeter.say_hi                     # => ...
```

#### 关键概念
| 概念               | 说明                                      |
|--------------------|-------------------------------------------|
| `class`            | 定义类，类名首字母大写                    |
| `initialize`       | 构造函数，`new` 时自动调用                |
| `@var`             | 实例变量，属于对象，在类内所有方法可见    |
| `attr_accessor :var`| 自动生成 getter（var）和 setter（var=）   |
| `instance_methods` | 查看实例方法                              |
| `instance_methods(false)` | 只查看本类定义的方法（不含继承）   |

#### 循环与迭代器
```ruby
@names.each do |name|    # each 是迭代器方法
  puts "Hello #{name}!"
end

# 简写形式（推荐）
@names.each { |name| puts "Hello #{name}!" }
```

- `each` 遍历可枚举对象，执行代码块
- `|name|` 是块参数

#### 脚本入口判断（主程序守卫）
```ruby
if __FILE__ == $0
  # 此代码仅在直接运行本文件时执行
  greeter = MegaGreeter.new
  greeter.say_hi
  greeter.say_bye
end
```

- `__FILE__`：当前文件名
- `$0`：Ruby 解释器启动时执行的文件名
- 作用：允许文件既可作为脚本直接运行，又可被 `require` 作为模块引入而不执行主代码