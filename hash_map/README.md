# hash_map

這個container目前不是C++ 標準container。 (截至2017/08/19) <br />
所以可以看到main.cpp裡面,  <br />
使用hash_map時使用的namespace不是std, 而是__gnu_cxx。 <br />
這代表現在include的hash_map是gnu g++ compiler針對STL的一種implementation。 <br />

值得注意的是hash_map的constructor的可以和map以一樣只填前兩個key, value定義。 <br />
而第三四五個參數可以不填, 但是是用functor的方式傳入的。 <br />
所以main.cpp裡的eqstr就是一個用來定義什麼叫做key一樣的functor。 <br />
 
# reference

hash_map: https://www.sgi.com/tech/stl/hash_map.html <br />
functor: https://kheresy.wordpress.com/2010/11/09/function_object/ <br />



