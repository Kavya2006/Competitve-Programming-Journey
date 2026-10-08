<h2><a href="https://codeforces.com/contest/1133/problem/D" target="_blank" rel="noopener noreferrer">1133D — Zero Quantity Maximization</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1133D](https://codeforces.com/contest/1133/problem/D) |

## Topics
`hashing` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">D. Zero Quantity Maximization</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given two arrays $$$a$$$ and $$$b$$$, each contains $$$n$$$ integers.</p><p>You want to create a new array $$$c$$$ as follows: choose some real (i.e. not necessarily integer) number $$$d$$$, and then for every $$$i \in [1, n]$$$ let $$$c_i := d \cdot a_i + b_i$$$.</p><p>Your goal is to maximize the number of zeroes in array $$$c$$$. What is the largest possible answer, if you choose $$$d$$$ optimally?</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of elements in both arrays.</p><p>The second line contains $$$n$$$ integers $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$).</p><p>The third line contains $$$n$$$ integers $$$b_1$$$, $$$b_2$$$, ..., $$$b_n$$$ ($$$-10^9 \le b_i \le 10^9$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print one integer — the maximum number of zeroes in array $$$c$$$, if you choose $$$d$$$ optimally.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0049204820247062375" id="id003199390907329167" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0049204820247062375">5
1 2 3 4 5
2 4 7 11 3
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0035495389092970164" id="id004269329252265295" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0035495389092970164">2
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0024507587272193576" id="id008639698478286546" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0024507587272193576">3
13 37 39
1 2 3
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009526393356885955" id="id00711429478992229" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009526393356885955">2
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00712570472389741" id="id000259051170858956" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00712570472389741">4
0 0 0 0
1 2 3 4
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009950176070886272" id="id008454459560797645" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009950176070886272">0
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id008125554348292252" id="id007562480221723472" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008125554348292252">3
1 2 -1
-6 -12 6
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009258055888448287" id="id0012485913857781572" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009258055888448287">3
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example, we may choose $$$d = -2$$$.</p><p>In the second example, we may choose $$$d = -\frac{1}{13}$$$.</p><p>In the third example, we cannot obtain any zero in array $$$c$$$, no matter which $$$d$$$ we choose.</p><p>In the fourth example, we may choose $$$d = 6$$$.</p></div>