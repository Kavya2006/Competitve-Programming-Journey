<h2><a href="https://codeforces.com/contest/1421/problem/A" target="_blank" rel="noopener noreferrer">1421A — XORwice</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1421A](https://codeforces.com/contest/1421/problem/A) |

## Topics
`bitmasks` `greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. XORwice</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p><span class="tex-font-style-it">In order to celebrate Twice's 5th anniversary, Tzuyu and Sana decided to play a game.</span></p><p>Tzuyu gave Sana two integers $$$a$$$ and $$$b$$$ and a really important quest.</p><p>In order to complete the quest, Sana has to output the smallest possible value of ($$$a \oplus x$$$) + ($$$b \oplus x$$$) for any given $$$x$$$, where $$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>. </p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^{4}$$$). Description of the test cases follows.</p><p>The only line of each test case contains two integers $$$a$$$ and $$$b$$$ ($$$1 \le a, b \le 10^{9}$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each testcase, output the smallest possible value of the given expression.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005431325561333114" id="id001507603026946288" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005431325561333114">6
6 12
4 9
59 832
28 14
4925 2912
1 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0020530481552169866" id="id0044257732952069506" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0020530481552169866">10
13
891
18
6237
0
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>For the first test case Sana can choose $$$x=4$$$ and the value will be ($$$6 \oplus 4$$$) + ($$$12 \oplus 4$$$) = $$$2 + 8$$$ = $$$10$$$. It can be shown that this is the smallest possible value.</p></div>