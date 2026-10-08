<h2><a href="https://codeforces.com/contest/1790/problem/E" target="_blank" rel="noopener noreferrer">1790E — Vlad and a Pair of Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1790E](https://codeforces.com/contest/1790/problem/E) |

## Topics
`bitmasks` `constructive algorithms`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">E. Vlad and a Pair of Numbers</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Vlad found two positive numbers $$$a$$$ and $$$b$$$ ($$$a,b \gt 0$$$). He discovered that $$$a \oplus b = \frac{a + b}{2}$$$, where $$$\oplus$$$ means the <a href="http://tiny.cc/xor_wiki_eng">bitwise exclusive OR</a> , and division is performed without rounding..</p><p>Since it is easier to remember one number than two, Vlad remembered only $$$a\oplus b$$$, let's denote this number as $$$x$$$. Help him find any suitable $$$a$$$ and $$$b$$$ or tell him that they do not exist.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input data contains the single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases in the test. </p><p>Each test case is described by a single integer $$$x$$$ ($$$1 \le x \le 2^{29}$$$) — the number that Vlad remembered.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Output $$$t$$$ lines, each of which is the answer to the corresponding test case. As the answer, output $$$a$$$ and $$$b$$$ ($$$0  \lt  a,b \le 2^{32}$$$), such that $$$x = a \oplus b = \frac{a + b}{2}$$$. If there are several answers, output any of them. If there are no matching pairs, output <span class="tex-font-style-tt">-1</span>.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009699552257779975" id="id005646201295419486" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009699552257779975"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">6</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">10</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">6</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">18</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">36</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0043242662416642375" id="id003035085121318297" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0043242662416642375">3 1
-1
13 7
-1
25 11
50 22</pre></div></div></div>