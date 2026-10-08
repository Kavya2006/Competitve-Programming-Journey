<h2><a href="https://codeforces.com/contest/2043/problem/B" target="_blank" rel="noopener noreferrer">2043B — Digits</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2043B](https://codeforces.com/contest/2043/problem/B) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Digits</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Artem wrote the digit $$$d$$$ on the board exactly $$$n!$$$ times in a row. So, he got the number $$$dddddd \dots ddd$$$ (exactly $$$n!$$$ digits).</p><p>Now he is curious about which <span class="tex-font-style-bf">odd</span> digits from $$$1$$$ to $$$9$$$ divide the number written on the board.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. The next $$$t$$$ test cases follow.</p><p>Each test case consists of a single line containing two integers $$$n$$$ and $$$d$$$ ($$$2 \le n \le 10^9$$$, $$$1 \le d \le 9$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output the odd digits in ascending order that divide the number written on the board.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id007386373367679959" id="id007236917497000932" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007386373367679959"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">2 6</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">7 1</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">8 5</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0029174500677661386" id="id009726678648242764" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0029174500677661386">1 3 
1 3 7 9 
1 3 5 7 9 
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>The factorial of a positive integer $$$n$$$ ($$$n!$$$) is the product of all integers from $$$1$$$ to $$$n$$$. For example, the factorial of $$$5$$$ is $$$1 \cdot 2 \cdot 3 \cdot 4 \cdot 5 = 120$$$.</p></div>