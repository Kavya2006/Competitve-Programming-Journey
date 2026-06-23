<h2><a href="https://codeforces.com/contest/1556/problem/A" target="_blank" rel="noopener noreferrer">1556A — A Variety of Operations</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1556A](https://codeforces.com/contest/1556/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. A Variety of Operations</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><center> <img class="tex-graphics" height="302px" src="https://espresso.codeforces.com/74a7c90cdaed76ee50fdbac494aa179c66975639.png" style="max-width: 100.0%;max-height: 100.0%;" width="454px"> </center><p>William has two numbers $$$a$$$ and $$$b$$$ initially both equal to <span class="tex-font-style-bf">zero</span>. William mastered performing three different operations with them quickly. Before performing each operation some positive integer $$$k$$$ is picked, which is then used to perform one of the following operations: (note, that for each operation you can choose a <span class="tex-font-style-bf">new</span> positive integer $$$k$$$)</p><ol> <li> add number $$$k$$$ to both $$$a$$$ and $$$b$$$, or </li><li> add number $$$k$$$ to $$$a$$$ and subtract $$$k$$$ from $$$b$$$, or </li><li> add number $$$k$$$ to $$$b$$$ and subtract $$$k$$$ from $$$a$$$. </li></ol><p>Note that after performing operations, numbers $$$a$$$ and $$$b$$$ may become negative as well.</p><p>William wants to find out the minimal number of operations he would have to perform to make $$$a$$$ equal to his favorite number $$$c$$$ and $$$b$$$ equal to his second favorite number $$$d$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). Description of the test cases follows.</p><p>The only line of each test case contains two integers $$$c$$$ and $$$d$$$ $$$(0 \le c, d \le 10^9)$$$, which are William's favorite numbers and which he wants $$$a$$$ and $$$b$$$ to be transformed into.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output a single number, which is the minimal number of operations which William would have to perform to make $$$a$$$ equal to $$$c$$$ and $$$b$$$ equal to $$$d$$$, or $$$-1$$$ if it is impossible to achieve this using the described operations.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0042535242968484677" id="id003707774697466024" class="input-output-copier">Copy</div></div><pre id="id0042535242968484677">6
1 2
3 5
5 3
6 6
8 0
0 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003343894902989707" id="id009653286935944997" class="input-output-copier">Copy</div></div><pre id="id003343894902989707">-1
2
2
1
2
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Let us demonstrate one of the suboptimal ways of getting a pair $$$(3, 5)$$$:</p><ul> <li> Using an operation of the first type with $$$k=1$$$, the current pair would be equal to $$$(1, 1)$$$. </li><li> Using an operation of the third type with $$$k=8$$$, the current pair would be equal to $$$(-7, 9)$$$. </li><li> Using an operation of the second type with $$$k=7$$$, the current pair would be equal to $$$(0, 2)$$$. </li><li> Using an operation of the first type with $$$k=3$$$, the current pair would be equal to $$$(3, 5)$$$. </li></ul></div>