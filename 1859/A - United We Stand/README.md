<h2><a href="https://codeforces.com/contest/1859/problem/A" target="_blank" rel="noopener noreferrer">1859A — United We Stand</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1859A](https://codeforces.com/contest/1859/problem/A) |

## Topics
`constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. United We Stand</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Given an array $$$a$$$ of length $$$n$$$, containing integers. And there are two initially empty arrays $$$b$$$ and $$$c$$$. You need to add each element of array $$$a$$$ to <span class="tex-font-style-bf">exactly one</span> of the arrays $$$b$$$ or $$$c$$$, in order to satisfy the following conditions:</p><ul> <li> Both arrays $$$b$$$ and $$$c$$$ are non-empty. More formally, let $$$l_b$$$ be the length of array $$$b$$$, and $$$l_c$$$ be the length of array $$$c$$$. Then $$$l_b, l_c \ge 1$$$. </li><li> For any two indices $$$i$$$ and $$$j$$$ ($$$1 \le i \le l_b, 1 \le j \le l_c$$$), $$$c_j$$$ <span class="tex-font-style-bf">is not</span> a divisor of $$$b_i$$$. </li></ul><p>Output the arrays $$$b$$$ and $$$c$$$ that can be obtained, or output $$$-1$$$ if they do not exist.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 500$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 100$$$) — the length of array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the elements of array $$$a$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output a single integer $$$-1$$$ if a solution does not exist.</p><p>Otherwise, in the first line, output two integers $$$l_b$$$ and $$$l_c$$$ — the lengths of arrays $$$b$$$ and $$$c$$$ respectively.</p><p>In the second line, output $$$l_b$$$ integers $$$b_1, b_2, \ldots, b_{l_b}$$$ — the elements of array $$$b$$$.</p><p>In the third line, output $$$l_c$$$ integers $$$c_1, c_2, \ldots, c_{l_c}$$$ — the elements of array $$$c$$$.</p><p>If there are multiple solutions, output any of them. You can output the elements of the arrays in any order.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009254495601270105" id="id00775045950350638" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009254495601270105"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">2 2 2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">1 2 3 4 5</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">1 3 5</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">7</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">1 7 7 2 9 1 4</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">4 8 12 12 4</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007847133808814056" id="id009191590742806451" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007847133808814056">-1
3 2
1 3 5 
2 4 
1 2
1 
3 5 
2 5
1 1 
2 4 7 7 9 
3 2
4 8 4 
12 12 
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, a solution does not exist.</p><p>In the second test case, we can obtain $$$b = [1, 3, 5]$$$ and $$$c = [2, 4]$$$. Then elements $$$2$$$ and $$$4$$$ do not divide elements $$$1, 3$$$ and $$$5$$$.</p><p>In the fifth test case, we can obtain $$$b = [4, 8, 4]$$$ and $$$c = [12, 12]$$$.</p></div>