<h2><a href="https://codeforces.com/contest/1513/problem/B" target="_blank" rel="noopener noreferrer">1513B — AND Sequences</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1513B](https://codeforces.com/contest/1513/problem/B) |

## Topics
`bitmasks` `combinatorics` `constructive algorithms` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. AND Sequences</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>A sequence of $$$n$$$ non-negative integers ($$$n \ge 2$$$) $$$a_1, a_2, \dots, a_n$$$ is called good if for all $$$i$$$ from $$$1$$$ to $$$n-1$$$ the following condition holds true: $$$$$$a_1 \: \& \: a_2 \: \& \: \dots \: \& \: a_i = a_{i+1} \: \& \: a_{i+2} \: \& \: \dots \: \& \: a_n,$$$$$$ where $$$\&$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND operation</a>.</p><p>You are given an array $$$a$$$ of size $$$n$$$ ($$$n \geq 2$$$). Find the number of permutations $$$p$$$ of numbers ranging from $$$1$$$ to $$$n$$$, for which the sequence $$$a_{p_1}$$$, $$$a_{p_2}$$$, ... ,$$$a_{p_n}$$$ is good. Since this number can be large, output it modulo $$$10^9+7$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$), denoting the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the size of the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 10^9$$$) — the elements of the array.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Output $$$t$$$ lines, where the $$$i$$$-th line contains the number of good permutations in the $$$i$$$-th test case modulo $$$10^9 + 7$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id007694179431300618" id="id004562776459350729" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007694179431300618">4
3
1 1 1
5
1 2 3 4 5
5
0 2 0 3 0
4
1 3 5 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0007906093272760473" id="id008099186936375438" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0007906093272760473">6
0
36
4
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, since all the numbers are equal, whatever permutation we take, the sequence is good. There are a total of $$$6$$$ permutations possible with numbers from $$$1$$$ to $$$3$$$: $$$[1,2,3]$$$, $$$[1,3,2]$$$, $$$[2,1,3]$$$, $$$[2,3,1]$$$, $$$[3,1,2]$$$, $$$[3,2,1]$$$.</p><p>In the second test case, it can be proved that no permutation exists for which the sequence is good.</p><p>In the third test case, there are a total of $$$36$$$ permutations for which the sequence is good. One of them is the permutation $$$[1,5,4,2,3]$$$ which results in the sequence $$$s=[0,0,3,2,0]$$$. This is a good sequence because </p><ul> <li> $$$ s_1 = s_2 \: \& \: s_3 \: \& \: s_4 \: \& \: s_5 = 0$$$, </li><li> $$$ s_1 \: \& \: s_2 = s_3 \: \& \: s_4 \: \& \: s_5 = 0$$$, </li><li> $$$ s_1 \: \& \: s_2 \: \& \: s_3 = s_4 \: \& \: s_5 = 0$$$, </li><li> $$$ s_1 \: \& \: s_2 \: \& \: s_3 \: \& \: s_4 = s_5 = 0$$$. </li></ul><p> </p></div>